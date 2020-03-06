// PROBLEM
// http://codeforces.com/problemset/problem/1080/A

#include <iostream>
using namespace std; 

int main(){
	
	long long int invitados, sheets, total=0;
	cin >> invitados >> sheets;
	
	int red = 2*invitados/sheets;
	int blue = 5*invitados/sheets;
	int green = 8*invitados/sheets;
	
	total = red+blue+green;
	
	if(2*invitados % sheets != 0){
		total++;
	}
	if(5*invitados % sheets != 0){
		total++;
	}
	if(8*invitados % sheets != 0){
		total++;
	}
	
	cout << total << endl;
	return 0;
}

