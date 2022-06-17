DNS
===
- binary Protocal

DNS request on port 53 UDP
what can ISP see ?
- your IP


DNS over HTTPS (DOH)
DNS over TLS (DOT)
CryptDNS dnscrypt-proxy


DNS

Forward Lookup -> Domain to IP -> A Lookup -> host -t a #-type: a lookup# google.com
Reverse Lookup -> IP to Domain -> PTR Lookup -> host -t ptr #-type: ptr lookup# 150.54.97.0
Zone Transfare  53/TCP port -> host -l #list# google.com <DNS_server_IP>



- forward lookup
- (revese - backward) lookup



globle server load balancer(GSLB)



host
host -t (mx - ns -fsp - txt)
nlookup
dig
---------------------------------------------------------------------------------------------------------------
[dnsmasq]()
===


The default value for the cache size is 150 and if you set it to 0, you can disable caching. A large cache size might impact performance because dnsmasq keeps all caching in memory.
# Set the cachesize here.
#cache-size=150

If you lookup a domain that is invalid (e.g. askdjhfakshdflasjkdflasj.com), by default dnsmasq caches this information and returns “no such domain” from its cache every time you lookup the same invalid domain. If you want to disable this functionality, you can comment in the option ‘no-negcache’

Keep in mind that each time you change an option, you have to restart dnsmasq with ‘systemctl restart dnsmasq’ to reload the new option. As mentioned above, restarting it clears the cache as well.


https://github.com/lixingcong/dnsmasq-regex
---------------------------------------------------------------------------------------------------------------


[NextDNS](https://my.nextdns.io/)
===
- nextdns is similar to a pi hole
This device is not using NextDNS.
This device is currently using ”TE-AS” as DNS resolver.

All good!
This device is using NextDNS with this configuration.














/etc/hosts file -> DNS Servers


master ping commamnd

Round Trip time = ping time (milisecends)

dig
trace

route



