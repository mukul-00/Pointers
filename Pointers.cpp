#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    int num = 5;
    cout << "Value of num : " << num << endl;

    // Address of operator - &
    cout << "Address of num : " << &num << endl;
    cout << "\n";
    
    // pointer (to store the address of num)
    int *ptr = &num; 

    cout << "value is : " << *ptr << endl; // (with *ptr it will give value ex-5)
    cout << "Address is : " << ptr << endl; // (without * on ptr it will give adress of num)

    cout << "\n";
    double d = 4.2;
    double *p2 = &d;  
    cout << "value is : " << *p2 << endl; 
    cout << "Address is : " << p2 << endl;
    cout << "\n";

    // for size 
    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer to int is " << sizeof(ptr) << endl;
    cout << "size of pointer to double is " << sizeof(p2) << endl;

    return 0;
} */

//-----------------------------------------------------

/*
int main () {
    int num = 5;
    
    // with integer only
    int a = num ; 
    cout << "before : " << num << endl;
    a++;
    cout << "after  : " << num << endl;
    cout << "\n";

    // with pointer
    int *p = &num;
    cout << "before : " << *p << endl;
    (*p)++;
    cout << "after  : " << *p << endl;
    cout << "\n";

    // copying a pointer
    int *q = p;
    cout << "Address of p and q is : "<< p << " - " << q << endl;
    cout << "value of p and q is   : " << *p << " - " << *q << endl;

    int **r = &p;
    cout << **r << endl; // *(*r) = *(address of num) = value of num
} */

//------------------------------------------------

/*
int main() {
    int num = 5;
    int *p = &num;
    int *q = p;

    cout << "p and q address : " << p << " - " << q << endl;
    cout << "p and q value   : " << *p << " - " << *q << endl;

    (*q)++;      // change using q
    cout << "\nAfter (*q)++ → num = " << num << endl;

    *p = 100;    // change using p
    cout << "After *p = 100 → num = " << num << endl;

    int x = 50;
    q = &x;
    cout << "\nq now points to x : " << *q << endl;
    cout << "p still points to num : " << *p << endl;

    return 0;
}
*/



/*
// important concept 
int main (){
    int i = 3;
    int *t = &i;

    *t = *t + 1;
    cout << *t << endl; // value icrease by 1

    cout << "Before t : " << t << endl;
    t = t + 1; // address of i is increase by 4  (since one digit contain 4 bytes)
    cout << "After t  : " << t << endl;
}
*/
