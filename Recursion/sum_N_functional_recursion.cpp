#include <iostream>
using namespace std;


int f(int n){
    if (n<1){
        return 0;
    }else{
        return (n+ f(n-1));
    }
}

int main(){
    cout << f(10);
}







































































