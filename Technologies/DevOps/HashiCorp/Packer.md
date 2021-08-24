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