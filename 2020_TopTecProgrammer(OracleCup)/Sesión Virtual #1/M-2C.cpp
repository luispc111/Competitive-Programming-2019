#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int cases;
	cin >> cases;
	
	string input, pattern;
	vector<int> v;
	int index=0;
	bool check=true;
	int amountOfChars;
	
	// cases
	for(int i = 0; i < cases; i++){
		v = {};
		cin >> input >> pattern;
		
		if(input.length() >= pattern.length()){
			
			// start from every position in the input, not including last chars bc not needed
			for(int j = 0; j <= input.length() - pattern.length(); j++){
				
				// if there's a connection with the first position of the pattern
				if(input[j] == pattern[0]){
					amountOfChars=0;
					check=true;
					index=0;
					
					// compate with pattern
					for(int k = j; index < pattern.length() && k < input.length() && check; k++){
						if(input[k] != pattern[index]){
							check=false;
						}
						index++;
						amountOfChars++;
					}
					if(check && amountOfChars == pattern.length()){
						v.push_back(j);
					}	
				}
			}
		}
		
		
		if(v.size() > 0){
			cout << v.size() << endl;
			for(int j = 0; j < v.size(); j++){
				cout << v[j]+1;
				if(j != v.size()-1){
					cout << " ";
				}
			}
			cout << endl;
		}
		else{
			cout << "Not Found" << endl;
		}
		if(i != cases-1){
			cout << endl;
		}
	}
	
	return 0;
}
