#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; // char arrays end with '\0', so size = 6

    // ----- Printing array -----
    cout << "Address stored in arr (same as &arr[0]) : " << arr << endl;

    // ----- Printing char array -----
    cout << "Value of char array ch (prints full string) : " << ch << endl;
    cout << "\n";

    // ----- Pointer to first char -----
    char *c = &ch[0];
    cout << "Pointer c pointing to ch[0] prints string : " << c << endl;
    cout << "\n";

    // ----- Pointer to single char -----
    char temp = 'z';
    char *p = &temp;

    // ⚠️ IMPORTANT: Printing p prints until it finds '\0'
    // But temp = 'z' has NO null char, so output will be garbage after 'z'
    cout << "Pointer p pointing to single char temp : " << p << endl;

    return 0;
}
