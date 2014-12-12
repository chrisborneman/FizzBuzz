//FizzBuzz - Chris Borneman
//Says Fizz on numbers divisible by 3, Buzz on numbers divisible by 5, and FizzBuzz on numbers divisible by both.
#include <iostream>
#include <string>
using namespace std;

std::string* fizz(std::string param) {
  std::string buzz = param;
  return &buzz;
}

int main(void) {
  std::string* fzbz = fizz("sip");
  for (int i = 1; i < 101; i++) {
    if (i % 3 == 0) {
      cout << "Fizz";
    }
    if (i % 5 == 0) {
      cout << "Buzz";
    }
    if (i % 5 != 0 && i % 3 != 0) {
      cout << i;
    }
    cout << endl;
  }
  cout << *fzbz << endl;
  return 0;
}
