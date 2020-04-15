#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool checkDivision(string sNumber){
	
   unsigned long long int number = stoi(sNumber);
   
	return(number % 7 == 0 || number % 4 == 0 || number % 44 == 0 || number % 47 == 0 || number % 74 == 0 || number % 77 == 0 
	|| number % 444 == 0 || number % 447 == 0 || number % 474 == 0 || number % 477 == 0 
	|| number % 744 == 0 || number % 747 == 0 || number % 774 == 0 || number % 777 == 0);
}


int main() {
	
	string sNumber;
	cin >> sNumber;
	
	for(int i = 0; i < sNumber.length(); i++){
		if(sNumber[i] != '4' && sNumber[i] != '7'){
			if(checkDivision(sNumber)){
				cout << "YES" << endl;
			}	
			else{
				cout << "NO" << endl;
			}
			return 0;
		}
	}
	
	cout << "YES" << endl;
	return 0;
}
