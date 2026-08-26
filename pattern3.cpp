#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "Enter the value";
    cin >> n;
    pattern(n);
    return 0;
}