#include <iostream>

using namespace std;

int main() {
	
	int moves;
	string commands;
	cin >> moves;
	cin >> commands;
	
	int L=0, R=0;
	
	for(int i = 0; i < moves; i++){
		if(commands[i] == 'L'){
			L++;
		}
		else{
			R++;
		}
	}
	
	cout << L+R+1 << endl;
	
	return 0;
}
