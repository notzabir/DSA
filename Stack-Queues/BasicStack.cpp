// Basic Stack Traversal and Methods like push(), pop(), etc

#include <iostream>
#include <stack>

using namespace std;

void printElementOfStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(10);
    s.push(-3);
    s.push(9);
    
    cout << s.empty() << endl;
    cout << s.size() << endl;
    printElementOfStack(s);
    
    return 0;
}