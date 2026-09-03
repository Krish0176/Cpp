#include <iostream>
#include <utility>
using namespace std;

void selectionsort(int n, int arr[])
{
    for(int i=0;i<n;i++){

        int MinIndex = i;


        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[MinIndex]){
                MinIndex = j;
            }
        }
        swap(arr[i], arr[MinIndex]);
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
    selectionsort(n, arr);
    printarr(n, arr);
}
