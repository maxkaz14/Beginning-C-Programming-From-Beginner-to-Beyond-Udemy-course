#include <iostream>

using namespace std;

void int_array_pushback (int *array, int add_value);

int main() {
    
   int arr[] {100, 99, 98, 96};
   
 
   cout<< "Your initial array contains:" << endl; 
   for (int i = 0; i <  sizeof arr/sizeof (int); i++) {
       cout << "-" << arr[i] << endl;
   }
   
   int add_value {};
   cout << "What integer do you want to add: ";
   cin >> add_value;
    
    int_array_pushback(arr, add_value);
    
    for (int i = 0; i< sizeof arr/sizeof (int); i++) {
       cout << "-" << arr[i] << endl;
   }
    
    return 0;

}

void int_array_pushback (int *array, int add_value) {
    size_t size = (sizeof array)/sizeof (int);
    int *new_arr_ptr {nullptr}; 
    new_arr_ptr = new int[size+1];
    for (int i = 0; i < size; i++) {
        new_arr_ptr[i] = array[i];
    }
    new_arr_ptr[size] = add_value;
    int *temp_arr = array;
    array = new_arr_ptr;
    delete temp_arr;
    }
