#include <iostream>
using namespace std;

int main() {
    int lista[10];
    for(int i=0;i<10;i++){
        cin >> lista[i];
    }
    int a=0;
    cin >> a;
    int b=0;
    int i=0;
    for (;i<9;i++){
    if (a<lista[i]){
        cout<<a<<endl;
        break;
       }else{
        cout<<lista[i]<<endl;
    }}  for(b=i;b<9;b++){
        cout<<lista[b]<<endl;
    }
    return 0;
}
