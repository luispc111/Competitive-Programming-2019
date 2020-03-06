#include <iostream>

using namespace std;

int main()
{
	int i1, i2, i3, i4, i5, i6, i7, i8;
	cin >> i1;
	cin >> i2;
	cin >> i3;
	cin >> i4;
	cin >> i5;
	cin >> i6;
	cin >> i7;
	cin >> i8;
	
	int iRes = i1 + i2 + i3 + i4;
	if (iRes < (i2 + i3 + i4 + i5))
	{
		iRes = i2 + i3 + i4 + i5;
	}
	if (iRes < (i3 + i4 + i5 + i6))
	{
		iRes = i3 + i4 + i5 + i6;
	}	
	if (iRes < (i4 + i5 + i6 + i7))
	{
		iRes = i4 + i5 + i6 + i7;
	}
	
	if (iRes < (i5 + i6 + i7 + i8))
	{
		iRes = i5 + i6 + i7 + i8;
	}
	if (iRes < (i6 + i7 + i8 + i1))
	{
		iRes = i6 + i7 + i8 + i1;
	}	
	if (iRes < (i7 + i8 + i1 + i2))
	{
		iRes = i7 + i8 + i1 + i2;
	}
	if (iRes < (i8 + i1 + i2 + i3))
	{
		iRes = i8 + i1 + i2 + i3;
	}
	cout << iRes;
	return 0;
}

