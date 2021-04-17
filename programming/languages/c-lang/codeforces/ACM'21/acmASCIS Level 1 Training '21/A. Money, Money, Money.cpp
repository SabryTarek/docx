#include <iostream>

int main()
{
	unsigned int  n,
	              x,
	              y,
	              ans;
    while(std::cin >> n >> x >> y)
    {
        if(x<=y)
	        ans = (y-x)*n;

        std::cout << ans <<"\n\n\n";
    }
    return 0;
}