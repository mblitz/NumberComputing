#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int sumSquares = 0;

	for(int i = 0; i < 101; i++)
	{
		if(i == 100)
		{
			cout << i << endl;
		}
		sum += i;
		sumSquares += i*i;
	}
	sum = sum * sum;

	cout << sum - sumSquares << endl;

	system("Pause");
	return 0;
}