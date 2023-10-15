#include <iostream>
using namespace std;

int f(int i,int sum){
    if(i<1){
        return sum ;
    }else{
        return f(i-1,sum+i);
        
    }
}

int main(){
    cout << f(10,0);
}