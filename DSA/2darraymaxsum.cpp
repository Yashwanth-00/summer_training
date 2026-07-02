#include<iostream>
using namespace std;
int search( int arr[3][3]){
    int maxsum=0, x=0;
    for(int i =0; i<3; i++){
    int sum =0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
            maxsum=max(sum,maxsum);
            if(maxsum>sum) x=i;  
        }         
        
    }
    cout<<maxsum<<endl<< x;
    
}
int  main(){
    int arr[3][3]={1,2,3,40,5,6,7,8,9};
    // int sum = search(arr);
    // cout<<sum;
    search(arr);
}