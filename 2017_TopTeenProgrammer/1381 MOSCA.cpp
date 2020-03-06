#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int iTestCases;
	cin >> iTestCases;
	int iCurrentCases = 0;
	

   
	while(iTestCases > iCurrentCases)
	{	
		float fDistance, fVelMosca, fVel1, fVel2, fTime;
		
		cin >> fDistance >> fVel1 >> fVel2 >> fVelMosca;
	
		fTime = (fDistance) / (fVel1 + fVel2);
		
		cout << setprecision(2) << fixed << fVelMosca * fTime << endl;
		
		iCurrentCases++;
	}
	return 0;
}
