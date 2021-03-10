#include <iostream>

int main()
{
	int n=4,
        arr[n],
		c;
	while(1)
	{
		c=0;

		for(int i=0; i<n; i++)
		{
			std::cin>>arr[i];
		}

        for(int x = 0; x < n-1; x++)
        {
            if(arr[x]==arr[x+1])
                continue;
            else
                c++;
        }
		std::cout << "\n" << 3-c << "\n\n\n";
	}
	return 0;
}