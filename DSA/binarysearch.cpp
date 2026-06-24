#include<iostream>
using namespace std;
int searching(int arr[], int key){
    int s=0 ,e=8-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) s=mid+1;
        else e=mid-1;
    }
    return -1;
}
int main(){
   int arr[8]={12,32,55,1,26,53,78};
    int key =53;
    cout<<searching(arr,key);
}