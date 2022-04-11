Swagger
=======

- use yaml or json

> swagger tools:
- online only
    - [swagger hub](https://app.swaggerhub.com): online API documentation
    - [swagger inspector](https://inspector.swagger.io/builder): like postman but it's a web app
- swagger node pakage: offline API documentation
- swagger editor: like swagger hub but provided offline and online
- swagger UI: to put your APIs documentations at you site
    run from a command line and we will output here HTML based documentation from this single JSON file



OAuth2 Third-Party Authentication (Facebook - Google - Twitter)
JWT
Passport Stratigies:
    - Local
    - JWT
    - facebook


complete API description which can be furthermore consume both by humans directly or by using some tools to generate documentation from it it's quite easy there for example there is like swag a UI project which you can run from a command line and we will output here HTML based documentation from this single JSON file


$ npm install -g swagger
$ swagger project create <hello-world>
$ swagger project edit -> open Swagger Editor in browser
$ swagger project start





REQUIRED
- openapi: string
- Info Object
- Paths Object


https://swagger.io/specification/







how to use header into swagger
authentication

 swagger-jsdoc@7x (node14x) since it requires import instead of "require". The easiest solution was to use swagger-jsdoc@6x
+
const openapiSpecification = await swaggerJsdoc(options);

Is there anyway to generate some default documentation without writing the API Documentations (comments/openapi)  manually? Like in ASP.NET core?