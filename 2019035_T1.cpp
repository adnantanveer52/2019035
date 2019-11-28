#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int add = 0;
	int arr[5] = { 2,3,5,9,10 };
	ofstream sum;
	sum.open("Sum.txt", ios::out);
	if ("Sum.txt")
	{
		for (int i = 0; i < 5; i++)
		{
			sum << arr[i] << " ";
		}
			for (int i = 0; i < 5; i++)
			{
				add += arr[i];
			}
			sum << "\nSum: " << add;
		sum.close();
	}
	string line;
	ifstream sum1;
	sum1.open("Sum.txt");
	if ("Sum.txt")
	{
		while (!sum1.eof())
		{
			sum1 >> line;
			cout << line << " ";
		}
	}
}

