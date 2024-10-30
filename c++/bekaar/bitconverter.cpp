#include <iostream>
#include <math.h>
using namespace std;

int bitconverter(int n) {
    int m = n;
    int ans = 0;
    int i=0;
    while(m!=0) {
        int bit = m&1;
        ans = ans + bit * pow(10,i) ;
        m = m >> 1;
        i++;
    }
    return ans;
}

int main () {
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;

    cout << "binary :" << bitconverter(n);
    
}