
- SFML
- SDL
- Qt4
- Qt5
- Qt Creator
- Boost
- https://juce.com

- https://www.wxwidgets.org
- QtWidgets rather than QtQuick








#include<iostream>
using namespace std;
int main()
{
   unsigned long long int n;
   while(cin>>n)
   {
      (n%2==0)?cout<<"Fair"<<"\n\n":cout<<"Unfair"<<"\n\n";
   }
   return 0;
}