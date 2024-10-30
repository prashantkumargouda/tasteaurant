// finding the length of an array

#include <iostream>
using namespace std;

int main() {
    int arr[19] ;
    int sizearr = sizeof(arr) / sizeof(int) ;
    cout << "length of arr :" << sizearr;
    return 0;
}