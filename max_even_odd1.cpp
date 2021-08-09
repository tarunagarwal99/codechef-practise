//efficient solution
// tc:o(n)
//auxi space:o(1)

#include <iostream>
using namespace std;

int max_even_odd(int arr[], int n)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {

        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 11, 2, 3, 8, 5, 3};
    int n = 7;

    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << max_even_odd(arr, n);
    return 0;
}