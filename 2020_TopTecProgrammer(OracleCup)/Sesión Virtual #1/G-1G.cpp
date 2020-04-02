#include <iostream>
#include <stack>

using namespace std;

bool isSign (char a){
	if(a == '+' || a == '-' || a == '*' || a == '/' || a == '^'){
		return true;
	}
	return false;
}

int main() {
	int cases;
	cin >> cases;
	stack<int> s1;
	string input;
	int start, end;
	char sign;
	string firstPart, secondPart;
	bool inSecondPart;
	int check;
	
	for(int y = 0; y < cases; y++){
		cin >> input;
		
		for(int i = 0; i < input.length(); i++){
			firstPart="";
			string secondPart="";
			check = 0;
			inSecondPart = false;
			
			if(input[i] == '('){
				s1.push(i);
			}
			else if(input[i] == ')'){
				start = s1.top();
				end = i;
				s1.pop();
				
				for(int j = start+1; j < end; j++){
					if(input[j] == '('){
						if(!inSecondPart){
							firstPart += input[j];
						}
						else{
							secondPart += input[j];
						}
						check++;
					}
					else if(input[j] == ')'){
						if(!inSecondPart){
							firstPart += input[j];
						}
						else{
							secondPart += input[j];
						}
						check--;
					}
					else if(isSign(input[j]) && check == 0){
						sign = input[j];
						inSecondPart=true;
					}
					else if(inSecondPart == false){
						firstPart += input[j];
					}
					else{
						secondPart += input[j];
					}
				}
				
				firstPart += secondPart;
				firstPart += sign;
				int x = 0;
				for(int j = start+1; j < end; j++){
					input[j] = firstPart[x];
					x++;
				}
			}
		}
		
		string resultado = "";
		for(int i = 0; i < input.length(); i++){
			if(input[i] != '(' && input[i] != ')'){
				resultado += input[i];
			}
		}
		
		cout << resultado << endl;
	}
	
	return 0;
}
