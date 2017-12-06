/*
Linden Stirk
Lab1_Part3.cpp
*/

#include <iostream>
#include <queue>
using namespace std;



int main()
{
	float balance = 0.0;

	queue<float> transactions;

	transactions.push(10.51);
	transactions.push(120.05);
	transactions.push(-32.08);
	transactions.push(18.19);
	transactions.push(-2.08);
	transactions.push(5.09);

	while (!transactions.empty())
	{
		cout << transactions.front() << " pushed to account" << endl;
		balance += transactions.front();
		transactions.pop();
	}

	cout << endl << "Final balance: $" << balance << endl;


	return 0;
}