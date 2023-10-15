#include <iostream>
using namespace std;


int f(int i,int x){
    if (i<1){
        return 0;
    }else{
        f(i-1,x);
        cout << i << endl;
    }
}

int main(){
    f(3,3);
}