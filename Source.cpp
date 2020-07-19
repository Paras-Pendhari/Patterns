#include<iostream>

using namespace std;

int main() 
{
	
	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
			cout << " " << " ";
		for(int k = 5; k >= i; k--)
			cout << "*" << " ";
		for (int k = 5; k >= i; k--)
			cout << "*" << " ";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << " " << " ";
		for (int k = i; k < 5; k++)
			cout << "*" << " ";
		for (int k = i; k < 5; k++)
			cout << "*" << " ";
		cout << endl;
	}
	return 0;
}