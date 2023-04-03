//Aidan Militzer
#include <iostream>
#include "EncryptableString.h"
#include <string>
using namespace std;

int main() {
    string temp;
    cout << "This is an Encryption program. Enter a string to encrypt: ";
    cin >> temp;

    EncryptableString encryptedString(temp);
    string encrypted = encryptedString.encrypt();

    cout << "Here is the encrypted string: " << encrypted << endl;

    return 0;
}
