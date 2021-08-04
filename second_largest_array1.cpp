#include <iostream>
using namespace std;

int secondLarEle(int arr[], int n)
{

    int largest = 0;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {100, 23, 45, 567, 34, 42};
    int n = 6;
    cout << secondLarEle(arr, n);
    return 0;
}