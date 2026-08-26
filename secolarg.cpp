#include <iostream>
using namespace std;
int main(){
    cout << "Enter array size" << "\n";
    int n;
    int arr[100];
    
    cin >> n;
    cout << "Enter array elements" << "\n";
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }


    int max = arr[0];
    int maxpos;
    int smax =arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            maxpos =i;
        }
       if(i == maxpos){
        continue;
        if(arr[i]>smax){
            smax = arr[i];
        }
       }
    }
    cout << "MAx value: " << max << "\n";
    cout << "Second MAx value: " << smax << "\n";

}