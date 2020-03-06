#include <iostream>

using namespace std;

int main (){
	int n,m;
	cin >> n >> m;
	
	if (n == m){
		cout << "0" << endl;
	}
	else if (n*2 == m || n-1 == m){
		cout << "1" << endl;
	}
	else if (n > m){
		int iCount = 0;
		for (int i = 0; i < (n-m); i++){
			iCount++;
		}
		cout << iCount << endl;
	}
	
	
	
	
	
	
	else if (n<m){
		
		int iCurr = n, iCurr2 = n, iCount = 0, iCount2 = 0;
		
		while (iCurr <= m){
			iCurr *= 2;
			iCount++;
		}
		if (iCurr != m){
			int x = iCurr-m;
			for (int i = 0; i < x; i++){
				iCurr--;
				iCount++;
			}
		}
		
		while (iCurr2 <= (m/2)){
			iCurr2--;
			iCount2++;
		}
		iCurr2 *= 2;
		iCount2++;
		
		
		if (iCurr != m){
			int x = iCurr2-m;
			for (int i = 0; i < x; i++){
				iCurr2--;
				iCount2++;
			}
		}
		
		if (iCurr >= iCurr2){
			cout << iCurr << endl;
		}
		else{
			cout << iCurr2 << endl;
		}
	}
	
	
	
	return 0;
}
