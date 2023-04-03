#ifndef ENCRYPTABLE_STRING_H
#define ENCRYPTABLE_STRING_H

#include <string>

class EncryptableString {
private:
    std::string temp;
public:
    EncryptableString(std::string temp);
    std::string encrypt();
};

#endif 
