#include <iostream>
using namespace std;
int main()
{
  unsigned long long int    n,
                            x,
                            e,
                            count;
 
  char s;
 
  while(cin >> n >> x)
	{
		count=0;
 
		for(int i=0; i<n; i++)
		{
			cin >> s >> e;
 
				if(s == '+')
					x+=e;
				else
				{
					if(e <= x)
						x-=e;
					else
						count++;
				}
	}
	cout << "\n" << x <<" "<< count << "\n\n\n";
  }
  return 0;
}
