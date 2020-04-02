#include <iostream>
#include <vector>

using namespace std;

int main() {
	int first, second;
	cin >> first >> second;
	
	string help = "";
	
	vector<string> v1;
	vector<string> v2;
	
	for(int i = 0; i < first; i++){
		cin >> help;
		v1.insert(v1.end(), help);
	}
	
	for(int i = 0; i < second; i++){
		cin >> help;
		v2.insert(v2.end(), help);
	}	
	
	int cases, pos;
	cin >> cases;
	help="";
	for(int i = 0; i < cases; i++){
		cin >> pos;
		if(pos <= first){
			help += v1[pos-1];
		}
		else{
			help += v1[((pos-1)%first)];
		}
		
		if(pos <= second){
			help += v2[pos-1];
		}
		else{
			help += v2[((pos-1)%second)];
		}
		
		cout << help << endl;
		help = "";
	}
	
	return 0;
}
