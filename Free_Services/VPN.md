VPN (Virual Private Network)
===


GUI
Browser Extension


* Protocals
    - TLS
    - IPSec
    - IKEA2
    - 


- OpenVPN
- WireGaurd
- IPSec
- StrongSwan

https://xvpn.io/
Tunsafe
Riseup
Bitmask
Seed4

----------------------------------------------------------------------------------------------------------------------
OpenVPN
========

# all programs in your system will use it by default

- OpenVPN profile -> client.ovpn

- https://www.vpngate.net/en/
- sudo openvpn --config <file-name>.ovpn

* Android OpenVPN Clients:
	- EasyOvpn
	- OpenVPN connect
	- tunsafe
----------------------------------------------------------------------------------------------------------------------
Wiregurd
====

wireguard kernel module
----------------------------------------------------------------------------------------------------------------------
[TunSafe]()
===
$ git clone https://github.com/TunSafe/TunSafe.git
$ cd TunSafe
$ sudo apt install clang-6.0
$ sudo make&& make install



$ sudo tunsafe start -d TunSafe.conf
$ sudo tunsafe show
$ sudo tunsafe stop tun0


ssh -f ip172-18-0-20-bnqc4m0t969000bvu5s0@direct.labs.play-with-docker.com -L 8000:[::1]:32772 -N
----------------------------------------------------------------------------------------------------------------------
StrongSwan
===
----------------------------------------------------------------------------------------------------------------------
ZeroTier
===

Virtual switch
Global Area Networking = VPN + SDN



> Commands:
    - zerotier-one -> deamon
    - zerotier-cli
    - zerotier-idtool



# zerotier work with controller -> 
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------
