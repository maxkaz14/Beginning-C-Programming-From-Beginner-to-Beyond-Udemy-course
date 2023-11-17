#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int main() {
    
    cout << "Let`s count to billion, shall we?" << endl;
    
    //for loop 
    
    auto start_for = chrono::system_clock::now();
    
    for (int count {}; count <= 1'000'000'000; ) {
        count++;
        if (count % 100'000'000 == 0)
            cout << count << endl;
        }
    
    
    auto end_for = chrono::system_clock::now();
    
    chrono::duration<double> elapsed_seconds_for = end_for-start_for;
    
    cout << "Runtime for 'for' loop was: " << elapsed_seconds_for.count() << " seconds" << endl;
    
    // while loop
    
    int count_while = 0;
    auto start_while = chrono::system_clock::now();
    
    
    while (count_while <= 1'000'000'000) {
        count_while++;
        if (count_while % 100'000'000 == 0)
            cout << count_while << endl;
    }
    
    auto end_while = chrono::system_clock::now();
    
    chrono::duration<double> elapsed_seconds_while = end_while-start_while;
    
    cout << "Runtime for 'while' loop was: " << elapsed_seconds_while.count() << " seconds" << endl;
    
    return 0;
}
