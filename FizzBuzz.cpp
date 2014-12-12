//FizzBuzz - Chris Borneman
//Says Fizz on numbers divisible by 3, Buzz on numbers divisible by 5, and FizzBuzz on numbers divisible by both.
#include <iostream>

int main(void)
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}