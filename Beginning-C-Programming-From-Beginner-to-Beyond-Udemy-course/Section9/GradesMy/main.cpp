#include <iostream>

using namespace std;

int main() {
    
    
    int score {};
    cout << "Enter your score (0-100): ";
    cin >> score;
    
    if (score > 100 || score < 0) {
        cout << "Score out of range!" << endl;
        } else {
            
            if (score >= 90) {
                cout << "You got an A! Well done!" << endl;
            } else {
                if (score > 80) {
                    cout << "You got a B. Nice work!" << endl;
                } else {
                    if (score > 70) {
                        cout << "It`s a C. Try better next time." << endl;
                    } else {
                        cout << "It is an F" << endl;
                        cout << "You need to retake the course to get credited!" << endl;
                    }
                }
            }
            
        }
    
    
    return 0;
}
