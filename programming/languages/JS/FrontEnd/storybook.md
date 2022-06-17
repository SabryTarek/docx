[StoryBook]()
===


```bash
$ npx sb@next init --type html
$ npm run storybook
$ 
```



[TailWindsCSS]()
===

```bash
$ npm install tailwindcss
```


tailwind build ./style.css -o 






- the most time/storage efficient Docker image to serve a static website
    + redbean: single-static-binary, super tiny, static file server
    + thttpd comes with small footprint but seems a bit more battle-tested
        + $ thttpd -D -h 0.0.0.0 -p 3000 -d /static-website -u static-user -l - -M 60

    + Docker scratch, which is basically a no-op image
        - you can’t create new users, there is no package manager or any executable for that matter
        - Using the scratch image usually requires a multi-stage approach







```dockerfile
FROM alpine:3.13.2

# Install thttpd
RUN apk add thttpd

# Create a non-root user to own the files and run our server
RUN adduser -D static
USER static
WORKDIR /home/static

# Copy the static website
# Use the .dockerignore file to control what ends up inside the image!
COPY . .

# Run thttpd
CMD ["thttpd", "-D", "-h", "0.0.0.0", "-p", "3000", "-d", "/home/static", "-u", "static", "-l", "-", "-M", "60"]
```
```bash
$ docker build -t static:latest .
$ docker run -it --rm -p 3000:3000 static:latest
$ curl http://localhost:3000
```

```dockerfile
FROM alpine:3.13.2 AS builder

ARG THTTPD_VERSION=2.29

# Install all dependencies required for compiling thttpd
RUN apk add gcc musl-dev make

# Download thttpd sources
RUN wget http://www.acme.com/software/thttpd/thttpd-${THTTPD_VERSION}.tar.gz \
  && tar xzf thttpd-${THTTPD_VERSION}.tar.gz \
  && mv /thttpd-${THTTPD_VERSION} /thttpd

# Compile thttpd to a static binary which we can copy around
RUN cd /thttpd \
  && ./configure \
  && make CCOPT='-O2 -s -static' thttpd

# Create a non-root user to own the files and run our server
RUN adduser -D static

# Switch to the scratch image
FROM scratch

EXPOSE 3000

# Copy over the user
COPY --from=builder /etc/passwd /etc/passwd

# Copy the thttpd static binary
COPY --from=builder /thttpd/thttpd /

# Use our non-root user
USER static
WORKDIR /home/static

# Copy the static website
# Use the .dockerignore file to control what ends up inside the image!
COPY . .

# Run thttpd
CMD ["/thttpd", "-D", "-h", "0.0.0.0", "-p", "3000", "-d", "/home/static", "-u", "static", "-l", "-", "-M", "60"]
```
image size: 7.77MB
image size: 186KB # Note that the alpine step of the multi-stage build is actually quite large in size (~130MB), but it can be reused across builds and doesn’t get pushed to the registry.











Code
NoCode
LowCode





[orgpad](https://orgpad.com/)
[coggle](https://coggle.it/)



you should not actually rely on any online sandbox solution while doing your analysis


* Online Full-automated SandBox Solutions
  + VirusTotal
  + cuckoo
  + Jotti
  + app.any.run
