#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include "Pstring.h"

using namespace std;
//This was made by George Sprinkle
int main(){
  string input;
  Pstring Pal;
  cout << "This is a palindrome-testing program. Enter a string to test: ";
  cin >> input;
  Pal.setWord(input);

  cout << Pal.getWord() << " is ";
  if(Pal.isPalindrome()){
    cout << "a palindrome";
  }
  else
  cout << "not a palindrome";

}
