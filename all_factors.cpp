//all the factors in a number
//complexity is o(n)^1/2
//not printed numbers in sorted order

#include <iostream>
using namespace std;
void allFactors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            cout << i << " ";

            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    allFactors(n);
    return 0;
}