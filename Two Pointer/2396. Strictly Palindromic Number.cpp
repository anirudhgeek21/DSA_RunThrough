#include <iostream>
using namespace std;

bool isStrictlyPalindromic(int n) {
        for(int i=2;i<n;i++){
            if(i%n!=0 || i%n!=1){
                return false;
            }
        }
        return true;
    }