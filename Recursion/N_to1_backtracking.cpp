#include <iostream>
using namespace std;

int f(int i, int x){
    if (i>x){
        return 0;

    }
    f(i+1,x);
    cout << i << endl;
}

int main(){
    f(0,4);
    
}