<<<<<<< HEAD:Linux/tools/gpg.md
[GPG](https://www.gnupg.org)
============================

GNU Privacy Guard
+ GnuPG is a cryptography tool that helps you 
- manage public and private keys (key management)
- perform encrypt, decrypt (symmetrically and asymmetrically)
- sign, and verify operations
- It is an open-source version of PGP.
- alternative to PGP from Symantec accusation
- default output file extension: asc / sig / gpg
- There are bindings to most programming languages so you can use it within your own custom application
- the word 'message' is synonmous for 'file' or 'document'. You can encrypt and sign binary files just the same as text messages.
- You can find the public GPG key at <website_URL>/gpg.
- On Windows, I recommend the [Gpg4win](https://gpg4win.org/download.html) then gpg will be available in your command prompt.
- On MAC, Mac Homebrew [formulae for gpg](https://formulae.brew.sh/formula/gnupg) => brew install gnupg
- Most Linux distributions have gpg in their package repository. It might be gnupg or gpg2 or some variation.
- On Android [guardianproject](https://guardianproject.info/archive/gnupg/) [openkeychain](https://www.openkeychain.org/)

Pretty Good Privacy (PGP)
GNU Privacy Guard (GPG)

creator: Phil Zimmerman
$ pgp --gen-key // generate public key and private key
 (Sign only) -> for signature reason only
public key and private key use to cipher and signature

$ gpg --full-gen-key

# safe remove file
    shred -u file



$ gpg -c file.txt  // -c ==> cipher
$ gpg -c file.txt -o file.png // -c ==> cipher -o => output
$ gpg -c file.txt -o file.png -cipher-algo// -c ==> cipher -o => output

GUI
[pinentry-program](https://gnupg.org/related_software/pinentry/index.html) /usr/bin/pinentry-cusses
cipher-algo AES256
default-cache-ttl 10

> files:

~/.gnupg/
    ├── gpg.conf
    ├── pubring.gpg
    ├── pubring.gpg~
    ├── random_seed
    ├── secring.gpg
    └── trustdb.gpg


-----------------------------------------------------------------------------------------------------------------------------------

mac: https://gpgtools.org


# Create a new private key
gpg --gen-key

# List public keys you have stored (yours and other people's keys)
gpg --list-keys

# List private keys (generally only your own), secret = private key
gpg --list-secret-keys






-----------------------------------------------------------------------------------------------------------------------------------
- Keys Management

    - keys = public key
    - secret-keys = private key

    - armor = text format= ASCII format = .asc
    - binary = binary format= .gpg
# output you can get: binary version will take up less space, but the ASCII version is a little easier to work with and can be transported over text means, say, pasted in to an email. They both decrypt the same way.


    - XXXXXXXX = hexadecimal key ID


    - list
        - gpg --list-secret-keys
        - gpg --list-keys
    - generate
        - gpg --gen-key
    - delete
        - gpg --delete-keys XXXXXXXX
        - gpg --delete-secret-keys XXXXXXXX
    - import
        - gpg --import ./my-priv-gpg-key.asc
    - export
        - gpg --export-secret-keys --armor XXXXXXXX > ./my-priv-gpg-key.asc
    - push
        - gpg --keyserver hkp://pgp.mit.edu --send-keys XXXXXXXX
-----------------------------------------------------------------------------------------------------------------------------------
- Encryption
    - Symmetric
        - AES
    - Asymmetric
        - RSA # length: 1024bit -> 4096bit
        - ECDSA # starting to slowly replace RSA

# Key exchange (algorithm | protocol) Diffie Hellman solve a lot of problems in the RSA encription algorithm


communication is encrypted but the identity isn't verified
mo encryption communication in plain text

encryption
authentication

certification = server public key + segniture of certification authority (CA)

symmetrical encryption uses the `same algorithm to encrypt and to decrypt` and `uses the same key to enczrypt and decrypt` if Alice wishes to encrypt the message and send it to Bob Alice uses a symmetrical algorithm and her key to encrypt plain text into ciphertext Bob then uses the same key and the same cipher to decrypt the message so distributing the key securely from Alice to Bob is a challenge






> Encrypt with a passphrase (symmetric):

gpg --symmetric message.txt
# Prompts you for a passphrase
# Creates message.txt.gpg (binary)

gpg --armor --symmetric message.txt
# Same, but ASCII format output instead of binary
# Creates message.txt.asc (ASCII)

# Specify the encryption algorithm
gpg --symmetric --cipher-algo AES256

# Get the list of cipher algorithms
gpg --version
# E.g. 3DES, BLOWFISH, AES256, TWOFISH

# Specify output file
gpg --output message.txt.gpg --symmeteric message.txt

# Encrypt and sign (all in the single output file)
gpg --sign --symmetric message.txt

--------------------------------------------------------------------------------
Encrypt for a single recipient (asymmetric)

# Import NanoDano's public GPG key
gpg --keyserver pgp.mit.edu --search-keys nanodano@devdungeon.com

# It will print a list of matching results.
# Enter the number next to the one you want to import
# After it's imported you can verify the public key is stored with
gpg --list-keys


# This will prompt and ask the recipient's email address
# and you will have to enter the ID or email
gpg --encrypt message.txt

# or specify the recipient as the -r argument
gpg  --recipient n<Email> --encrypt message.txt # --recipient = -r
# Encrypted output will be in message.txt.gpg

# Encrypt and store in ASCII format (message.txt.asc)
# Both binary and ASCII versions decrypt the same
gpg  --armor --recipient nanodano@devdungeon.com --encrypt message.txt

# Encrypt and sign at the same time
gpg --encrypt --sign --recipient nanodano@devdungeon.com message.txt

# Specify output file
gpg --output message.txt.gpg

--------------------------------------------------------------------------------
> Decrypt:

# Decrypt and print message to screen
# Will automatically verify signature if there was one
# Will automatically detect if symmetric or asymmetric
# Will automatically use the appropriate private key if available
# Will automatically prompt for passphrase if symmetric
gpg -d message.txt.gpg # --decrypt = -d

# Decrypt and put output in decrypted.txt
gpg --decrypt message.txt.gpg > decrypted.txt
-----------------------------------------------------------------------------------------------------------------------------------
- Signatures
    - Embedded # Default
    - Detached
gpg --clearsign message.txt
# Outputs message.txt.asc in plain text, suitable
# for pasting in an email or posting online

gpg --sign message.txt
# Outputs message.txt.gpg a binary file

# Both of these can be verified with --decrypt
# but they are not _actually_ encrypted.
gpg --decrypt message.txt.gpg
gpg --decrypt message.txt.asc
# This will print out the message along with the signature info
-----------------------------------------------------------------------------------------------------------------------------------
public key servers
- (https://pgp.mit.edu/)
- [https://keybase.io/](https://keybase.io/)
    - https://keybase.io/integralist
- http://keyserver.ubuntu.com:11371/
- https://keyserver.pgp.com/vkd/GetWelcomeScreen.event


- https://keys.openpgp.org/
-http://keys.gnupg.net/
- KeyChain

> Options:
- --no-tty


PlainText -> Chipher

Network sniffing


Public-key and Private-key are the mathematical inverse of each other you can encrypt data with either the public or private key, and only the alternating key can be used to decrypt the data. So if you encrypted a plaintext using your public key, then the only way you can decrypt the resulting cipher is by using your private key. But imagine you encrypted a file using your public key: as your private key is something only you have access to it means your cipher is safe from everyone! (as long as your private key stays private)




> Public-key example
Note: this example is INSECURE and I explain why afterwards

In this example there are two prerequisites:

We’ve generated our own public/private keys
Bob has generated his own public/private keys
With a basic understanding of public-key cryptography, the steps involved appear quite straightforward:

We email Bob and ask him for his public key
Bob emails us his public key
We encrypt our plaintext using Bob’s public key
We email Bob the cipher created using his public key
Bob receives the cipher and uses his private key to decrypt it
Bob now has a copy of the original plaintext
In an ideal world these steps are fine, but we don’t live in an ideal world. Now you may have already noticed the problem with this process, but if not I’ll clarify why this isn’t secure: the devious network sniffer has intercepted your email communication asking Bob for his public key and the devious person sends back his own public key instead. So at this point you get a public key that you think is Bob’s but which actually belongs to the devious person.

Now when you go to send the cipher back to Bob, the devious person sees your communication going across the wire and intercepts it again and grabs the cipher and is able to decrypt it using his private key and subsequently gets access to the plaintext!

doesn’t solve the issue of “authentication”. By this we mean: how to do we know the person we’re communicating with is really who they say they are?









----------------------------------------------------------------------------------------------------------------------------------------------
> PKI (Public-key infrastructure)

Public key infrastructure is built on top of Public-key cryptography. The difference is that PKI introduces the concept of “certificates”, and these certificates are used in the software realm much like we would use a passport.



- Digital Certificates
- Certificate Authority














I do not vouch for the security of elliptical curves over integer factorization over discrete logarithm calculations.












----------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------
Information Security (Info Sec)
===============================
> Cryptography
CIA + non-repudiation
    - C: Confidentiality(السرية)
    - I: Integraty
    - A: Authenticity
        - Digital Signatuare
    - non-repudiation

Security <-Relation-> Usability


the public key infrastructure relies on three critical logical entities called:
- Registration Authority(RA)
    investigate and to determine that an individual who claims to be Alice actually is Alice the Registration Authority will follow a set of public rules to determine what Alice has to do to prove her identity once the Registration Authority is satisfied as to Alice's identity he passes function to the certificate authority
- Certificate Authority(CA)
- Validation Authority(VA)



Digital Certificate Request -> DigitalCertificate


orgnize Encryption Standards:
- Non-profit Orgnizations
- Intelligence Agencies:
    - DARPA (Defense Advanced Research Projects Agency) ARPA net -> Nespa net -> international network (internet)
        - CIA (Cenrtal Intelligence Agency) US (وكالة الإستخبارات المركزية)
            - NSA (National Security Agency) US (وكالة الأمن القومي)
    - GHQ () UK

علماء المسلمين:
- ابن وحشية
    - مؤلفاا
    - فك طلاسم اللغة الهيروغلافية

oldest Cipher in History -> Ceser Cipher = Rot13

Crypto Analizer
plain text = clear text = messege
cipher text = clear text
key
cipher = encription algorithm


Disk
    Partition
        Directory
            File

PF(Radio Freqency)
    WIFI

| Data | VeraCrypt, TeraCrypt | BitLocker | Android & IOS |
| Browser | TorProject | VPPN | Proxy |
| WI-FI | WEP | WAP/WAP2/WAP3 | WPS |
| Trasport-Encryption | SSL/TLS | SSH | IPSec |
| Symmetric-Encryption | DSE(Data Encryption Stanserd) | 3DSE like: ->| ASE |
| Asymmetric-Encryption | RSA(first char of there scientests) | Diffi-Hellman | ECC |
| Hashing (one way function) | SHA[1- 224- 256- 384- 512] | MD5/MD4 | HMac |


CIGINT

HackRF One 1000$ -> 3000$

VoIP better than GSM
better encryption


> certificates
SANS
Pentester Academy
Elearn Security
Offensive Security Certified Professional (OSCP)
https://www.hackersploit.academy/
https://www.isecur1ty.org/


http://security4arabs.com/

Youtube Channels:
Arabic:
- old school
- Technawi
English:
- IpSec
- John Hammd


 task-based (jeopardy style) CTF


---
$ root@c0e52f30117f:/# gpg --version
gpg (GnuPG) 2.2.19
libgcrypt 1.8.5
Copyright (C) 2019 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Home: /root/.gnupg
Supported algorithms:
Pubkey: RSA, ELG, DSA, ECDH, ECDSA, EDDSA
Cipher: IDEA, 3DES, CAST5, BLOWFISH, AES, AES192, AES256, TWOFISH,
        CAMELLIA128, CAMELLIA192, CAMELLIA256
Hash: SHA1, RIPEMD160, SHA256, SHA384, SHA512, SHA224
Compression: Uncompressed, ZIP, ZLIB, BZIP2
---



$ root@c0e52f30117f:/# gpg -h       
gpg (GnuPG) 2.2.19
libgcrypt 1.8.5
Copyright (C) 2019 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Home: /root/.gnupg
Supported algorithms:
Pubkey: RSA, ELG, DSA, ECDH, ECDSA, EDDSA
Cipher: IDEA, 3DES, CAST5, BLOWFISH, AES, AES192, AES256, TWOFISH,
        CAMELLIA128, CAMELLIA192, CAMELLIA256
Hash: SHA1, RIPEMD160, SHA256, SHA384, SHA512, SHA224
Compression: Uncompressed, ZIP, ZLIB, BZIP2

Syntax: gpg [options] [files]
Sign, check, encrypt or decrypt
Default operation depends on the input data

Commands:
 
 -s, --sign                  make a signature
     --clear-sign            make a clear text signature
 -b, --detach-sign           make a detached signature
 -e, --encrypt               encrypt data
 -c, --symmetric             encryption only with symmetric cipher
 -d, --decrypt               decrypt data (default)
     --verify                verify a signature
 -k, --list-keys             list keys
     --list-signatures       list keys and signatures
     --check-signatures      list and check key signatures
     --fingerprint           list keys and fingerprints
 -K, --list-secret-keys      list secret keys
     --generate-key          generate a new key pair
     --quick-generate-key    quickly generate a new key pair
     --quick-add-uid         quickly add a new user-id
     --quick-revoke-uid      quickly revoke a user-id
     --quick-set-expire      quickly set a new expiration date
     --full-generate-key     full featured key pair generation
     --generate-revocation   generate a revocation certificate
     --delete-keys           remove keys from the public keyring
     --delete-secret-keys    remove keys from the secret keyring
     --quick-sign-key        quickly sign a key
     --quick-lsign-key       quickly sign a key locally
     --sign-key              sign a key
     --lsign-key             sign a key locally
     --edit-key              sign or edit a key
     --change-passphrase     change a passphrase
     --export                export keys
     --send-keys             export keys to a keyserver
     --receive-keys          import keys from a keyserver
     --search-keys           search for keys on a keyserver
     --refresh-keys          update all keys from a keyserver
     --import                import/merge keys
     --card-status           print the card status
     --edit-card             change data on a card
     --change-pin            change a card's PIN
     --update-trustdb        update the trust database
     --print-md              print message digests
     --server                run in server mode
     --tofu-policy VALUE     set the TOFU policy for a key

Options:
 
 -a, --armor                 create ascii armored output
 -r, --recipient USER-ID     encrypt for USER-ID
 -u, --local-user USER-ID    use USER-ID to sign or decrypt
 -z N                        set compress level to N (0 disables)
     --textmode              use canonical text mode
 -o, --output FILE           write output to FILE
 -v, --verbose               verbose
 -n, --dry-run               do not make any changes
 -i, --interactive           prompt before overwriting
     --openpgp               use strict OpenPGP behavior

(See the man page for a complete listing of all commands and options)

Examples:

 -se -r Bob [file]          sign and encrypt for user Bob
 --clear-sign [file]        make a clear text signature
 --detach-sign [file]       make a detached signature
 --list-keys [names]        show keys
 --fingerprint [names]      show fingerprints

=======
[GPG](https://www.gnupg.org)
============================

GNU Privacy Guard
+ GnuPG is a cryptography tool that helps you 
- manage public and private keys (key management)
- perform encrypt, decrypt (symmetrically and asymmetrically)
- sign, and verify operations
- It is an open-source version of PGP.
- alternative to PGP from Symantec accusation
- default output file extension: asc / sig / gpg
- There are bindings to most programming languages so you can use it within your own custom application
- the word 'message' is synonmous for 'file' or 'document'. You can encrypt and sign binary files just the same as text messages.
- You can find the public GPG key at <website_URL>/gpg.
- On Windows, I recommend the [Gpg4win](https://gpg4win.org/download.html) then gpg will be available in your command prompt.
- On MAC, Mac Homebrew [formulae for gpg](https://formulae.brew.sh/formula/gnupg) => brew install gnupg
- Most Linux distributions have gpg in their package repository. It might be gnupg or gpg2 or some variation.
- On Android [guardianproject](https://guardianproject.info/archive/gnupg/) [openkeychain](https://www.openkeychain.org/)

Pretty Good Privacy (PGP)
GNU Privacy Guard (GPG)

creator: Phil Zimmerman
$ pgp --gen-key // generate public key and private key
 (Sign only) -> for signature reason only
public key and private key use to cipher and signature

$ gpg --full-gen-key

# safe remove file
    shred -u file



$ gpg -c file.txt  // -c ==> cipher
$ gpg -c file.txt -o file.png // -c ==> cipher -o => output
$ gpg -c file.txt -o file.png -cipher-algo// -c ==> cipher -o => output

GUI
[pinentry-program](https://gnupg.org/related_software/pinentry/index.html) /usr/bin/pinentry-cusses
cipher-algo AES256
default-cache-ttl 10

> files:

~/.gnupg/
    ├── gpg.conf
    ├── pubring.gpg
    ├── pubring.gpg~
    ├── random_seed
    ├── secring.gpg
    └── trustdb.gpg


-----------------------------------------------------------------------------------------------------------------------------------

mac: https://gpgtools.org


# Create a new private key
gpg --gen-key

# List public keys you have stored (yours and other people's keys)
gpg --list-keys

# List private keys (generally only your own), secret = private key
gpg --list-secret-keys






-----------------------------------------------------------------------------------------------------------------------------------
- Keys Management

    - keys = public key
    - secret-keys = private key

    - armor = text format= ASCII format = .asc
    - binary = binary format= .gpg
# output you can get: binary version will take up less space, but the ASCII version is a little easier to work with and can be transported over text means, say, pasted in to an email. They both decrypt the same way.


    - XXXXXXXX = hexadecimal key ID


    - list
        - gpg --list-secret-keys
        - gpg --list-keys
    - generate
        - gpg --gen-key
    - delete
        - gpg --delete-keys XXXXXXXX
        - gpg --delete-secret-keys XXXXXXXX
    - import
        - gpg --import ./my-priv-gpg-key.asc
    - export
        - gpg --export-secret-keys --armor XXXXXXXX > ./my-priv-gpg-key.asc
    - push
        - gpg --keyserver hkp://pgp.mit.edu --send-keys XXXXXXXX
-----------------------------------------------------------------------------------------------------------------------------------
- Encryption
    - Symmetric
        - AES
    - Asymmetric
        - RSA # length: 1024bit -> 4096bit
        - ECDSA # starting to slowly replace RSA

# Key exchange (algorithm | protocol) Diffie Hellman solve a lot of problems in the RSA encription algorithm


communication is encrypted but the identity isn't verified
mo encryption communication in plain text

encryption
authentication

certification = server public key + segniture of certification authority (CA)

symmetrical encryption uses the `same algorithm to encrypt and to decrypt` and `uses the same key to enczrypt and decrypt` if Alice wishes to encrypt the message and send it to Bob Alice uses a symmetrical algorithm and her key to encrypt plain text into ciphertext Bob then uses the same key and the same cipher to decrypt the message so distributing the key securely from Alice to Bob is a challenge






> Encrypt with a passphrase (symmetric):

gpg --symmetric message.txt
# Prompts you for a passphrase
# Creates message.txt.gpg (binary)

gpg --armor --symmetric message.txt
# Same, but ASCII format output instead of binary
# Creates message.txt.asc (ASCII)

# Specify the encryption algorithm
gpg --symmetric --cipher-algo AES256

# Get the list of cipher algorithms
gpg --version
# E.g. 3DES, BLOWFISH, AES256, TWOFISH

# Specify output file
gpg --output message.txt.gpg --symmeteric message.txt

# Encrypt and sign (all in the single output file)
gpg --sign --symmetric message.txt

--------------------------------------------------------------------------------
Encrypt for a single recipient (asymmetric)

# Import NanoDano's public GPG key
gpg --keyserver pgp.mit.edu --search-keys nanodano@devdungeon.com

# It will print a list of matching results.
# Enter the number next to the one you want to import
# After it's imported you can verify the public key is stored with
gpg --list-keys


# This will prompt and ask the recipient's email address
# and you will have to enter the ID or email
gpg --encrypt message.txt

# or specify the recipient as the -r argument
gpg  --recipient n<Email> --encrypt message.txt # --recipient = -r
# Encrypted output will be in message.txt.gpg

# Encrypt and store in ASCII format (message.txt.asc)
# Both binary and ASCII versions decrypt the same
gpg  --armor --recipient nanodano@devdungeon.com --encrypt message.txt

# Encrypt and sign at the same time
gpg --encrypt --sign --recipient nanodano@devdungeon.com message.txt

# Specify output file
gpg --output message.txt.gpg

--------------------------------------------------------------------------------
> Decrypt:

# Decrypt and print message to screen
# Will automatically verify signature if there was one
# Will automatically detect if symmetric or asymmetric
# Will automatically use the appropriate private key if available
# Will automatically prompt for passphrase if symmetric
gpg -d message.txt.gpg # --decrypt = -d

# Decrypt and put output in decrypted.txt
gpg --decrypt message.txt.gpg > decrypted.txt
-----------------------------------------------------------------------------------------------------------------------------------
- Signatures
    - Embedded # Default
    - Detached
gpg --clearsign message.txt
# Outputs message.txt.asc in plain text, suitable
# for pasting in an email or posting online

gpg --sign message.txt
# Outputs message.txt.gpg a binary file

# Both of these can be verified with --decrypt
# but they are not _actually_ encrypted.
gpg --decrypt message.txt.gpg
gpg --decrypt message.txt.asc
# This will print out the message along with the signature info
-----------------------------------------------------------------------------------------------------------------------------------
public key servers
- (https://pgp.mit.edu/)
- [https://keybase.io/](https://keybase.io/)
    - https://keybase.io/integralist
- http://keyserver.ubuntu.com:11371/
- https://keyserver.pgp.com/vkd/GetWelcomeScreen.event


- https://keys.openpgp.org/
-http://keys.gnupg.net/
- KeyChain

> Options:
- --no-tty


PlainText -> Chipher

Network sniffing


Public-key and Private-key are the mathematical inverse of each other you can encrypt data with either the public or private key, and only the alternating key can be used to decrypt the data. So if you encrypted a plaintext using your public key, then the only way you can decrypt the resulting cipher is by using your private key. But imagine you encrypted a file using your public key: as your private key is something only you have access to it means your cipher is safe from everyone! (as long as your private key stays private)




> Public-key example
Note: this example is INSECURE and I explain why afterwards

In this example there are two prerequisites:

We’ve generated our own public/private keys
Bob has generated his own public/private keys
With a basic understanding of public-key cryptography, the steps involved appear quite straightforward:

We email Bob and ask him for his public key
Bob emails us his public key
We encrypt our plaintext using Bob’s public key
We email Bob the cipher created using his public key
Bob receives the cipher and uses his private key to decrypt it
Bob now has a copy of the original plaintext
In an ideal world these steps are fine, but we don’t live in an ideal world. Now you may have already noticed the problem with this process, but if not I’ll clarify why this isn’t secure: the devious network sniffer has intercepted your email communication asking Bob for his public key and the devious person sends back his own public key instead. So at this point you get a public key that you think is Bob’s but which actually belongs to the devious person.

Now when you go to send the cipher back to Bob, the devious person sees your communication going across the wire and intercepts it again and grabs the cipher and is able to decrypt it using his private key and subsequently gets access to the plaintext!

doesn’t solve the issue of “authentication”. By this we mean: how to do we know the person we’re communicating with is really who they say they are?









----------------------------------------------------------------------------------------------------------------------------------------------
> PKI (Public-key infrastructure)

Public key infrastructure is built on top of Public-key cryptography. The difference is that PKI introduces the concept of “certificates”, and these certificates are used in the software realm much like we would use a passport.



- Digital Certificates
- Certificate Authority


I do not vouch for the security of elliptical curves over integer factorization over discrete logarithm calculations.

------------------------------------------------------------------------------------------------------------------------------------------

Information Security (Info Sec)
===============================
> Cryptography
CIA + non-repudiation
    - C: Confidentiality(السرية)
    - I: Integraty
    - A: Authenticity
        - Digital Signatuare
    - non-repudiation

Security <-Relation-> Usability


the public key infrastructure relies on three critical logical entities called:
- Registration Authority(RA)
    investigate and to determine that an individual who claims to be Alice actually is Alice the Registration Authority will follow a set of public rules to determine what Alice has to do to prove her identity once the Registration Authority is satisfied as to Alice's identity he passes function to the certificate authority
- Certificate Authority(CA)
- Validation Authority(VA)


Digital Certificate Request -> DigitalCertificate


orgnize Encryption Standards:
- Non-profit Orgnizations
- Intelligence Agencies:
    - DARPA (Defense Advanced Research Projects Agency) ARPA net -> Nespa net -> international network (internet)
        - CIA (Cenrtal Intelligence Agency) US (وكالة الإستخبارات المركزية)
            - NSA (National Security Agency) US (وكالة الأمن القومي)
    - GHQ () UK

علماء المسلمين:
- ابن وحشية
    - مؤلفاا
    - فك طلاسم اللغة الهيروغلافية

oldest Cipher in History -> Ceser Cipher = Rot13

Crypto Analizer
plain text = clear text = messege
cipher text = clear text
key
cipher = encription algorithm


Disk
    Partition
        Directory
            File

PF(Radio Freqency)
    WIFI

| Data | VeraCrypt, TeraCrypt | BitLocker | Android & IOS |
| Browser | TorProject | VPPN | Proxy |
| WI-FI | WEP | WAP/WAP2/WAP3 | WPS |
| Trasport-Encryption | SSL/TLS | SSH | IPSec |
| Symmetric-Encryption | DSE(Data Encryption Stanserd) | 3DSE like: ->| ASE |
| Asymmetric-Encryption | RSA(first char of there scientests) | Diffi-Hellman | ECC |
| Hashing (one way function) | SHA[1- 224- 256- 384- 512] | MD5/MD4 | HMac |


CIGINT

HackRF One 1000$ -> 3000$

VoIP better than GSM
better encryption


> certificates
SANS
Pentester Academy
Elearn Security
Offensive Security Certified Professional (OSCP)
https://www.hackersploit.academy/
https://www.isecur1ty.org/


http://security4arabs.com/

Youtube Channels:
Arabic:
- old school
- Technawi
English:
- IpSec
- John Hammd


 task-based (jeopardy style) CTF


---
$ root@c0e52f30117f:/# gpg --version
gpg (GnuPG) 2.2.19
libgcrypt 1.8.5
Copyright (C) 2019 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Home: /root/.gnupg
Supported algorithms:
Pubkey: RSA, ELG, DSA, ECDH, ECDSA, EDDSA
Cipher: IDEA, 3DES, CAST5, BLOWFISH, AES, AES192, AES256, TWOFISH,
        CAMELLIA128, CAMELLIA192, CAMELLIA256
Hash: SHA1, RIPEMD160, SHA256, SHA384, SHA512, SHA224
Compression: Uncompressed, ZIP, ZLIB, BZIP2
---



$ root@c0e52f30117f:/# gpg -h       
gpg (GnuPG) 2.2.19
libgcrypt 1.8.5
Copyright (C) 2019 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Home: /root/.gnupg
Supported algorithms:
Pubkey: RSA, ELG, DSA, ECDH, ECDSA, EDDSA
Cipher: IDEA, 3DES, CAST5, BLOWFISH, AES, AES192, AES256, TWOFISH,
        CAMELLIA128, CAMELLIA192, CAMELLIA256
Hash: SHA1, RIPEMD160, SHA256, SHA384, SHA512, SHA224
Compression: Uncompressed, ZIP, ZLIB, BZIP2

Syntax: gpg [options] [files]
Sign, check, encrypt or decrypt
Default operation depends on the input data

Commands:
---
 -s, --sign                  make a signature -> <filename>.gpg = file + sign
     --clear-sign            make a clear text signature
 -b, --detach-sign           make a detached signature -> <filename>.sig = sign only
     --verify                verify a signature
---
 -e, --encrypt               encrypt data
 -c, --symmetric             encryption only with symmetric cipher
 -d, --decrypt               decrypt data (default)
---
 -k, --list-keys             list keys
     --list-signatures       list keys and signatures
     --check-signatures      list and check key signatures
     --fingerprint           list keys and fingerprints
 -K, --list-secret-keys      list secret keys
---
     --generate-key          generate a new key pair
     --quick-generate-key    quickly generate a new key pair
     --quick-add-uid         quickly add a new user-id
     --quick-revoke-uid      quickly revoke a user-id
     --quick-set-expire      quickly set a new expiration date
     --full-generate-key     full featured key pair generation
     --generate-revocation   generate a revocation certificate
     --delete-keys           remove keys from the public keyring
     --delete-secret-keys    remove keys from the secret keyring
     --quick-sign-key        quickly sign a key
     --quick-lsign-key       quickly sign a key locally
     --sign-key              sign a key
     --lsign-key             sign a key locally
     --edit-key              sign or edit a key
     --change-passphrase     change a passphrase
     --export                export keys
     --send-keys             export keys to a keyserver
     --receive-keys          import keys from a keyserver
     --search-keys           search for keys on a keyserver
     --refresh-keys          update all keys from a keyserver
     --import                import/merge keys
---
     --card-status           print the card status
     --edit-card             change data on a card
     --change-pin            change a card's PIN
     --update-trustdb        update the trust database
     --print-md              print message digests
     --server                run in server mode
     --tofu-policy VALUE     set the TOFU policy for a key

Options:
 
 -a, --armor                 create ascii armored output
 -r, --recipient USER-ID     encrypt for USER-ID
 -u, --local-user USER-ID    use USER-ID to sign or decrypt
 -z N                        set compress level to N (0 disables)
     --textmode              use canonical text mode
 -o, --output FILE           write output to FILE
 -v, --verbose               verbose
 -n, --dry-run               do not make any changes
 -i, --interactive           prompt before overwriting
     --openpgp               use strict OpenPGP behavior

(See the man page for a complete listing of all commands and options)

Examples:

 -se -r Bob [file]          sign and encrypt for user Bob
 --clear-sign [file]        make a clear text signature
 --detach-sign [file]       make a detached signature
 --list-keys [names]        show keys
 --fingerprint [names]      show fingerprints

>>>>>>> 4af8c228a1e5f92e035f488b94443d6c889500e6:Linux/tools/GPG_&_PGP.md
Please report bugs to <https://bugs.gnupg.org>.