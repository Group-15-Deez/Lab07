#include <iostream>
#include "Pstring.h"
#include <string>
//This was made by George Sprinkle

Pstring::Pstring(){
  word = "";
}

Pstring::Pstring(std::string w){
  word = w;
}

void Pstring::setWord(std::string w){
  word = w;
}

std::string Pstring::getWord(){
  return word;
}

bool Pstring::isPalindrome(){
  int size, upper, lower;
  bool test = true;
  size = word.size();
  if((size%2)==0){
    lower = size / 2;
    upper = lower +1;
  }
  else{
    lower = ((size+1)/2)-1;
    upper = ((size+1)/2)+1;
  }

  if(size == 1){
    upper = 1;
    lower = 1;
  }
  while(upper<=size){
    if(!(word[lower-1]==word[upper-1]))
    test = false;
    lower = lower - 1;
    upper = upper + 1;
  }

  return test;
}
