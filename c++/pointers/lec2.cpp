#include <iostream>
using namespace std ;

int main() {
    int arr[10] = {1,0,3,4,5,6,7,8} ;
    cout << "address of first block :" << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first block :" << &arr << endl;
    cout << "1st " << *arr << endl;
    cout << "2nd " << *arr+1 << endl;
    cout << "2nd " << *(arr + 1 ) << endl;
    
    return 0 ;

}