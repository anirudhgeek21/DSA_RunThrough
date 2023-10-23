#include <iostream>
#include <vector>
using namespace std;


void GetSubsets(int nums[],int index,vector<int> arr1,int n){
    
    
    if(index == n){
        for(auto it:arr1){
            cout<< it<<" ";
        }
        cout<<endl;
        return ;
    }else{
        arr1.push_back(nums[index]);
      
        GetSubsets(nums,index+1,arr1,n);

        arr1.pop_back();
        
        GetSubsets(nums,index+1,arr1,n);
    }    
}

int main(){
    int arr2[]={3,1,2};
    int index=0;
    int n=3;
    vector<int> arr3;
    GetSubsets( arr2 ,index,arr3,n);
}











// #include <iostream>
// #include <vector>
// using namespace std;


// void GetSubsets(int nums[],int index,vector<int> arr1){
    
    
//     if(index == sizeof(nums)/sizeof(nums[0])){
//         for(int i=0;i<arr1.size();i++){
//             cout<< arr1[i]<<" ";
//         }
//         cout<<endl;
//         return ;
//     }else{
//         arr1.push_back(nums[index]);
      
//         GetSubsets(nums,index+1,arr1);

//         arr1.pop_back();
        
//         GetSubsets(nums,index+1,arr1);
//     }    
// }

// int main(){
//     int arr2[]={3,1,2};
//     int index=0;
//     vector<int> arr3;
//     GetSubsets( arr2 ,index,arr3);
// }






