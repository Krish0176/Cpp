#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout << "*";
            
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    pattern(n);
    return 0;
}