#include <iostream>
using namespace std;
int main(){

int a,b;
cin>>b;

for(int i=1, k=0; i<=b; ++i, k=0){
    for(int j=1; j<=b-i; ++j){
        cout<<"  ";
    }

    while(k != 2*i-1){
        cout<<"* ";
        ++k;
    }
    cout << endl;
    
}
return 0;
}
