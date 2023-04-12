#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, d=0;
    cin >> n;
    if (n==1)
    {
        cout << "no";
    }
    else
    {
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                d++;
            }
        }
        if (d==1)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    return 0;
}
