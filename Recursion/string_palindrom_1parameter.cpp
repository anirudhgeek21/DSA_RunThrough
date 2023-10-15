#include <iostream>
using namespace std;
int i=0;
int f(string &s){
    
    if (i>=s.size()/2){
        return true ;
    }else{
        if (s[i]!= s[s.size()-i-1]){
            return false;
        }else{
            i++;
            return f(s);
        }
    }
}

int main(){
    string s="A man, a plan, a canal: Panama";
    cout << f(s);
}