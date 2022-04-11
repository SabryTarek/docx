Ci/CD
===


### .travis.yml

language: node_js
node_js:
  - "4"
  - "6"
  - "7"
  - "8"
before_install:
  - npm update -g npm
script: ./bin/cli.js test --trace
sudo: false







[jenkins](https://www.jenkins.io)
===
jenkins x

java

docker run -p 8080:8080 -p 50000:50000 jenkins
docker run -p 8080:8080 -p 50000:50000 jenkins/jenkins
/var/jenkins_home/secrets/initialAdminPassword
