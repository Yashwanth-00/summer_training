#include<iostream>
using namespace std;
int search(int arr[],int key){
    int n=8;
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            if(arr[i]>20) return key*2;
            else return key/2;
    }
}

int main(){
    int arr[]={12,32,55,1,26,53,78};
    int key =53;
    cout<<search(arr,key);
    
    

}