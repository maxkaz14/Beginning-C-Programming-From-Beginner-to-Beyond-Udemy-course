#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string user_message {};
    
    cout << "Welcome to pyramid generator!" << endl;
    cout << "Enter a string to build a pyramid: ";
    getline (cin, user_message);
    
    size_t user_message_length = user_message.length();
    
    for (int i = 0; i<user_message_length; i++){
        string line_output {};
        
        //adding spaces to output
        for (size_t spaces = i; spaces < user_message_length; spaces++){
            line_output += " ";
        } 
        
        //adding letters in right order to output
        
        for (int j = 0; j<=i; j++) {
            line_output += user_message.at(j);
        }
        
        // adding letters in reverse order to output
        
        for (int k = i-1; k >= 0; k--) {
            line_output += user_message.at(k);
        }
        
        //outputting
        
        cout << line_output << endl;
        
    }
    
    return 0;
}
