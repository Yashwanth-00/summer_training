#include<iostream>
using namespace std;
void  eve(int arr[3][4], int i ,int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(j%2==0) cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][4];
    cout<<"12 vals: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    
    eve(arr , 3, 4);
    
}
}