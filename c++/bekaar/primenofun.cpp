#include <iostream>
using namespace std;
// 0 for not prime
// 1 for prime

bool primecheck(int n) {

    for(int i=2;i<n;i++) {
        if(n%i==0) {
            return 0;
        }
        
    }
    return 1;

}

//driver code 
int main () {
    int n;
    cout << "enter the value of n:" <<endl;
    cin >> n;

    int z = primecheck(n) ;
    if(z) {
        cout << "prime" << endl;
    }
    else { 
        cout << "not prime" << endl;
    }
}