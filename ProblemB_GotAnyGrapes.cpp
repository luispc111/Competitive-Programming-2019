// PROBLEM
// http://codeforces.com/problemset/problem/1114/A


//	A	only green
//	D	only green and purple
//	M	green, purple or black

#include <iostream>
using namespace std; 

int main(){
	
	long long int A, M, D, g, p, b, aux;
	// how many grapes they want to eat
	cin >> A >> D >> M;
	// grapes in the box
	cin >> g >> p >> b;
	
	// clear Andrew
	if(g >= A){
		g -= A;
		A = 0;	
	}
	else{
		cout << "NO" << endl;
		return 0;
	}
	
	// clear Dmitry
	if(g+p >= D){
		if(D < g){
			g -= D;
			D = 0;
		}
		else{
			D -= g;
			g = 0;
		}
		
		p -= D;
		D = 0;
	}
	else{
		cout << "NO" << endl;
		return 0;
	}
	
	// clear Michael
	if(g+p+b >= M){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
		return 0;
	}
	
	return 0;
}

