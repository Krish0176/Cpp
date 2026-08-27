#include <iostream>
#include <utility>
using namespace std;
void bubblesort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {

            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void printarr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "enter array size & Enter array elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(n, arr);
    printarr(n, arr);
}