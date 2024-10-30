// arranging elements in ascending order

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {1,6,7,4,3,2,7,9,11,17};

    sort(arr, arr + 10, less<int>()) ;
    cout << "array after sorting " << endl;
    for(int i=0;i<10;i++) {
        cout << arr[i] << " ";

    }
    return 0;
}
