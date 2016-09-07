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
exports.handler = function(event, context, catBack) {
    //console.log('Received event:', JSON.stringify(event, null, 2));

    var operation = event.operation;

    if (event.tableName) {
        event.payload.TableName = event.tableName;
    }

    switch (operation) {
        case 'create':
            dynamo.put(event.payload, catBack);
            break;
        case 'read':
            dynamo.get(event.payload, catBack);
            break;
        case 'update':
            dynamo.update(event.payload, catBack);
            break;
        case 'delete':
            dynamo.delete(event.payload, catBack);
            break;
        case 'list':
            dynamo.scan(event.payload, catBack);
            break;
        case 'echo':
            catBack(null, "Success");
            break;
        case 'ping':
            catBack(null, "pong");
            break;
        default:
            catBack('Unknown operation: ${operation}');
    }
};
