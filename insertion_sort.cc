#include <iostream>
using namespace std;

int *insertionSort(int arr[], int n)
{
    int i, j, k;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        k = arr[i];
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }

    return arr;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *newArr = insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << endl;
    }
    return 0;
}