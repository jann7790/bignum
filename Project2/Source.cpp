#include "calculator.h"
#include "input.h"
#include "type.h"
#include <string>
#include <iostream>

using namespace variable;
using namespace std;
int main()
{
	//cout << "input a, b:";
	//cin >> num1;
	//cin >> num2;
	Integer a ;
	a = "50.5";
	Decimal b;
	b = "60";
	cout << (a/b);
	//cout << (bignum(2) ^ bignum(-2)) << endl;
	//cout << (num1 ^ num2) << endl;

	//cout << "num1 >= num2 = " << (num1 >= num2) << endl;
	//cout << "num1 > num2 = " << (num1 > num2) << endl;
	//cout << "num1 < num2 = " << (num1 < num2) << endl;
	//cout << "num1 == num2 = " << (num1 == num2) << endl;
	//cout << "num1 + num2 = " << num1 + num2 << endl;
	//cout << "num1 - num2 = " << num1 - num2 << endl;
	//cout << "num1 * num2 = " << num1 * num2 << endl;
	//cout << "num1 / num2 = " << num1 / num2 << endl;
	//cout << "num1! = " << (!num1) << endl;
	//cout << "num1 ^ num2 = " << (num1 ^ num2) << endl;
	calculator ccc;
	//cin.ignore(123123123123, '\n');
	//cout << "input calculation:";
	while (1)
	{
		input(ccc);
	}
	////cout << ccc.to_be_cal;
	//cout << ccc.fuction();
}