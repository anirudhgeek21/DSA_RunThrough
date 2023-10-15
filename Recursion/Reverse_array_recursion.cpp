#include <iostream>
using namespace std;

int f(int s, int arr[],int l){
    if(s>=l){
        return 0;
    }else{
        swap(arr[s],arr[l]);
        f(s+1,arr,l-1);
        
    }
    
}


int main(){
    int arr1[]={5,4,3,2,1,0};
    for (int i=0;i<=5;i++){
        cout << arr1[i];
    }
    cout << endl;
    f(0,arr1,5);
    for (int i=0;i<=5;i++){
        cout << arr1[i];
    }
    
}