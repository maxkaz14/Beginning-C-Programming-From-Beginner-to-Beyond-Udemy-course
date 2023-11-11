// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};
    
    int cents {};
    
    cout << "Please enter number of cents: ";
    cin >> cents;
    cout << endl;
    
// Solution using modulo

    cout << "************************\n Solution using modulo.\n\n";
    int remains_modulo {};
    
    dollars = cents/100;
    remains_modulo = cents%100;
    
    quarters = remains_modulo/25;
    remains_modulo = remains_modulo%25;
    
    dimes = remains_modulo/10;
    remains_modulo = remains_modulo%10;
    
    nickels = remains_modulo/5;
    remains_modulo = remains_modulo%5;
    
    pennies = remains_modulo;
    
    cout << "You can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl << endl;
    


// Solution without modulo

dollars = quarters = dimes = nickels = pennies = 0;
//cout << "test " << dollars << quarters << dimes << nickels << pennies << cents;

    cout << endl <<"************************\n Solution without modulo.\n\n";
    
    dollars = cents/100;
    cents -= dollars*100;
    
    quarters = cents/25;
    cents -= quarters*25;
    
    dimes = cents/10;
    cents -= dimes*10;
    
    nickels = cents/5;
    cents -= nickels*5;
    
    pennies = cents;
   
    cout << "You can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl << endl;

 
    cout << endl;
    return 0;
}


