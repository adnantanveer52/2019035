#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "Writing from the File" << endl;
	ofstream info;
	info.open("INFO.txt");
	if ("INFO.txt")
	{
		info << "Name: Adnan Tanveer" << endl
			<< "Age: 16";
	}
	info.close();
	string bio;
	ifstream infoo;
	infoo.open("INFO.txt");
	if ("INFO.txt")
	{
		while (!infoo.eof())
		{
			infoo >> bio;
			cout << bio
				<< endl;
		}
	}

}

