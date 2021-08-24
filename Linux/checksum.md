checksum
===

- verifying the integrity of files
- verifying whether or not you have a valid copy of a file that you've downloaded from the internet or torrent or something like that
---
$ ls /usr/bin | grep sum
- sum
- cksum
- md5sum
- sha1sum
- sha256sum
- sha3sum
- sha512sum
---
sig VS checksum
gpg --verify
Digest file -> (sha1sums.txt)
- that you used to check the integrity of your files against
- digest file is really just the output of checksum on command like md5sum

Vulnerability CVE-2021-3156
<> | grep | <>

ISO VS Bootstrap VS NetBoot (PXE)