#include <iostream>

using namespace std;

int main (){

    int a = 8;

    int *p = &a;

    int *pp = &*p;




    cout << "value of a is equal to: " << *p << " The address of variable a is equal to: " << p << endl;
    cout << "The value of the pointer is equal to: " << &p << endl;

    
    cout << "value of a is equal to: " << *&a << " The address of variable a is equal to: " << &a << endl;
    cout << "The value of the pointer is equal to: " << &*pp << endl;




    return 0;
}

// Exercise 2.

// Edit the code from the first exercise. Create another pointer "pp" containing the address 
// of the pointer variable "p". Print out in the console the value and address of the variable
// "a" using variable "a" and pointers "p" and "pp". Furthermore, print out the value and address
// of the pointer "P" using pointers "p" and "pp".


// eg.
// Output:
// Value of the variable a is equal to: 5
// The address of the variable a is equal to: 0x69fef8
// The value stored in the pointer p is equal to: 0x69fef8
// To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = 5

// Pointer p has its own address which is: 0x69fef4
// The value stored in the pointer pp is equal to: 0x69fef4
// To get the value of the pointer p using pointer pp one has to point to the address in the pointer pp, *pp = 0x69fef8
// To get the value of he variable a using pointer pp one has to point to the address in the pointer pp and p, **pp = 5
