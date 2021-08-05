//efficient solution
//tc:o(n),   no auxilarry space required

#include<iostream>
using namespace std;


int removeDup(int arr[], int n)
{
   
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main() {
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