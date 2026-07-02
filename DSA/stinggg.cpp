#include<iostream>
using namespace std;
string reverse(string s){
int n =s.length()-1, i=0;
while(i<n){
    swap(s[i++],s[n--]);
}
return s;
}
int main(){
string newp="HELPP";
cout<<reverse(newp);
}