#include <string>

#include <cctype>

#include <cstdlib>

using namespace std;

string encryption(const string & text, int shift) {

  string result = "";

  for (int i = 0; i < text.length(); i++) {

    if (isupper(text[i])) {

      result += char(int(text[i] + shift - 65) % 26 + 65);

    } else if (islower(text[i])) {

      result += char(int(text[i] + shift - 97) % 26 + 97);

    } else {

      result += text[i];

    }

  }

  return result;

}

int keyToShift(const string & key) {

  if (key.find_first_not_of("0123456789") == string::npos) {

    return atoi(key.c_str());

  }

  int shift = 0;

  for (char const & c: key) {
    if (isupper(c))

      shift += c - 'A';

    else if (islower(c))

      shift += c - 'a';

  }

  return shift;

}
