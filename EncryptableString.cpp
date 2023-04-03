#include "EncryptableString.h"
#include <iostream>
EncryptableString :: EncryptableString(std::string temp)
{this->temp = temp;}

std::string EncryptableString :: encrypt()
{
    std::string encrypted;
    for(int i = 0; i < int(temp.length()); i++)
    {
        if(temp[i] == 'Z')
        {
            temp[i] = '@';
        }
        if(temp[i] == 'z')
        {
            temp[i] = '`';
        }
        
        char c = temp[i] + 1;
        
        encrypted += c;
    }
    return encrypted;
}
