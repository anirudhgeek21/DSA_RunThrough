#include <iostream>
using namespace std;

bool isPowerOfTwo(double n) {
        
        if ((n==2 || n==1) && n<=2){
            return true;
        }else if (n!=2 && n<=2){
            return false;
            
            
        }else{
            cout<<n<<endl;
            return(isPowerOfTwo(n/2));
        }
}

int main(){
    cout<<isPowerOfTwo(1);
}