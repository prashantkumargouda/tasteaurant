#include <iostream>
using namespace std;

int twoSum(int arr[], int n, int target) {
    for(int i=0;i<n-1;i++) {
        for(int j = i + 1;j<n;j++) {
            if( arr[i] + arr[j] == target ) {
                cout << i << " " << j << endl;
            }
        }
    }
}

//driver code
int main() {
    int arr[5] = {1,2,3,4,5};
    int target ;
    cout << "enter the target value :" << endl;
    cin >> target;

    twoSum(arr,5,target) ;
    return 0;

}