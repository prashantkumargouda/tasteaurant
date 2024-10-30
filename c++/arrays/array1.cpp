#include <iostream>
using namespace std;

int printarray(int arr[] , int size) {
    // printing an array

    for(int i=0;i<size;i++) {
        cout << arr[i] << " " ;
    }
    cout <<endl;
    cout << "printing done" << endl;
}



// driver code 
int main() {
    int n[10] = {1,2,30};
    
    printarray( n,10) ; 

    int third[15] = {1,2,3};
    printarray(third,15) ;
    //cout << "elements of third: " << printarray(third,15) << endl;
    // printing theoretical size of given array

    int thirdsize = sizeof(third) / sizeof(int)  ;
    cout << "size of third : " << thirdsize << endl;


}