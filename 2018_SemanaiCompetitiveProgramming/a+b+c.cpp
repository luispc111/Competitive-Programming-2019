#include <iostream>
#include <string>
#include <stack>
#include <math.h>

using namespace std;

int main (){
	
	int iEvents;
	cin >> iEvents;
	
	int n1, d1, n2, d2, n3, d3;
	int totN = 0, totD = 0, TOTN=0, TOTD =0;
	string fraction;
	string testN, testD;
	int arrD[3], arrN[3];
	
	// Cada linea
	for (int y = 0; y < iEvents; y++){
		
		// Cada fracción
		for (int x = 0; x < 3; x++){
			
			fraction = "";
			cin >> fraction;
			testN = "";
			testD = "";
			totN = 0;
			totD = 0;
			
			int len = fraction.length();
			for (int i = 0; i < len; i++){
				if(fraction[0] != '/'){
					testN += fraction[0];
					fraction.erase(0,1);
				}
				else{
					len = 0; 
				}
			}
			fraction.erase(0,1);
			
			for (int i = 0; i < fraction.length(); i++){
				testD += fraction[0];
				fraction.erase(0,1);
			}
			
			// cambiar testN y testD a strings
			bool bNeg = 0;
			if (testN[0] == '-'){
				bNeg = 1;
			}
			if (bNeg == 1){
				for (int i = 1; i < testN.length(); i++){
					totN += (testN[i] -'0') * pow(10, testN.length()-1-i);	
				}
				totN *= -1;
			}
			else{
				for (int i = 0; i < testN.length(); i++){
					totN += (testN[i] -'0') * pow(10, testN.length()-1-i);	
				}
			}
			
			bNeg = 0;
			if (testD[0] == '-'){
				bNeg = 1;
			}
			if (bNeg == 1){
				for (int i = 1; i < testD.length(); i++){
					totD += (testD[i] -'0') * pow(10, testD.length()-1-i);	
				}
				totD *= -1;
			}
			else{
				for (int i = 0; i < testD.length(); i++){
					totD += (testD[i] -'0') * pow(10, testD.length()-1-i);	
				}
			}	
			
			arrN[x] = totN;
			arrD[x] = totD;
		}
		
		//cout << "MEGA TEST AHHH: ";
		//cout << arrN[0] << " " << arrN[1] << " " << arrN[2]<< " "  << arrD[0] << " "  << arrD[1] << " "  << arrD[2] << endl;
		
		
		TOTN = (arrN[0] * arrD[1] * arrD[2]) + (arrN[1] * arrD[0] * arrD[2]) + (arrN[2] * arrD[0] * arrD[1]);
		TOTD = (arrD[0] * arrD[1] * arrD[2]);

		
		// 2 1/2 1/3 1/4 3/2 1/2 2/2
		
		int x = TOTN;
		
		for (int i = 2; i <= x; i++){
			while (TOTN % i == 0 && TOTD % i == 0){
				TOTN = TOTN/i;
				TOTD = TOTD/i;
			}
		}
		if (TOTN < 0 && TOTD < 0){
			TOTN *= -1;
			TOTD *= -1;
		}
		
		cout << TOTN << "/" << TOTD << endl; 
	}
	
	
	
	return 0;
}
