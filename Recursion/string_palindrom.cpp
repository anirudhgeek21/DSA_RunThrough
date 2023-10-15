#include <iostream>
using namespace std;

int f(int s,char arr[],int l){
   
    if (s==l){
        return false;
    }else{
        if (arr[s]!=arr[l])
        {
            return false;   
        }else{
            return f(s+1,arr,l-1);
        }   
    }
}

int main(){
    char arr[]={'m','p','d','a','m'};
    cout << f(0,arr,4);
}