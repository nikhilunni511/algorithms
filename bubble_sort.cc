#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int *bubbleSort(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i > 0 && flag == 1)
            break;
        flag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 0;
            }
        }
    }
    return arr;
}

int main()
{
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *newArr = bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << endl;
    }
    return 0;
}