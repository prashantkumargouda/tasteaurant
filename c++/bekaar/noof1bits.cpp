// taking inputs as numbers 
// converting into binary 
// counting the number of setbit
// return count 

#include <math.h>
#include <iostream>
using namespace std;

//converting input into binary
int ans = 0;
int i=0;
int bitconverter(int n) {
    while(n!=0) {
        int bit = n & 1;
        ans = ans + bit * pow(10,i);
        n = n>>1;
        i++;
    }

}

// counting the number of setbits
int bitcounter(int n) {
    int num = bitconverter(n) ;
    int count = 0;
    while(num!=0) {
        int x = num % 10;
        if(x==1) {
            count += 1;
        }
        num = num / 10;
    }
    return count ;
}

// driver code
int main() {
    int n;
    cout << "Enter the value of n:" ;
    cin >> n;
    int z = bitcounter(n) ;
    cout << "the no of setbits :" << z << endl;
    return 0;
}