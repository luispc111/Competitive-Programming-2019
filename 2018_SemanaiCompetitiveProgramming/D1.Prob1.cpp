#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int n, a, b, k;
	long long iTot = 0;	
//	long n, a, b, k, iTot = 0;
	cin >> n >> a >> b >> k;
	
	string sOper;
	cin >> sOper;
	
	while (sOper.size() < n+1){
		sOper += sOper;
	}

	for (int i = 0; i <= n; i++){
		if (sOper[i] == '+'){
			iTot += (pow((long long)a, n-i))*(pow((long long)b, i));
		}
		else{
			iTot -= ((pow((long long)a, n-i))*(pow((long long)b, i)));
		}
	}

	if (iTot >= 0){
		cout << iTot << endl;
	}
	else{
		cout << (iTot + 1000000006) << endl;
	}
	
	return 0;	
}
