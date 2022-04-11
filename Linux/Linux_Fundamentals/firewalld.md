firewalld
=======

ipchain -> iptable (iptable -ip6table -iptable )-> firewalld


firewalld-cmd

firewall-cmd --list-all




ufw


PF(Package Filter)
    - p5
    - pfsences



# In The Name Of Allah .
# -- --- ---- -- ----- -
# Fri Jan 22 05:48:48 2021
# Written By : zer0err0r .
# ======= == = ========= =
firewall rules
NFT
===

= when you get a Network Connection (consist of packets) (NetFilter kernel Module) responsible for [Filtering - Reading - Routing].
= (NetFilter kernel Module) doen't have any user interface to communicate with it (you need to coding for using it)
= (NetFilter kernel Module) is the fundamnetal of firewall at Linux Like PF(PacketFilter) at BSD.
# 1, Introducing NFTables On CentOS 8 .
  = Its the default frontenf for (NetFilter kernel Module) in CentOS8 .
  = I mean, The default firewall on CentOS8 [FirewallD] uses NFTables as a backend .
  = In CentOS7 it was [Netfilter <= IPTables <= FirewallD] .
  = Now In CentOS8/Fedora32 its [Netfilter <= NFTables <= FirewallD] .
  = Debian10/Ubuntu/Mint [Netfilter <= NFTables]
  # NFTables vs IPTables :
    = NFTables is the new default instead of IPTables, And it has been part of the linux kernel since 2014 .
    = The way that NFTables works is like IPTables, Except for several differences that makes NFTables better .
    = One of them is that there are no predefined base chains,  like [INPUT (to control connections come for your device), OUTPUT(to control connections out of your device), FORWARD (trasfare network packets from network card to anther at same machine or forward connection from port to anather), PREROUTING, POSTROUTING, ...] .
    = chains come predefined at iptables, they remove it at NFT
    + mostly our work will be at INPUT chain
    + you can define other chains when you need it
    = 

    = Also, NFTables combines [ipv4] and [ipv6] rules into a type called [inet] ,
    = Which means that you dont have to write a rule for ipv4, And then another rule for ipv6 .
FirewallD simple arranged
[22] ssh , iptable ip6tablesebtables
  # IPTables is still available :
    = IPTables is used by many other distros, Its not dead yet .
    = In fact, IPTables is still available on CentOS8.
    = But, FirewallD uses NFTables as a backend instead of IPTables .
    = Just execute the following commands to understand what I mean :
      $ firewall-cmd --list-services
      $ iptables -L
      $ nftables list ruleset | grep -i 22

    # Now, As you see :
      = Port [22] of SSH is defined in FirewallD and NFTables .
      = Also you will see that NFTables has a tall output [same as IPTables in CentOS7] .
      = Also you will see that IPTables is empty and [ACCEPT]s everything .

    # Notice :
      = If you got a tall output of [IPTables] in your lets say CentOS or Fedora ,
      = Then try to find [SSH] rule, You wont find it with IPTables ,
      = You will find it only with NFTables and FirewallD rules .

  
  # What we will do ISA :
    = We will create a basic stateful_packet_inspection[SPI] firewall, And enable SSH connections only .
    SPI firewall constrains only at comming connections for our device
    = In order to do that with IPTables, You will execute the following :
      $ iptables -P INPUT ACCEPT
      $ iptables -F
      $ iptables -A INPUT -i lo -j ACCEPT // accept any connections for LoopBack Device
      $ iptables -A INPUT -m state --state ESTABLISHED,RELATED -j ACCEPT // any request for our device without  ESTABLISHED or RELATED will not accpeted 
      $ iptables -A INPUT -p tcp --dport 22 -j ACCEPT
      $ iptables -P INPUT DROP
      $ iptables -P FORWARD DROP
      $ iptables -P OUTPUT ACCEPT

  
  # Before we start :
    = We will work with a command called [nft] .
    = This command needs a privileged user to deal with, So :
      $ sudo -i

    # Also :
      = In order to use IPTables instead of FirewallD, You need to [disable] FirewallD service and [mask] it .
      = Now, The same idea is with NFTables, Change into [root] then execute the following ,
      $ systemctl disable --now firewalld
      $ systemctl mask firewalld

    # Then clear pre-existing firewalld ruleset :
      $ nft list ruleset
      $ nft flush ruleset



# Useful Links :
  = [https://medium.com/@iced_burn/compare-firewalld-iptables-nftables-netfilter-de08a8d21b5b] .
  = [https://serverfault.com/questions/996664/firewalld-is-not-working-in-centos-8-no-rule-at-all-is-created-in-iptables] .
  = Mustafa hamouda IPTables sessions :
    - 1, [https://www.youtube.com/watch?v=sqFP4Lfpv5Y&list=PLCIJjtzQPZJ_10_h-jzD299qkg_IuoT-5&index=20] .
    - 2, [https://www.youtube.com/watch?v=1a844gLdZ1k&list=PLCIJjtzQPZJ_10_h-jzD299qkg_IuoT-5&index=21] .
    - 3, [https://www.youtube.com/watch?v=3ztI5-7IciY&list=PLCIJjtzQPZJ_10_h-jzD299qkg_IuoT-5&index=22] .

# ===== == ==== ======== =
# Peace Be Up0n Muhammed .