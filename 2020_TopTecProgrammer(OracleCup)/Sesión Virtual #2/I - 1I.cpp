#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int rows, columns;
	cin >> rows >> columns;
	
	char mat[rows][columns];
	char aux;
	vector<int> vRow;
	vector<int> vCol;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cin >> aux;
			if(aux != '.'){
				mat[i][j] = aux;
				if(aux == 'W'){
					vRow.push_back(i);
					vCol.push_back(j);
				}
			}
			else{
				mat[i][j] = 'D';
			}
		}
	}
	
	for(int i = 0; i < vRow.size(); i++){
		if(vRow[i] != 0){
			if(mat[vRow[i]-1][vCol[i]] == 'S'){
				cout << "No" << endl;
				return 0;
			}
		}
		if(vRow[i] != rows-1){
			if(mat[vRow[i]+1][vCol[i]] == 'S'){
				cout << "No" << endl;
				return 0;
			}
		}
		if(vCol[i] != 0){
			if(mat[vRow[i]][vCol[i]-1] == 'S'){
				cout << "No" << endl;
				return 0;
			}
		}
		if(vCol[i] != columns-1){
			if(mat[vRow[i]][vCol[i]+1] == 'S'){
				cout << "No" << endl;
				return 0;
			}
		}
	}
	
	cout << "Yes" << endl;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cout << mat[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
