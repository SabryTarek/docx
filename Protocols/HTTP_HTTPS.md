


http 1.0 open and close tcp connection after each request

2.2 keep-alive

currently I'm not gonna talk about the previous old SSL stuff it is completely outdated and is very unsecure




----------------------------------------------------------------------------------------------------------------------
[lighthttpd](https://www.lighttpd.net/)
===

- install from source code
- install from distro repositories :apt install lighttpd

load balancing scheme === load balancing algorithm
----------------------------------------------------------------------------------------------------------------------
[Caddy2](https://caddyserver.com/)
[Caddy](https://caddyserver.com/v1)

- http/2 === QUIC if approved by Internet Engineering Task Force

run it locally as just
vanilla unsecured HTTP webserver which
we have done that a lot

https://caddyserver.com/v1/tutorial/beginner


caddy
caddy -host <URL>

duckdns
----------------------------------------------------------------------------------------------------------------------
traefik
=============

sudo mkdir /opt/traefik



cat << EOF > /opt/traefik/traefik.toml
debug = false

logLevel = "ERROR"
defaultEntryPoints = ["http"]

[entryPoints]
  [entryPoints.http]
  address = ":80"

[api]

[docker]
endpoint = "unix:///var/run/docker.sock"
domain = "domain.com"
watch = true
exposedByDefault = false
EOF




sudo docker run -d --name traefik -p 8080:8080 -p 80:80 \
-v /opt/traefik/traefik.toml:/etc/traefik/traefik.toml \
-v /var/run/docker.sock:/var/run/docker.sock \
traefik

sudo docker volume create portainer_data
sudo docker run -d --name portainer -p 9000:9000 \
-v /var/run/docker.sock:/var/run/docker.sock \
-v portainer_data:/data \
-l traefik.enable=true \
-l traefik.frontend.rule=Host:portainer.domain.com \
-l traefik.port=9000 \
-l traefik.protocol=http \
portainer/portainer




----------------------------------------------------------------------------------------------------------------------
[varnish](https://varnish-cache.org/)
=====================================

> Brief:
    - reverse proxy web accelerator
    - written in C
    - designed to improve the HTTP performance by using server-side caching

> Table of Content:
    - how varnish works
    - spin up a varnish docker container
    - set up an HTTP and https varnish configuration
    - talk about the pros and cons of this tech



Varnish Open Source
VarnishPlus 

VCL (Varnish Configuration Language)








## Referances:

> [Hussein Nasser](https://www.youtube.com/watch?v=-cWs6eoyaLg)
    - Classic HTTP Architecture 1:53
    - How Varnish Works 3:50
    - Demo HTTP 7:50
    - Demo HTTPS 18:23
    - Varnish Pros 28:43 
    - Varnish Cons 39:26


Varnish works as a layer 7 reverse proxy
why did I insert layer 7 there 
    because it's an application reverse proxy so it works at the application level
     and guess what if you're in an application level you have to look at the data to understand what's going on right because well we're caching right 
     [for caching something we're looking at the HTTP content it cannot be encrypted I cannot cache encrypted stuff it's useless right so what do we do is basically varnish design is works only an HTTP unencrypted HTTP right] so that sounds scary but we're gonna get to it right so so that's why I said layer seven reverse proxy and not layer four because you cannot really do much caching layer four right and I'm gonna reference a video between layer seven layer four load balancers and proxies



 how does it cache a cache by default anything that is get requests if you make a get request it will look at that okay give the course are very semantically it's cashable because it's unimportant because they are safe right and we made a video so hope to get vs pose I'm gonna reference it here guys so you can just give the idea of what is the difference between get and post but I'm like post requests they cannot be cached because they are not coding code safe right it can also prefetch the comment says hey you just made index dot HTML most of



  you can essentially see the entire stack[Caddy -> Varnish -> Express] in the HTTP headers
    because varnish actually rewrites the header add stuff changes stuff
that's one of the features of of varnish because it's just basically it's a reverse proxy and proxies can change the headers if it is a layer 7 proxy



get have no body
get have prameter maximum 2000 byte



-----------------------------------------------------------------------------------

Varnish is a reverse proxy web accelerator   Written in C designed to improve HTTP performance by using server side caching. 

In this video I’m going to go through how Varnish works, we will spin up a Varnish docker container and finally talk about the pros and cons of this tech. 

Agenda

* Classic HTTP Architecture
* How Varnish Works?
* HTTP Setup - Varnish
* HTTPS Setup - Varnish with Caddy as TLS Terminator.
* Varnish Pros & Cons
* Summary

Pros
* Cache & prefetching documents
* Resolve DNS hostnames in documents 
* Rewrite scripts to optimize code
* Load Balancing 
* Backend Connection Pooling
* Varnish Modules (VMODS, e.g. rewrite headers) 
* Edge side includes (personalized dynamic page)


Cons
* Cache Invalidation
* Only works on unencrypted HTTP
* For HTTPS frontend, terminate TLS
* For HTTPS backend, no solution in Varnish open source
* Can’t cache POST requests (e.g. GraphQL queries)
* HTTP/2 backends won’t benefit


docker commands

docker run --name varnish -p 8080:80 varnish

docker cp default.vcl varnish:/etc/varnish


default.vcl

vcl 4.0;

backend default {
  .host = "husseinmac";
  .port = "2015";
}





timecodes
Classic HTTP Architecture : 1:53
How Varnish Works 3:50
Demo HTTP 7:50
Demo HTTPS 18:23
Varnish Pros 28:43 
Varnish Cons 39:26

Cards:
Connection Pooling 2:15 https://www.youtube.com/watch?v=GTeCt...
Layer 4 vs Layer 7 Load balancing  6:25 https://www.youtube.com/watch?v=aKMLg...
GET vs POST 6:48  https://www.youtube.com/watch?v=K8HJ6...
Postgres NodeJS Chrome 8:23 https://www.youtube.com/watch?v=0JNq4...
Redis 46:13 https://www.youtube.com/watch?v=sVCZo...
TLS Termination 49:35 https://www.youtube.com/watch?v=H0bkL...
 

Resources 
edge side includes
https://www.fastly.com/blog/using-esi...
Cache invalidation varnish
https://www.smashingmagazine.com/2014...
Varnish Doc
https://varnish-cache.org/docs/
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
Nginx
======

- event-driven = event based
- solve C10K problem -> C10K: concurrent 10000 request
- lightwghite
- bare metal low consuming
- for static content

- written by: Igor Sysoev




- Serving Static Content
- Reverse Proxy
- Load Balancer
- content cache
- API Gateway
- Web Application Firewall (WAF)







------------------------------------------------------------------------------------------------------------------------
> NginX CLI

nginx -s <Signal>
Signal:
- stop — fast shutdown
- quit — graceful shutdown
- reload — reloading the configuration file #before reload use: nginx -t -> Test The Configuration;
- reopen — reopening the ; files




EX: nginx -s stop


------------------------------------------------------------------------------------------------------------------------
> NginX Configurations File

Configurations Files:
-  -> Virtual Host Configurations File
- /etc/nginx/nginx.conf -> NginX Configurations File




-  namespaces EX: server
-  module
-  contexts
   -  each namespace have some blocks=directives
      -  directives = blocks


 - Main Context = Global Context



> Contexts:
- http {}
  - Server {}
- events {}
- mail {}



> directives:

- error_log
- access_log

- Personal Package Archive PPA
- source.list



- sites-available/
- sites-enabled/ -> symlinks to files in sites-available/ directory
  - default



> Resources:
- https://www.nginx.com/
- https://www.nginx.eg/
- [NGINX 3rd Party Modules](https://www.nginx.com/resources/wiki/modules/index.html)
- [NGINX Wiki](https://www.nginx.com/resources/wiki/)
------------------------------------------------------------------------------------------------------------------------








http {
    server {
        listen 80;
        server_name sabry.tarek.com

        access_log /var/log/access_sabry.log;
        error_log /var/log/error_sabry.log;

        root /var/www/html;
        index index.html;
    }
}



















> Minimal Configurations
- /etc/nginx/nginx.conf
- /etc/nginx/conf.d/ ->  every Virtual Host has configuration file in this directory like:
  - default.conf



http {
    server {
    }
}


** Redirect from "/" to "/b"

location = / {
  return 307 /b;
}


http has one or more server


-----------------------------------------------------------------------------------------------------------------
std::cerr << "some error" << std::endl;



#include <stdexcept>
throw std::runtime_error("Unknown exception");
Omitting the ; in the last statement of a cell results in an output being printed
-----------------------------------------------------------------------------------------------------------------
> Apache

1998 one sever can host more than one website -> virtual host
- http -> 80
- https -> :443
- Redhat based -> httpd
- Debian based -> apache2
- var/www/html -> apache 
- /etc/httpd -> configration file 
- /etc/httpd/conf/httpd.conf -> main config file
- get / post
- proxy -> filter -> proxy server before the internet
- reverse proxy


configration
------------- 

configration :
- global configration (Listen{port} - RootServer{conf path} - include - user apache - group apache)
- main configration (ServerAdmin{admin mail} - ServerName - RootDirectory - Options indexes  followSymbolic -  DirectoryIndex Error Log{/var/log})
- virtual hosts configration ()


apache_manual

systemctl reload httpd reload configration files without downtime






- web server
- reverse proxy
which act as:
- load balancer
- caching layer
- forward proxy



------------------------------------------------------------------------------------------------------------------------------------------------------
Minimal configration

/etc/enginx/enginx.conf:

http {
  server {
    listen 80;
  }
}

events { }
------------------------------------------------------------------------------------------------------------------------------------------------------
http {

  server {
    listen 80;
    root /var/www/site;
    
    location /images {
      root /var/www/site;
    }

    location ~ .png {
      return 403;
    }

  }

  server {
    listen 8888;
    location / {
      
        proxy_pass http://localhost:8080/;
    }
    

    location /img {

        proxy_pass http://localhost:8080/images/;
    }
  }
}
events {}


------------------------------------------------------------------------------------------------------------------------------------------------------


NginX is an open source web server written in C and can also be used as a reverse proxy and a load balancer.

In this video, I want to go through the following topics in NginX

* What is NginX? 2:25
* Current & Desired Architecture 4:58
* Layer 4 and Layer 7 Proxying in Nginx 8:40
* Example 10:25
    * Install Nginx (mac) 13:30
    * Nginx as a Web Server 15:00 (webserver.conf)
        * Static context location root  20:00
        * regular expression 27:00
        * proxy pass 30:30
    * Nginx as a Layer 7 Proxy 33:30
        * Proxy to 4 backend NodeJS services (docker) 37:00
        * IP_Hash load balaning 43:00
        * Split load to multiple backends (app1/app2) 46:00 
        * Block certain requests (/admin) 49:00 
    * NGINX as a Layer 4 Proxy 51:30
    * Create DNS record 1:01:08
    * Enable HTTPS on Nginx (lets encrypt) 1:05:08
    * Enable TLS 1.3 on Nginx  1:14:00
    * Enable HTTP/2 on NGINX 1:17:10
* Summary 1:20:10




http {
    
    upstream allbackend {
        #ip_hash;
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }
    
    upstream app1backend {
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
    }

    upstream app2backend {
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }


    server {
          listen 80;
          listen 443 ssl http2;

          ssl_certificate /etc/letsencrypt/live/nginxtest.ddns.net/fullchain.pem;
          
          ssl_certificate_key /etc/letsencrypt/live/nginxtest.ddns.net/privkey.pem;

          ssl_protocols TLSv1.3;

          location / {

              proxy_pass http://allbackend/;
           }

         location /app1 { 
              proxy_pass http://app1backend/;
          }
        
        location /app2 {
              proxy_pass http://app2backend/;
         }
         
        location /admin {
          return 403;
        }          
     }



}

events { }



stream {
    
    upstream allbackend {
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }
    


    server {
          listen 80;
          proxy_pass allbackend;
 
     }



}

events { }

------------------------------------------------------------------------------------------------------------------------
custom HTTP header

- API_KEY === subscription key