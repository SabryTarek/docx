#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int x = 0;
    int ans = 0;
    int counter = 0;

    while (cin >> n)
    {
        if (n >= 1 && n <= 1000)
        {
            while (i < n)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> x;
                    if (x == 0 || x == 1)
                    {
                        ans += x;
                    }
                    else
                        return 0;
                }
                if (ans > 1)
                    counter++;
            }
            cout << counter << '\n';
        }
    }

    return 0;
}