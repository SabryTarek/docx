consul
======

- service registration and discovery
- health check
- key-value store


- Consul is a static binary written in Go

consul cluster:
- servers nodes
- agent nodes

- consul agent -dev -client=0.0.0.0
- In the development mode, the ui option is provided
- consul members
- Consul provides a rich HTTP API. The /catalog endpoint allows to register/deregister/list nodes and services. It listens on port 8500 by default
- curl localhost:8500/v1/catalog/nodes



packer
===
Build Automated Machine Images

packer validate template.json
packer build template.json
packer build \
    -var 'aws_access_key=YOUR ACCESS KEY' \
    -var 'aws_secret_key=YOUR SECRET KEY' \
    example.json

INTEGRATIONS

Out of the box Packer comes with support to build images for:
Amazon EC2, CloudStack, DigitalOcean, Docker, Google Compute Engine, Microsoft Azure, QEMU, VirtualBox, VMware, and more.
 Support for more platforms is on the way, and anyone can add new platforms via plugins.



 Teraform (infrastructure as a code) [IAC]
=========================================

- an open source tool that codifies APIs into declarative configuration files that can be shared amongst team members, treated as code, edited, reviewed, and versioned. In these nine hands-on labs, you will work with example templates and understand how to launch a range of configurations, from simple servers, through full load-balanced applications.

Supported providers:
- AWS Amazion web service
- Microsoft Azure
- GCP Google Coud Plateform
- Digitalocean
- Openstak
- baremetal
- vmware

- HCL: Hachicorp Configuration Language
- .tf
- Terraform enterprice version

- write
- pan
- create

files:
- providers.tf
- variables.tf
- terraform.tfvars
- main.tf

commands:
- terraform init -> download refed plugins(like provider.digitalocean)
- terraform plan
- terraform apply


sed "s/web1/web2/g" web1.tf > web2.tf



Providers:
every Provider has its Resources(services)
Resources:



Blocks:
- 


Common commands:
-    apply              Builds or changes infrastructure
    console            Interactive console for Terraform interpolations
-    destroy            Destroy Terraform-managed infrastructure
    env                Workspace management
    fmt                Rewrites config files to canonical format
    get                Download and install modules for the configuration
    graph              Create a visual graph of Terraform resources
    import             Import existing infrastructure into Terraform
-    init               Initialize a Terraform working directory
    output             Read an output from a state file
-    plan               Generate and show an execution plan
-    providers          Prints a tree of the providers used in the configuration
    push               Upload this Terraform module to Atlas to run
    refresh            Update local state file against real resources
-    show               Inspect Terraform state or plan
    taint              Manually mark a resource for recreation
    untaint            Manually unmark a resource as tainted
    validate           Validates the Terraform files
-    version            Prints the Terraform version
    workspace          Workspace management
All other commands:
    debug              Debug output management (experimental)
    force-unlock       Manually unlock the terraform state
    state              Advanced state management









vagrant
========
- vagrant
    - init  -> create vagrantfile
    - validate
    - up    -> 
    - ssh
        - -c "lsblk"
    - rdp
    - sudpend -> sleep
    - resume
    - halt -> shutdown
    - destroy -> remove
    - reload -> restaet
        - --provision
    - box
        - add
        - list
    - status
    - global-status [--prune]
    - login
    - share -> CEARTE link to share you work with other
    - connect
    - package -> make your box from virtial machine
    - plugin -> install plugins for vagrant
        - install
        - uninstall
        - list
        - 
    - snapshots -> restore point









* vagrant plugin install vagrant-share


---------------------------------------------------------------------------------------------

# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "ubuntu/trusty64"

  config.vm.network "forwarded_port", guest: 80, host: 8080

  config.vm.provider "virtualbox" do |vb|
      vb.customize ["modifyvm", :id, "--memory", "768"]
      vb.customize ["modifyvm", :id, "--natdnshostresolver1", "on"]
      vb.customize ["modifyvm", :id, "--natdnsproxy1", "on"]
      # vb.name = "vagrant-box"
  end

  config.vm.provision "shell", path: "vm-bootstrap.sh"
end

- Vagrant
- Vault
- Packer
- Nomad
- Consol
- Terraform
