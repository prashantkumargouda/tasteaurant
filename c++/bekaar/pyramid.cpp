#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;

    int i=1;
    while(i<=n) {
        int space = n-i;
        while(space != 0) {
            cout << " " ;
            space = space - 1;
        }
        int j=1;
        while(j<=(2*i-1)) {
            cout << "*" ;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}