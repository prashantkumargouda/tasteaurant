// stadrted recursion again 

#include <iostream>
using namespace std ;

void reachedHome(int src , int dest) {
    // base case 
    if( src == dest ) {
        cout << "ghar pahunch gaye" << endl;
        return ;
    }

    src++ ;
    
    return reachedHome( src , dest ) ;

}
int main() {
    int src = 1 ;
    int dest = 10 ;

    reachedHome( 1, 10) ; 

    return 0 ;
}