#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
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
#main() {
    // Your code goes here
    
    return 0;
}include <iostream>
using namespace std;

int 