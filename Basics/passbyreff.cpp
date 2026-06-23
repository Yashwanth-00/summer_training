#include<iostream>
using namespace std;
//reference (memory)
void reff(int &num){
    num+=15;
    cout<<"num"<<num<<endl;
}
//call by value
// void reff(int num){
//     num+=15;
//     cout<<"num"<<num<<endl;
// }
int main(){
    int num=15;
reff(num);
cout<<"outside the function"<<num;
}