#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        float x= n;
        if ((x==2 || x==1) && x<=2){
            return true;
        }else if (x!=2 && x<=2){
            return false;
            
            
        }else{
            cout<<x<<endl;
            return(isPowerOfTwo(float (x/2)));
        }
}

int main(){
    cout<<isPowerOfTwo(10);
}