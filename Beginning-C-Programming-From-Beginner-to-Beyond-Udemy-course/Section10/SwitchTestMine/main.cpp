#include <iostream>

using namespace std;

int main() {
    
    char op {};
    int val1 {};
    int val2 {};
    
    do{
        cout << "Enter mathematical operator: ";
        cin >> op;
        cout << "Enter first value: ";
        cin >> val1;
        cout << "Enter second value: ";
        cin >> val2;
    if (op == '+' || op == '-' || op == '*' || op == '/' ) {
        cout << "The result is: " << basicOp (op, val1, val2);
    } else {
        cout << "Can`t recognise the operator";
        }
    
    } while (op != 'Q' && op != 'q');
    
    
    return 0;
}

int basicOp(char op, int val1, int val2) {
  switch(op) {
    case '+': return val1+val2;
    case '-': return val1-val2;
    case '*': return val1*val2;
    case '/': return val2 != 0 ? val1/val2 : 0;
    }