#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> victor={1,23,4,342,32,2213,23,24};
    // for(int i:victor) cout<<i<<" ";
    // cout<<victor.at(13);
    cout<<victor.size()<<endl;
    victor.push_back(3);
    cout<<victor[8];
}