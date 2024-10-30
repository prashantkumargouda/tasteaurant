#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;

    int i=1;
    while(i<=n) {
        int j=1;
        do {
            printf("*") ;
            j++;
        }
        while(j<=n) ;
        printf("\n") ;
        i++;
    }
    return 0;
}