#include <iostream>
#include <utility>
using namespace std;

void insertionsort(int n, int arr[])
{
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printarr(int n, int arr[])
{
    cout << "Sorted array: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "enter array size & Enter array elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(n, arr);
    printarr(n, arr);
}
