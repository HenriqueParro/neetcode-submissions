class Solution {
public:
    bool isValid(string s) {

        if(s.length() % 2 != 0 ) return false;

        stack<char> parenthesesValidator;
        
        for(char c : s){

            if(c == '(' || c == '[' || c == '{') parenthesesValidator.push(c);

            else {

                if (parenthesesValidator.empty()) return false;
                
                char c_peaked = parenthesesValidator.top();                
                
                if(c_peaked == '(' && c == ')'){
                    parenthesesValidator.pop();
                    
                }
                
                else if(c_peaked == '[' && c == ']') {
                    parenthesesValidator.pop();
                    
                }

                else if(c_peaked == '{' && c == '}') {
                    parenthesesValidator.pop();
                    
                }
                
                else return false;
            }
        }

        if (parenthesesValidator.empty()) return true;
        else return false;

    }
};
