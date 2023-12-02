#include <iostream>
#include <vector>

using namespace std;

int change_int (int a) {
    a++;
    return a;
    }

int main() {
   
//    int a = 10;
//    
//    int *int_ptr /*{nullptr}*/;
//    int_ptr = new int;
//    *int_ptr = 45;
////    int_ptr = &a;
//    
//   // a = change_int (*int_ptr);
//    
//    cout << "The value of *int_ptr in the end of the program is: " << *int_ptr << endl; 
//    cout << "The value of 'int_ptr' is: " << int_ptr << endl;
//    cout << "The value of &int_ptr is: " << &int_ptr << endl;
//    cout << "The size of *int_ptr is: " << sizeof *int_ptr << " bytes" << endl;
//    cout << "The size of int_ptr is: " << sizeof int_ptr << " bytes" << endl;
//    void *new_ptr;
//    new_ptr = &a;
//   // *new_ptr = 10;
//    cout << "\n\nint a = 10" << endl;
//    cout << "new_ptr declared as void and uninitialized" << endl;
//    cout << "new_ptr assigned to &a" << endl << endl;
//    cout << "The value of a is: " << a << endl;
//    cout << "The size of a is: " << sizeof a << " bytes" << endl;
//    cout << "The value of &a is: " << &a << endl;
//    cout << "The value of new_ptr is: " << new_ptr << endl;
//    cout << "The value of &new_ptr is: " << &new_ptr << endl << endl;
//
//
//    vector <int> *vec_int_ptr {nullptr};
//    vec_int_ptr = new vector<int> {};
//    
//    cout << "The value of vec_int_ptr is: " << vec_int_ptr << endl;
//    cout << "The value of &vec_int_ptr is: " << &vec_int_ptr << endl << endl;
//    cout << "The size of vec_int_ptr is: " << sizeof vec_int_ptr << endl;
//    cout << "The size of *vec_int_ptr is: " << sizeof *vec_int_ptr << endl;
//  
//  for (int i = 0; i < 5; i++) {
//      (*vec_int_ptr).push_back(i);
//      cout << "\n\n ------------------\nThe value of vec_int_ptr is: " << vec_int_ptr << endl;
//      cout << "The value of &vec_int_ptr is: " << &vec_int_ptr << endl;
//      cout << "The size of vec_int_ptr is: " << sizeof vec_int_ptr << endl;
//      cout << "The size of *vec_int_ptr is: " << sizeof *vec_int_ptr << endl;
//      cout << "The amount of elements in the vector: " << (*vec_int_ptr).size() << endl;
//  }
  
  
  //  cout << "The value of *new_ptr is: " << *new_ptr << endl;
    
//    long *new_new_ptr {nullptr};
//    //long adress = new_new_ptr;
//    new_new_ptr = &0x600002afc020;
//    
//    cout << "The value of *new_new_ptr is " << *new_new_ptr << endl;
//    cout << "\nThe value of 'new_new_ptr' is: " << new_new_ptr << endl;
//    cout << "The value of &new_new_ptr is: " << &new_new_ptr << endl;


//int arr [] {150, 28, 33};
//
//int *arr_ptr0 {nullptr};
//int *arr_ptr1 {nullptr};
//int *arr_ptr2 {nullptr};
//
//arr_ptr0 = &arr[0];
//arr_ptr1 = &arr[1];
//arr_ptr2 = &arr[2];
//
//cout << "arr_ptr0 points to: " << arr_ptr0 << endl;
//cout << "*arr_ptr0 contains: " << *arr_ptr0 << endl;
//cout << "arr_ptr1 points to: " << arr_ptr1 << endl;
//cout << "*arr_ptr1 contains: " << *arr_ptr1 << endl;
//cout << "arr_ptr2 points to: " << arr_ptr2 << endl;
//cout << "*arr_ptr2 contains: " << *arr_ptr2 << endl;

int *crazy_ptr = new int;
*crazy_ptr = 150;
for (int i = 0; i<10; i++) {
    cout << "The address for this cycle is: " << crazy_ptr + i*1'000'000 << " and the value is: " << *(crazy_ptr + i*1'000'000) << endl;
    
    }
    
    return 0;
}
