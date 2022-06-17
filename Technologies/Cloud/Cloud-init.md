[cloud-init](https://cloud-init.io/)
===
* cloud-init
    + made by canonical
    + allows for customizing cloud instances or any linux system that has it installed


provide some metadata is provided either through the cloud platform or through something like a configuration drive or even a local web server that configuration which most commonly is a yaml document can then instruct cloud init to do things like creating users installing packages adding services running some some commands doing very like a very wide variety of configuration steps on the system those are meant to be run just once on the initial startup of the instance and then cabinet doesn't run again after that it's supported on a wide variety of operating systems and lex distributions and it's quite commonly used in public cloud to customize someone's instance so you take the normal pristine image as published by the distribution and then your cabinet metadata will install all of the packages and services that you need to actually run your workload




- you can download a ready to go cloud-init image
- I prefer to prep it myself to learn what needs to be done and understand every step of the way

- don't add any swap partitions to the setup -> cloud-init will not be able to expand the root partition for you automatically




- how to prepare the vm for the use with cloud init because it of requires a very specific configuration 
    ```bash
        $ apt install -y \
                cloud-init \    # install cloud-init
                cloud-initramfs-growroot \  # utility that will automatically expand your root partition
                qemu-guest-agent \  # give proxmox some more control over the vm like graceful shutdown and read the ip addresses of the system
                sudo git curl fish figlet tmux mlocate fonts-powerline resolvconf htop iftop bmon net-tools dnsutils gnupg2 ntpdate
    ```



```bash
    $ usermod --shell $(which fish) $USER
    $ curl -L https://get.oh-my.fish | fish
    $ omf install bobthefish
    $ echo "figlet GATEWAY - IT" > ~/.config/fish/config.fish
    $ set fish_greeting
```


i don't like to convert this master vm into an actual template in proxmox because the template has few drawbacks no easy way to modify it on the go no easy way to upgrade to latest packages after conversion image becomes static and if you want to do any modifications you need to create a vm from that template modify it then convert it back into template and that wastes a lot of time which completely destroys the purpose of this tutorial because we wanted to save time not waste it

- Proxmox Cloud-init Drive


- Disable root user






* proxmox only provides basic functionality for the vms deployed via cloud init
    - username
    - password
    - dns domain
    - dns servers
    - ssh public key
    - ip config static or dhcp configuration
    - provide them with custom shell scripts
    - software packages list

I would like to see cloud init section improve over time for example the list of additional packages to install upon the start would be nice
    
- in case you lose a password to any vm it's really easy to reset it just change it then poweroff your vm click regenerate image and then start your vm backup

- whenever you expand the disk size it will be automatically applied to the vm whenever you start it or restart it
- vm name inside of proxmox will be used as a hostname inside of the vm
- cloud-init apply the latest upgrades for your os upon the start












- create our own linux server images build based on your favorite linux distributions