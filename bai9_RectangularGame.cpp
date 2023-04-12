#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    int min_a, min_b;
    cin >> n >> a >> b;
    min_a=a; min_b=b;
    for (int i=0; i<n-1; i++)
    {
        cin >> a >> b;
        if (a<min_a)
        {
            min_a=a;
        }
        if (b<min_b)
        {
            min_b=b;
        }
    }
    cout << min_a*min_b;
}
