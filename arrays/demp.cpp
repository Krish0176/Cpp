#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter size of array: "<< "\n";
    cin >> n;
    int arr[50];
    cout<< "Enter array elements "<< "\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter element you want to find: " << "\n";
    cin >> target;
    for(int i=0;i<n;i++){
        if(target  == arr[i]){
            cout << "Element found at index pos" << i <<"\n";
        }
        else cout << "Not found  " << "\n";    }
        return 0;
}