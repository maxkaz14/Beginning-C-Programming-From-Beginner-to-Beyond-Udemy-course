
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    const double small_rooms_price {25};
    const double large_rooms_price {35};
    const double tax_rate {0.06};
    const int estimate_days {30};
    
    int small_rooms_num {0};
    int large_rooms_num {0};
    int cost_before_tax {0};
    double cost_with_tax {0};
    double tax {0};
    
    cout << "Hello! This is Frank's Carpet Cleaning Service" << endl;
    cout << "How many small rooms do you want cleared? ";
    cin >> small_rooms_num;
    cout << "How many large rooms do you want cleared? ";
    cin >> large_rooms_num;
    
    cout << "\n\n==============================\n";
    cout << "Estimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << small_rooms_num << endl;
    cout << "Number of large rooms: " << large_rooms_num << endl;
    cout << "Price for small room cleaning: $" << small_rooms_price << endl;
    cout << "Price for large room cleaning: $" << large_rooms_price << endl << endl;
    
    cost_before_tax = small_rooms_price*small_rooms_num + large_rooms_num*large_rooms_price;
    
    cout << "Total cost without tax: $" << cost_before_tax << endl;
    cout << "Tax rate is: " << tax_rate*100 << "%" << endl;
    tax = cost_before_tax * tax_rate;
    cout << "Tax: $" << tax << endl;
    cost_with_tax = (1 + tax_rate)*cost_before_tax;
    cout << "Total cost with tax: $" << cost_with_tax << endl << endl;
    cout << "This cost estimate is valid for " << estimate_days << " days.";
    
    
    
    
    
 
    cout << endl;
    return 0;
}

