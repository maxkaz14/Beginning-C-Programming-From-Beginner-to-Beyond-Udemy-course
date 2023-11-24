#include <iostream>
#include <cctype>
#include <cstring>


using namespace std;

int main() {
    
    char first_name [50] {};
    char last_name [50] {};
    
    cout << "Type your first name: ";
    cin.getline(first_name, 20);
    
    cout << "Type your last name: ";
    cin.getline(last_name, 20);
    
    cout << "Hello, " << first_name << " " << last_name << "!" << endl;
    cout << "Your first name, " << first_name << ", has " << strlen(first_name) << " characters" << endl;
    cout << "Your last name, "<< last_name << ", has " << strlen(last_name) << " characters" << endl;
    
    return 0;
}
