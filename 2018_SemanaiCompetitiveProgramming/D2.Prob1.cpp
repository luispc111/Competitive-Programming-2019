#include <iostream>
using namespace std;

long long int2string(int num){
	
	
	
}







int main(){

	string num;
	cin >> num;
	
	if ((int)num % 8 == 0){
		cout << "YES" << endl;
		cout << num << endl;
	}
	
	
	
	
	
	
	
	else{
		bDivisible = false;
		int iTot = 0;
		string sSure = num;
		int iThis;
		
		for (int i = 0; i < num.length(); i++){
			num[num.length() - i - 1] = NULL;
			if ((int)num % 8 == 0){
				bDivisible = 1;
				iThis = (int)num;
				break;
			}
			num = sSure;
		}
		
		if(bDivisible){
			cout << "YES" << endl;
			cout << iThis << endl;
		}
		else{
			cout << "NO" << endl;
		}		
	}
	
	return 0;
}
