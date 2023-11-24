// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwe bgjhqdyvtkfuompciasr"};
    
    string message_1 {};
    cout << "Enter any message to be encrypted: ";
    getline(cin, message_1);
    
    string encrypted_message {};
    for (size_t i {}; i < message_1.length(); i++) {
        for (size_t j {}; j < alphabet.length(); j++) {
            if (message_1.at(i) == alphabet.at(j)) {
                encrypted_message += key.at(j);
                break;
            }
        }
    }
    
    cout << "Your encrypted message would be: " << encrypted_message << endl;
    
    string decrypted_message {};
    for (size_t i {}; i < encrypted_message.length(); i++) {
        for (size_t j {}; j < key.length(); j++) {
            if (encrypted_message.at(i) == key.at(j)) {
                decrypted_message += alphabet.at(j);
                break;
            }
        }
    }
    
    cout << "After decryption reciever would get: " << decrypted_message << endl;
    
    cout << endl;
    return 0;
}

