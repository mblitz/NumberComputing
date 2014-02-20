#include <iostream>
#include <cmath>


using namespace std;

bool isPrime(int num);

int main()
{
	__int64 sum = 0;
	int number = 2000000;
	for (int i = 1; i < number; i++)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	cout << sum << endl;
	system("Pause");
	return 0;
}
bool isPrime(int num)
{
	int divisor = 0;
	int max_divisor = int(pow(double(num), 0.5));
	if (num < 2)
	{
		return false;
	}
	else if ((num == 2) || (num == 3) || (num == 5) || (num == 7) || (num == 11) || (num == 13))
	{
		return true;
	}
	else if ((num % 2 == 0) || (num % 3 == 0))
	{
		return false;
	}
	divisor = 5;
	while (divisor <= max_divisor)
	{
		if ((num % divisor == 0) || (num % (divisor + 2) == 0))
		{
			return false;
		}
		divisor += 6;
	}
	return true;
}