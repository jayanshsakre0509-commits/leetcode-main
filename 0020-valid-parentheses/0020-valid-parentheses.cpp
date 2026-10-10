#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        
        for (char c : s) {
            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // If it's a closing bracket, check for matching top of the stack
            else {
                if (st.empty()) return false; // Closing bracket with no opening partner
                
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop(); // Valid match found, remove from stack
                } else {
                    return false; // Mismatched brackets
                }
            }
        }
        
        // If the stack is empty, all brackets were perfectly matched
        return st.empty();
    }
};
