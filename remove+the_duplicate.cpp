//naive solution
//complexity is:o(n) and auxi space:o(n)

#include <iostream>
using namespace std;

int removeDup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }

    return res;
}

int main()
{
    int arr[] = {10, 10, 20, 20, 30, 30, 30};
    int n = 7;
    cout << "Array before removal:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = removeDup(arr, n);

    cout << "array after removal:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}