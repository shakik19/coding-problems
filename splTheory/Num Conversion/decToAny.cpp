#include "bits/stdc++.h"
using namespace std;

char displayOptions(void) {
  cout << "Press 'B' to convert to Binary Number." << endl;
  cout << "Press 'O' to convert to Octal Number." << endl;
  cout << "Press 'H' to convert to HexaDecimal Number." << endl;
  cout << "Press 'Q' to exit." << endl;
  char c;
  cin >> c;
  return c;
}

bool decCheck(string s) {
  int l = s.length();
  for (int i = 0; i < l; i++) {
    if (isdigit(s[i]) == 0) return false;
  }
  return true;
}

int decToBin(int n, int base) {}
int main() {
  do {
    cout << "Enter a positive* Decimal* Number: ";
    string num;
    cin >> num;
    if (decCheck(num) == false) continue;
    int validDecNum = stoi(num);
    displayOptions();
    char key;
    cin >> key;
    if (key == 'Q' || key == 'q') {
      return 0;
    } else if (key == 'B' || key == 'b') {
      decToBin(validDecNum, 2);
    } else {
      cout << "An error occured, sorry.\n";
    }
    // else if (key == 'O' || key == 'o')
    // else if (key == 'h' || key == 'H')
  } while (1);
}