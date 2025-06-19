#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (st.empty()) {
                st.push(c);
            }
            else if ((st.top() == '(' && c == ')') ||
                     (st.top() == '[' && c == ']') ||
                     (st.top() == '{' && c == '}')) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        return st.empty();
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string of brackets: ";
    getline(cin, input);  // Read the full line including spaces if any

    bool result = solution.isValid(input);

    if (result)
        cout << "The string is valid (balanced brackets)." << endl;
    else
        cout << "The string is NOT valid." << endl;

    return 0;
}

