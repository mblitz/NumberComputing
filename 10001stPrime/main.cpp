#include <iostream>
using namespace std;


bool isPrime(int num)
{

	for(int i = 2; i*i <= num; i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int primeNumber = 0;
	int i = 1;

	while(primeNumber < 10002)
	{
		if(isPrime(i) == true)
		{
			primeNumber += 1;
			if(primeNumber == 10001)
			{
				cout << i << endl;
			}
		}
		i++;
	}
	system("Pause");
	return 0;
}