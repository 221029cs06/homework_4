#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
int f1 = 0, f2 = 1, i;
  
if (a < 1){
       
    cout << f1 << " ";
    }for (i = 1; i < a; i++) {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
  
return 0;
}
