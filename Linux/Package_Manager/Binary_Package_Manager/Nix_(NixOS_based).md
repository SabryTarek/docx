NIX
===
https://nixos.org/
    - https://releases.nixos.org/
    - https://cache.nixos.org
    -







## install nix package manager

$ curl -L https://nixos.org/nix/install | sh
> downloading Nix 2.3.9 binary tarball for x86_64-linux from 'https://releases.nixos.org/nix/nix-2.3.9/nix-2.3.9-x86_64-linux.tar.xz' to '/tmp/nix-binary-tarball-unpack.QRop6L0

when you install NIX package you get this utilites:
- nix
- nix-channel
- nix-copy-closure
- nix-env
- nix-instantiate
- nix-shell
- nix-build
- nix-collect-garbage
- nix-daemon
- nix-hash
- nix-prefetch-url
- nix-store     

when you install NixOS you get this utilites:
- nixos

## after freash instal for nix

$ nix-env --query --installed
nix-2.3.9

~/.nix-profile/
|-- bin
|-- etc
|-- include -> /nix/store/fwak7l5jjl0py4wldsqjbv7p7rdzql0b-nix-2.3.9/include
|-- lib -> /nix/store/fwak7l5jjl0py4wldsqjbv7p7rdzql0b-nix-2.3.9/lib
|-- libexec -> /nix/store/fwak7l5jjl0py4wldsqjbv7p7rdzql0b-nix-2.3.9/libexec
|-- manifest.nix -> /nix/store/wij9wi3ha4g0kpg8y2f70s1i58db67rz-env-manifest.nix
|-- rplugin.vim -> /nix/store/2iqppd6c080avhxdzv5jgmis0r7ngwjx-neovim-0.4.4/rplugin.vim
`-- share

/nix
|-- store
`-- var


nix-env -q should be enough to list installed packages.


nix run nixpkgs.ripgrerp -c "rg 'field to start'"



## nix-shell
$ nix-shell -p nodejs
$ node -e "console.log(1+1)"

$ cat -n shell.nix                                                              
{ pkgs ? import <nixpkgs> {} # here we import the nixpkgs package set   
}:                                                                      
pkgs.mkShell {               # mkShell is a helper function             
  name="dev-environment";    # that requires a name                     
  buildInputs = [            # and a list of packages                   
    pkgs.nodejs                                                         
  ];                                                                    
  shellHook = ''             # bash to run when you enter the shell     
    echo "Start developing..."                                          
  '';                                                                   
}
$ nix-shell
(nix-shell) $ node -e "console.log(1+1)"

Community based projects:
- Home-Manager
- Darwin-Manager
- NixOps
- nix hydera
- nix flakes