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
    int target,first,last;
    cout << "Enter the target";
    cin >> target;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            if (first == -1) first = i;
        }
        if (arr[i] >  target)
        { 
            
           last = (i - 1);
           break;
        }
        
    }
}
