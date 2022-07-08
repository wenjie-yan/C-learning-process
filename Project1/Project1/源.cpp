#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{


	string name;
	cout << "please enter your name:";
	cin >> name;
	cout << "\n"
		<< "hello,"
		<< name
		<< "goodbye";
	system("pause");
	return 0;
}