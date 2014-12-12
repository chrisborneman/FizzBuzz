//FizzBuzz - Chris Borneman
//Says Fizz on numbers divisible by 3, Buzz on numbers divisible by 5, and FizzBuzz on numbers divisible by both.
#include <iostream>
using namespace std;

int main(void) {
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
  return 0;
}