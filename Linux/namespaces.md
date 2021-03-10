namespaces

7 types:
- Cgroups
- Network
- PID Process
- User
- Mount
- IPS
- UTS




ip netns add red
ip netns add blue


ip link
ip netns exec red ip link === ip -n red link
arp
route



network resources:
- interfaces
- arp table
- route table


[root@950a79ffb620 opt]# lsns
        NS TYPE   NPROCS PID USER COMMAND
4026531835 cgroup      2   1 root /usr/bin/bash
4026531837 user        2   1 root /usr/bin/bash
4026532360 mnt         2   1 root /usr/bin/bash
4026532364 uts         2   1 root /usr/bin/bash
4026532366 ipc         2   1 root /usr/bin/bash
4026532367 pid         2   1 root /usr/bin/bash
4026532370 net         2   1 root /usr/bin/bash