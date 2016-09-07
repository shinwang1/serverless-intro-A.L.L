# Simple Serverless Demo using Amazon Web Services (AWS)

See `index.html` [live](http://dbcserverlesscatbucket.s3-website-us-east-1.amazonaws.com/).  

## Serverless cats, y'all!

When the client loads `index.html`,  
which is served statically, from an AWS S3 Bucket,  
an HTTP request is made to an AWS API Gateway,  
that triggers an AWS Lambda function,  
that scans an AWS DynamoDB table  
and relays the table data back to the API Gateway,  
which sends it back to the client,  
which shows the user the names of _all the cats_.


When a user enters a cat name into the text input element,  
and clicks the submit button,  
an HTTP request is made, with a different body,  
to the same API Gateway,  
which relays the data to the same Lambda function,  
which uses control flow to know to add a new item to the DynamoDB table.  
Then, the Lambda function sends a success code to the API Gateway,  
which sends a success code to the client,  
which triggers the first HTTP request, again!  

# Additional Resources
- [awesome AWS serverless tutorial](https://github.com/awslabs/aws-lambda-zombie-workshop)
- [AWS Lambda & DynamoDB tutorial](http://docs.aws.amazon.com/lambda/latest/dg/with-on-demand-https-example.html)
- [easy mode?](https://claudiajs.com/)
