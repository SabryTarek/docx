packer
===
Build Automated custom Machine Images




you can build images for cloud providers like
    - microsoft azure
    - amazon aws
    - digital ocean
    - hypervisors
        - vmware
        - virtualbox
        - proxmox
        
     it is a cli tool that automatically creates these images from a template file so you can for example create custom images with installed applications or user accounts pre-configure authentication settings like ssh keys or ssl certificates so everything that you or your organization needs to be present in that machine image and this is pretty useful if you want to automate the deployment of resources like using it for development staging or production environments on multiple platforms or you want to quickly create demo appliances whenever you need them





integrattion in many different systems because it has tons of plugins and extensions these plugins are mostly builders so these are the components that are responsible for creating these machines and generating the images on the platforms but you can also integrate it with provisioners
    - ansible
    - chef
    - puppet
    -salt-stack




+ packer templates consist of a bunch of different files
    - credentials file: contains the connection settings for the proxmox server
        - authenticate to our proxmox server
        - create virtual machines
        - execute tasks
    - "proxmox_api_url": contains the ip address of the proxmox server the web interface port and the url path that leads to the api module and we also need to authenticate with an api token and a token secret so if you don't know how to create that in proxmox you just need to go to into the web interface select your data center and go to permissions api tokens add a new api token for a specific user so in my case i've just used the root user because this user already has all the privileges we need in packer but you can also create a separate user according to the proxmox builder documentation with limited permissions of course and then you just need to enter a name for this token id and now it's really important to deselect the privilege separation setting because we want our api token to have the same privileges as a root user note that the api token secret will only show up once so when you close the window and forgot the secret you just need to create another one and then you need to enter these settings in the credentials file so take care of the api




* templates consist of three different sections
    + describe the variables used in the credentials file
    + define our resources and the individual settings for them
    + build section where we define which resources should be built and how they should be provisioned 


```credentials.pkr.hcl file
    proxmox_api_url = "https://192.168.1.101:8006/api2/json"  # Your Proxmox IP Address
    proxmox_api_token_id = "root@pam!packer"  # API Token ID
    proxmox_api_token_secret = "77ccabd3-ab1f-4812-ab17-4940f6713481"
```









```bash
    packer validate template.json
    packer build template.json
    packer build \
        -var 'aws_access_key=YOUR ACCESS KEY' \
        -var 'aws_secret_key=YOUR SECRET KEY' \
        example.json
```
INTEGRATIONS

Out of the box Packer comes with support to build images for:
Amazon EC2, CloudStack, DigitalOcean, Docker, Google Compute Engine, Microsoft Azure, QEMU, VirtualBox, VMware, and more.
 Support for more platforms is on the way, and anyone can add new platforms via plugins.