#include<iostream>
#include<stack>
#include<string>

using namespace std;

int precedence(char op){
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(string exp){
    string result;
    stack<char> stack;
    for(int i = 0; i < exp.length(); i++){
        char c = exp[i];
        if(isalnum(c))
            result += c;
        else if(c == '(')
            stack.push(c);
        else if(c == ')'){
            while(!stack.empty() && stack.top() != '('){
                result += stack.top();
                stack.pop();
            }
            stack.pop();
        }
        else{
            while(!stack.empty() && precedence(c) <= precedence(stack.top())){
                result += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while(!stack.empty()){
        result += stack.top();
        stack.pop();
    }
    return result;
}

int main(){
    string exp = "5+4+3*3-2/1";
    string postfix = infixToPostfix(exp);
    cout << postfix;
    return 0;
}

