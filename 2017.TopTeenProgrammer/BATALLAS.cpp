#include <iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int M = 0;
	int iCurrent = N;
	
	if (N % 2 == 0)
	{
		cout << "-1" << endl;
	}
	else if (N >= 1)
	{
		cout << "-1" << endl;
	}
	else if (K >= 1000)
	{
		cout << "-1" << endl;
	}
	else
	{
		while(iCurrent != 0)
		{
			M += (iCurrent - 1);
			iCurrent--;
		}
		cout << M;
	}

	return 0;
}
