#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;
/*int main()   vector的声明以及调用
{
	vector<int> pell(18);
	pell[0] = 1;
	pell[1] = 1;
	for (int i = 2; i < 18; i++)
	{
		pell[i] = pell[i - 1] + pell[i - 2];
	}
	for (int j = 0; j < 18; j++)
	{
		cout << pell[j] << ' ' << '\n';

	}
	system("pause");
	return 0;
}
*/
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	vector<int> vec(arr, arr + 20);
	for (int j = 0; j < 18; j++)
	{
		cout << vec[j] << ' ';
	}
	system("pause");
	return 0;
}