#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j-1<=n)
            {
                cout << j+i-1 << " ";
            }
            else
            {
                cout << j+i-n-1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
