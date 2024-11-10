#include <iostream>  
#include <stack>     
#include <string>    

using namespace std; 

int main() {
    
    string inputStr = "Hello World";
    stack<char> stack;
    string result = "";
    int i = 0;
    while (i < inputStr.size()) {
        char ch = inputStr[i];
        if (ch != ' ') {
            stack.push(ch);
        }
        else {
            
            while (!stack.empty()) {
                result += stack.top();  
                stack.pop();            
            }
            result += ' '; 
        }
        i++; 
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
    }



    
    cout << "Reversed string  :" << result << endl;

    return 0; 
}