// PROBLEM
// http://codeforces.com/problemset/problem/837/A

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std; 

int main(){
	
	string text="", auxstr;
	int textSize, max=0, aux=0;
	cin >> textSize;
	
	while(aux < textSize){
		cin >> auxstr;
		text += auxstr;
		text += " ";
		aux = text.size();
	}
//	getline (cin, text);
	
	aux=0;
	for(int i = 0; i < textSize; i++){
		
		if(text[i] == ' '){
			aux=0;	
		}
		else if(isupper(text[i])){
			aux++;
		}

		if(aux>max){
			max=aux;
		}
	}
	
	cout << max << endl;

	return 0;
}

