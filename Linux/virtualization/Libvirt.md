# In The Name Of Allah .
# -- --- ---- -- ----- -
# Sat Nov  7 17:49:29 2020
# Written By : zer0err0r .
# ======= == = ========= =

# 1, KVM + Libvirt .
  
  # Virtualization types :
    = OS-level_virtualization [VMWare_workstation, Oracle_virtualbox, Microsoft_Hyper-V, OpenVZ, Gnome_Boxes] .
    = Para_virtualization [Xen] .
    = Full_virtualization[bare_metal_virtualization] [VMWare_ESXi, KVM[RHEV, oVirt, Proxmox, OVM, Openstack]] .
  
  # Why using KVM :
    = Stable .
    = VMWare_workstation vs KVM on an i5_2nd_gen_laptop_4GB_Ram example .

  # Why learning KVM :
    = Its the base of several advanced techs and solutions [RHEV, oVirt, Openstack, Vagrant...] .


  # Lets understand this about KVM .
    = KVM :
      - Kernel Virtualization Module .
      - KVM ia a modue added to Linux Kernel
      - 
     QEMU VS LKVM -> anathor way to manage KVM; compex like c lang
   
   

      - Centos8[qemu-kvm] === Centos7[qemu-system-x86_64, qemu-system-i386, qemu-system-arm, qemu-system-aarch64] . 
      - qemu-img .
      - 
    = Libvirtd, support these hypervisors as a frontend, Like 
      - VMWare
      - Xen
      - HyperV
      - IBM_PowerVM
      - Bhyve
      - LXC
      - OpenVZ
      - Parallels

    # Its similar to centos firewalls :
      = CentOS6 [Netfilter (Kernel Module) > IPTables (Frontend for module) > IPTables (service that control frontend) ] .
      KVM > QEMU > LibVirt
      = CentOS7 [Netfilter > IPTables > FirewallD] .
      = CentOS8 [Netfilter > NFTables > FirewallD] .

# ===== == ==== ======== =
# Peace Be Up0n Muhammed .

# In The Name Of Allah .
# -- --- ---- -- ----- -
# Sat Nov  7 17:59:12 2020
# Written By : zer0err0r .
# ======= == = ========= =

# 2, Installation .

  # Our LAB :
    = CentOS 8.2 .
    = Enhanced bash and vim look and feel .
    = Enabled EPEL and PowerTools repos
        - baseos & appstream
  
  # Make sure that virtualization enabled before you start :
    = virtualization enabled on BIOS enabled [intel virtualization, amd virtualization, VT-x, VT-d, AMD-v] .
    = virtualization enabled on kernel $ egrep '(vmx|svm)' /proc/cpuinfo


  # Two methods to install :
    
    # Method 1 [417MB] :
      $ dnf grouplist | grep -i virt
      $ dnf groupinstall 'Virtualization Host'  # CentOS8 .
      $ dnf groupinstall 'virtualization'       # CentOS7 .
      = [417MB] .

    # Method 2 [150MB] :
      $ dnf install 
        qemu-kvm # vm module
        qemu-img # create volumes == virtual disks
        libvirt # install libvirt server; libvirt is a cli tool to manage any hypervisor
        libvirt-client # install libvirt tools to handle server like virsh, virt-clone,
        python3-libvirt # dependancy for libvirt
        virt-install # create new virtual machine
        virt-top # monitiring current virtual machines
        libguestfs-tools

      # CentOS 7 :
        $ yum install
            qemu-kvm
            qemu-img
            libvirt
            libvirt-client
            libvirt-python
            bridge-utils # provide brctl command which replaced by bridge command from iproute package
            virt-install
            virt-top
            libguestfs-tools
        = [libvirt-python, birdge-utils] .


in arch: $ pacman -S glibc
      # Notice :
        = [bridge-utils] who provides [brctl] is replaced by iproute_[bridge] command .
        = [bridge-utils] allow us bridging our VM into our physical NIC .
        = You wont need the [bridge] command in this course, Except for checking purposes .
  # For GUI :
    $ yum install
        virt-manager # GUI tool to manage libvirt
        virt-viewer # virtual machine viewer of virt-manager; dependancy for virt-manager
    = I dont prefer that because of the default_pool .




  
  # Enabling the service :
    $  systemctl enable --now libvirtd
    $ lsmod | grep -i kvm
    = FirewallD is enabled and SELinux is enforcing .






# In The Name Of Allah .
# -- --- ---- -- ----- -
# Sun Nov  8 07:42:54 2020
# Written By : zer0err0r .
# ======= == = ========= =

# 3, Configuring The System .

  # Adding our user to [libvirt] group :
    $ usermod -aG libvirt zer0err0r
  
  # Relogin or start a new bash session, Or execute :
    $ newgrp libvirt


  # Set system_DBus aliases instead of session_DBus :
    $ vim ~/.bashrc
      alias virsh="virsh --connect 'qemu:///system'"
      alias virt-install="virt-install --connect 'qemu:///system'"
      alias virt-top="virt-top --connect 'qemu:///system'"
      alias virt-clone="virt-clone --connect 'qemu:///system'"
      alias virt-manager="virt-manager --connect 'qemu:///system'"
      alias virt-viewer="virt-viewer --connect 'qemu:///system'"
    $ source ~/.bashrc

    # For remote :
      $ vim ~/.bashrc
        alias virsh="virsh --connect 'qemu+ssh://user@ip/system'"
      = Then set a passwordless authentication with the remote hypervisor host .
        - Just use [ssh-keygen, ssh-copy-id] commands .

    virsh use user  by default
    virt-manager use system by default
    
  # Set a bridged connection :
    = Attention, Use an ethernet cable .
    = Most wifi cards will get you into the promiscous_mode issue .
    $ sudo -i
    $ echo 'BRIDGE=br0' >> /etc/sysconfig/network-scripts/ifcfg-ens3
    $ vim /etc/sysconfig/network-scripts/ifcfg-br0
      DEVICE="br0"
      BOOTPROTO=static
      IPADDR=192.168.100.102
      NETMASK=255.255.255.0
      NETWORK=192.168.100.0
      GATEWAY=192.168.100.1
      DNS1=8.8.8.8
      IPV6INIT="yes"
      IPV6_AUTOCONF="yes"
      ONBOOT="yes"
      TYPE="Bridge"
      DELAY="0"
    $ sudo systemctl restart NetworkManager
    = From now on, We should not configure [ens3] at all, We configure [br0] instead .
    = [br0] is the master now while [ens3] is a member[slave] of it .
  
  # [nmcli] method :
    = I need to test it first before recording it .
    = I will explain it later ISA .

  
  # Enable port forwarding :
    $ echo 'net.ipv4.ip_forward = 1' >> /etc/sysctl.conf
    $ sysctl -p /etc/sysctl.conf



# In The Name Of Allah .
# -- --- ---- -- ----- -
# Sun Nov  8 08:29:08 2020
# Written By : zer0err0r .
# ======= == = ========= =

# 5, Creating VMs without pools .

  # First, Create a VM volume .
    = [qcow2] vs [raw] v_disks .
    = Use whatever from the following :
      $ dd if=/dev/zero of=/home/zer0err0r/kvm/centos1.dd bs=1G count=10    # raw, no pool [not safe] .
      $ qemu-img create -f raw /home/zer0err0r/kvm/centos1.dd 10G           # raw, no pool .
      $ qemu-img create -f qcow2 /home/zer0err0r/kvm/centos1.qcow2 10G      # qcow2, no pool .


  # Then, Create the VM .
    $ virt-install \
      --name centos1 \
      --vcpus=1 \
      --ram=1024 \
      --network bridge:br0 \
      --disk /home/zer0err0r/kvm/centos1.dd \
      --graphics none \
      --location /home/zer0err0r/centos7.iso \
      --extra-args="console=tty0 console=ttyS0,115200" \
      --os-variant centos7.0 \
    

  # Lets explain some options :
    
    # [--name] :
      = Use a good name .
      = Like [zabbix_140] for home networks .

    # [--os-variant] :
      = [osinfo-query os] .

    # [--graphics] :
      = [vnc, spice, none] .

    # [--location] vs [--cdrom] :
      = [--extra-args] requires [--location] .
      = Windows VMs require [--cdrom] .

    # [--extra-args] [/etc/default/grub] :
      = If you forgot to use [--extra-args], Then for systemD systems .
      $ systemctl enable serial-getty@ttyS0.service
      $ systemctl start serial-getty@ttyS0.service

      # Then :
        $ vim /etc/default/grub
          GRUB_CMDLINE_LINUX_DEFAULT="console=tty0 console=ttyS0"
          GRUB_TERMINAL="serial console"
        $ update-grub || grub2-mkconfig -o /boot/grub2/grub.cfg




#####################################################################################
# The bash script .
#!/bin/bash
# Defining variables .
# Bash by default doesnt support [~/.bashrc] aliases inside scripts .
  virsh='virsh --connect qemu:///system'
  # [-] isnt supported as a variable name character in bash .
  virt_install='virt-install --connect qemu:///system'
  vm_name=centos1


# Creating the VM v_disk :
  qemu-img create -f qcow2 /home/zer0err0r/kvm/$vm_name.qcow2 10G


# Creating the VM .
# Dont write comments after the backslash[\] .
  $virt_install \
    --name $vm_name \
    --vcpus=1 \
    --ram=1024 \
    --network bridge:br0 \
    --disk /home/zer0err0r/kvm/$vm_name.qcow2 \
    --graphics none \
    --location /home/zer0err0r/centos7.iso \
    --extra-args="console=tty0 console=ttyS0,115200" \
    --os-variant centos7.0 \
    


# ===== == ==== ======== =
# Peace Be Up0n Muhammed .
