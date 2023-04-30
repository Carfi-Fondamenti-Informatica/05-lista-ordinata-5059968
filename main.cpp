#include <iostream>
using namespace std;

int main() {
    int lista[10];
    for(int i=0;i<10;i++){
        cin >> lista[i];
    }
    int a=0;
    cin >> a;
    int posizione = -1;
    for(int i=0;i<10;i++){
        if(lista[i] > a){
            posizione = i;
            break;
        }
    }
    if(posizione != -1){
        for(int i=9;i>=posizione;i--){
            lista[i] = lista[i-1];
        }
        lista[posizione] = a;
    }
    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
    return 0;
}
