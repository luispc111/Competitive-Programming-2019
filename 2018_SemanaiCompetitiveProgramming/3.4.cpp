#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    int cant;
    string word;
    cin >> cant >> word;

    if (cant%4 == 0){
        int arr[5] = {0, 0, 0, 0, 0};
        for (int i=0; i<cant; i++){
            if(word[i] == 'A'){
                arr[0]++;
            }
            else if(word[i] == 'C'){
                arr[1]++;
            }
            else if(word[i] == 'G'){
                arr[2]++;
            }
            else if(word[i] == 'T'){
                arr[3]++;
            }
            else{
                arr[4]++;
            }
        }
        if(arr[4] == 0 && (arr[0] == arr[1]) && (arr[1] == arr[2]) && (arr[2] == arr[3])){
            cout << word << endl;
            return 0;
        }

        queue<char> fila;

        for (int i = 0; i<cant; i++){
            if(word[i] != '?'){
                fila.push(word[i]);
            }
        }
        for (int i = 0; i<cant; i++){
            if (word[i] == '?'){
                word[i] = fila.front();
                fila.pop();
            }
        }
        for(int i = 0; i < cant; i++){
            if(word[i] == '?'){
                word[i] = fila.front();
                fila.pop();
            }
        }


        cout << word << endl;
        return 0;

    }
    else{
        cout << "===" << endl;
    }
    cout << "===" << endl;


    return 0;
}
