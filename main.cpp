#include<iostream>

#include <string>

#include "ceaser.h"

using namespace std;

int main() {

  string text, key;
  cout << "Enter a text to encrypt";
  getline(cin, text);

  cout << "Enter a shift:";
  cin >> key;

  int shift = keyToShift(key);
  string encryptedText = encryption(text, shift);
  cout << "Encrypted Text: " << encryptedText << endl;

}
