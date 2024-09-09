#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "number of n :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "total number is : " << sum;
    return 0;
}