console.log('Loading function');

var AWS = require('aws-sdk');
var dynamo = new AWS.DynamoDB.DocumentClient();

/**
 * Provide an event that contains the following keys:
 *
 *   - operation: one of the operations in the switch statement below
 *   - tableName: required for operations that interact with DynamoDB
 *   - payload: a parameter to pass to the operation being performed
 */
exports.handler = function(event, context, callBack) {
    //console.log('Received event:', JSON.stringify(event, null, 2));

    var operation = event.operation;

    if (event.tableName) {
        event.payload.TableName = event.tableName;
    }

    switch (operation) {
        case 'create':
            dynamo.put(event.payload, callBack);
            break;
        case 'read':
            dynamo.get(event.payload, callBack);
            break;
        case 'update':
            dynamo.update(event.payload, callBack);
            break;
        case 'delete':
            dynamo.delete(event.payload, callBack);
            break;
        case 'list':
            dynamo.scan(event.payload, callBack);
            break;
        case 'echo':
            callBack(null, "Success");
            break;
        case 'ping':
            callBack(null, "pong");
            break;
        default:
            callBack('Unknown operation: ${operation}');
    }
};
