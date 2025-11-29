#include <bits/stdc++.h>
using namespace std;

/* JUST AN EXAMPLE
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}
*/


/*
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    p = p + 1;
    cout << "inside the update function : " << p << endl; // prints the updated p 
}

int main(){
    int value = 5;
    int *p = &value;

    //print(p);


    cout << "before : " << p << "\n";
    update(p);
    cout << "After  : " << p << "\n";

    return 0;
}
*/


/*
void print(int *p){
    cout << *p << "\n";
}

void update(int *p){
    *p = *p + 1; // this will update the value
}

int main(){
    int value = 5;
    int *p = &value;

    //print(p);


    cout << "before : " << *p << "\n";
    update(p);
    cout << "After  : " << *p << "\n";

    return 0;
}
*/


/*
int getSum(int *arr, int n) {  
    // NOTE: int *arr is the same as writing arr[] in function parameters.
    // Inside a function, arrays always decay to pointers.

    // cout << sizeof(arr) << endl;
    // Size will be 8 bytes because 'arr' is actually a pointer here.

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];  
        // arr[i] is the same as *(arr + i)
        // i[arr] is also valid (C/C++ trick)
    }

    return sum;
}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6};

    cout << "Sum of first 5 elements: " 
         << getSum(arr, 5) << endl;
    // arr passes the address of the first element (arr + 0)

    cout << "Sum of first 5 elements: " << getSum(arr, 5) << endl;

    cout << "Sum starting from index 3: " << getSum(arr + 3, 5) << endl;

    // arr + 3 → pointer moves to the 4th element
    // New starting array becomes: {4, 5, 6, ?, ?}
    // IMPORTANT:
    // (arr + 3) means NEW BASE ADDRESS = &arr[3]
    // *(arr + 3) gives arr[3], but (arr + 3) itself is a pointer to that element.

    // This is different from:
    // (*arr + 1) — which adds 1 to the VALUE of arr[0], not the address.

    return 0;
}
*/

