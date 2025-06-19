#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // for reverse()

using namespace std;

class Solution {
public:
    string RemoveDuplicates(string s) {
        int n = s.size(), i = 0;
        stack<char> st;

        while (i < n) {
            if (st.empty() || st.top() != s[i]) {
                st.push(s[i]);
            } else {
                st.pop();
            }
            i++;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = solution.RemoveDuplicates(input);

    cout << "Result after removing adjacent duplicates: " << result << endl;

    return 0;
}
