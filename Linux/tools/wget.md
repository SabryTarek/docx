
wget = curl -o


- wget's major strong side compared to curl is its ability to download recursively.
- wget is command line only. There's no lib or anything, but curl's features are powered by libcurl.
- curl supports:
    - FTP, FTPS
    - HTTP, HTTPS
    - SCP, SFTP, TFTP, TELNET, DICT, LDAP, LDAPS, FILE, POP3, IMAP, - SMTP, RTMP and RTSP.
- wget supports HTTP, HTTPS and FTP.
- curl builds and runs on more platforms than wget.
- wget is released under a free software copyleft license (the GNU GPL).
- curl is released under a - free software permissive license (a MIT derivate).
- curl offers upload and sending capabilities.
- wget only offers plain HTTP POST support.
You can see more details at the following link:

curl vs Wget




#include<iostream>
int main()
{
    unsigned short int  n=0;
    while(std::cin>>n)
    {
        signed short int    x=0,
                            y=0,
                            z=0,
                            tmp=0;
        for(int i=0; i<n; i++)
        {
            std::cin>>tmp;
            x+= tmp;
            std::cin>>tmp;
            y+= tmp;
            std::cin>>tmp;
            z+= tmp;
        }
        if(x==0 && y==0 && z==0)
            std::cout<<"YES"<<"\n\n";
        else
            std::cout<<"NO"<<"\n\n";

    }
    return 0;
}