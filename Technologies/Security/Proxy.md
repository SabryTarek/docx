Proxy
=====

proxy types:
- http proxy
    - old
    - browser [plugin - configration]
    - browser only can connect to the proxy  but other application can't do this
- socks proxy (Socks5)
    - all appications on the machine can use it like browser, programs updates, skype, etc
    - all traffic type like http, ftp
    - slower than http proxy

proxy chain: change your ip with a fixed time
proxychains <command_you_want_use_with_other_ip>
proxychains-ng <command>


Proxychain
Proxychain4
Proxychain-ng
torsocks
tsocks




Proxylist



squid
----------------------------------------------------------------------------------------------------------------------
- Tor is an open-source implementation of 2nd generation onion routing that provides free access to an anonymous proxy network
- Privoxy is a filtering proxy from the HTTP protocol, frequently used in combination with Tor


apt install tor Privoxy torsocks

/etc/privoxy/config
froward-socks5 / localhost:9050 .


add proxy settings for web browser
localhost:8118


check.torproject.org
----------------------------------------------------------------------------------------------------------------------


macchanger
==========
GNU macchanger
----------------------------------------------------------------------------------------------------------------------

proxy benefits:
- caching
- filtering act as firewall
- access to the internet with proxy server ip


ShadowSocks
V2ray
ssr

- Forward Proxy Server
- Reverse Proxy Server




load balancer as one of the applications of a reverse proxy it isjust a special case of the reverse proxy



------------------------------------------------------------------------------------------------------------------------
[Shadowsocks]()
===


free and light __socks5 web proxy__. It is mostly used to bypass some network censorship and restrictions on the Internet.



 cd /opt \
 git clone https://github.com/shadowsocks/shadowsocks-libev.git \
 cd shadowsocks-libev \
 git submodule update --init --recursive

------------------------------------------------------------------------------------------------------------------------
[SquidProxy](http://www.squid-cache.org/)
===
Optimising Web Delivery
ports (in BSD)=== packages system (in Linux)

sudo apt-get install squid3
squidguard
squid-cgi
/etc/squid3/squid.conf


sudo cp /etc/squid3/squid.conf /etc/squid3/squid.conf.original
sudo chmod a-w /etc/squid3/squid.conf.original
----------------------------------------------------------------------------------------------------------------------

Hey I have a question can i access a video server without using RTMP module.


