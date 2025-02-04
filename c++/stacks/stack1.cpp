#include <iostream>
#include <stack> 
using namespace std ;

class Stack {
public :
    int *arr ;
    int size ;
    int top ;

    Stack(int size) {
        this -> size = size ;
        arr = new int[size] ;
        top = -1 ;
    }

    void push(int data) {
        if( size - top > 1 ) {
            top++ ;
            arr[top] = data ;
        }
        else{
            cout << "stack overflow" << endl; 
        }
    }
    void pop() {
        if( top >= 0 ) {
            top-- ;
        }
        else {
            cout << "stack underflow" << endl; 
        }
    }
    void peek() {
        if( top >= 0 && top < size ) {
            cout << arr[top] << endl; 
        }
        else {
            cout << "stack is empty" << endl; 
        }
    }
    bool isempty() {
        if( top == -1 ) {
            return true ;
        }
        else {
            return false ;
        }
    }
};

int main() {
    Stack st(5) ;
    st.push(1) ;
    st.push(2) ;
    st.push(3) ;
    st.push(4) ;
    st.push(5) ;

    st.pop() ;
    st.peek() ;
    
}