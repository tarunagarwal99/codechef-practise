//naive solution
//complexity : o(n^2)

#include <iostream>
using namespace std;

int largestEle(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 2, 45, 10, 67, 49};
    int n = 6;
    cout << largestEle(arr, n);
    return 0;
}