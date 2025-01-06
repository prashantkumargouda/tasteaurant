// queue

#include <iostream>
#include <queue>

using namespace std ;

int main() {
    queue<string> q ;

    q.push("Prashant");
    q.push("Kumar") ;
    q.push("Gouda") ;

    cout << "At front :" << q.front() << endl;
    string s = q.front();
    q.pop();
    cout << "Popped element : " << s << endl;
    cout << "at front now :" <<q.front() << endl;
    cout << "size after pop : " << q.size() << endl;
}