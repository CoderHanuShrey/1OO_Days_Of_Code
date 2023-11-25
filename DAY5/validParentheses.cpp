#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution solution;
    string input;
    
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (solution.isValid(input)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }

    return 0;
}
