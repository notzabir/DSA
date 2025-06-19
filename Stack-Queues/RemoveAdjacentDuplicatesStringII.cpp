#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // for reverse()
#include <vector>

using namespace std;

class Solution {
public:
    string RemoveDuplicates(string s, int k) {
        vector<pair<char, int>>st;
        for(auto c : s){
            if(st.size() == 0 || st.back().first != c){
                st.push_back({c, 1});
            }
            else{
                st.back().second++;
            }
            
            if(st.back().second == k){
                st.pop_back();
            }
        }
        
        string res ;
        for(auto x: st){
            res.append(x.second, x.first);
        }
        
        return res;
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = solution.RemoveDuplicates(input, 3);

    cout << "Result after removing adjacent duplicates: " << result << endl;

    return 0;
}
