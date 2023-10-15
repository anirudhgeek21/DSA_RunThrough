#include <iostream>
using namespace std;



int f(int i,int x) {
    if(i>x) {
        return 0;
    }else{
        cout << i << endl;
        f(i+1,x);
        
    }
}


int main(){
    f(0,12);
}