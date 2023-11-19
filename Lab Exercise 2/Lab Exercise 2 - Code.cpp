#include<iostream>
using namespace std;

int main () 
{
	int integer, lastdigit, sum;
	
	cout << "Please enter an integer: ";
	cin >> integer;
	
	do
	{
		lastdigit = integer%10;
		sum = sum + lastdigit;
		cout << lastdigit;
		integer = integer/10;
		if(integer > 0)
		{
			cout << " + ";
		}
	} while (integer > 0);
		
	cout << " = " << sum << endl;
		
	if (sum%2==0)
	{
		if (sum%4==0)
		{
			cout << sum << " is an even number and a multiple of 4";
			if (sum%5==0)
			{
				cout << " and 5";
			}
		}
		else if (sum%5==0)
		{
			cout << sum << " is an even number and a multiple of 5";
		}
		else
		{
			cout << sum << " is an even number";
		}
	}
	else if (sum%5==0)
	{
		cout << sum << " is an odd number and a multiple of 5";
	}
	else
	{
		cout << sum << " is an odd number";
	}

	return 0;
}