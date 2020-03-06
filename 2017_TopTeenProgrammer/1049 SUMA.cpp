#include <iostream>
using namespace std;

int GettingN()
{
	int iN;
	cin >> iN;
	return iN;
}


long Testing(int iN)
{
	long iR = 0;
	if (iN < 0)
	{
		for (int i = iN; i <= 1; i++)
		{
			iR += i;
		}
	}
	else
	{
		for (int i = 1; i <= iN; i++)
		{
			iR += i;
		}
	}
	
	return iR;
}

int main()
{
	cout << Testing(GettingN()) ; 
	return 0;
} 

