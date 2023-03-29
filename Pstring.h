#ifndef PSTRING_H_
#define PSTRING_H_
#include <string>
//This was made by George Sprinkle

class Pstring
{
    private:
        std::string word;


    public:
      Pstring();
      Pstring(std::string);
    // mutators
        void setWord(std::string);
    // accessors
        std::string getWord();
        bool isPalindrome();
};
#endif
