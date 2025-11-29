// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {


// ------------------------------------------------------------
// TOPIC 1: Basic Array & Pointer Relationship
// ------------------------------------------------------------
/*
    cout << "Address of first memory block   : " << arr << endl; // ex - 100
    cout << "Value of first element in array : " << arr[0] << endl; 
    cout << "Address of first memory block   : " << &arr[0] << endl; // same as before 100

    cout << "Value of first element in array : " << *arr << endl; // 2
    cout << "1st element value After +1      : " << *arr + 1 << endl; // 3
    cout << "Value of 2nd element in array.  : " << *(arr + 1) << endl; // 5

    cout << "Value of 3rd element in array   : " << arr[2] << endl; // value = 8
    cout << "Value of 3rd element in array   : " << *(arr+2) << endl; // same as prev.

    int i = 3;
    cout << i[arr] << endl;
*/


// ------------------------------------------------------------
// TOPIC 2: sizeof() → Array vs Pointer
// ------------------------------------------------------------
/*
int temp[10] = {23, 24, 26};

cout << "Size of the entire array                : " << sizeof(temp) << " bytes" << endl;
cout << "Size of the first element               : " << sizeof(*temp) << " bytes" << endl;
cout << "Size of the address of the first element: " << sizeof(&temp[0]) << " bytes" << endl;

cout << "\n";

int *ptr = &temp[0];

cout << "Size of the pointer variable 'ptr'      : " << sizeof(ptr) << " bytes" << endl;
cout << "Size of the value pointed by ptr        : " << sizeof(*ptr) << " bytes" << endl;
cout << "Size of the address of pointer variable : " << sizeof(&ptr) << " bytes" << endl;
*/


// ------------------------------------------------------------
// TOPIC 3: &a vs &a[0] vs a (Array Name Decay)
// ------------------------------------------------------------
/*
int a[20] = {2, 5, 8, 10};

cout << "Address of a[0]            : " << &a[0] << endl;
cout << "Address of the whole array : " << &a << endl;
cout << "Value of 'a' (decays to &a[0]) : " << a << endl;

cout << "\n";

int *ptr = &a[0];
cout << "Value stored in ptr (address of a[0]) : " << ptr << endl;
cout << "Value at *ptr                  : " << *ptr << endl;
cout << "Address of ptr                 : " << &ptr << endl;
*/


// ------------------------------------------------------------
// TOPIC 4: Why Arrays Can't Be Assigned (arr = arr + 1 Error)
// ------------------------------------------------------------
/*
int arr[10];

int *ptr = &arr[0];
cout << "Before : " << ptr << endl;
ptr = ptr + 1;
cout << "After  : " << ptr << endl;
*/


// return 0;
// }
