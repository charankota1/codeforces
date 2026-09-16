#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=n-10;
    if(r>0 && r<=11){
        if(r>=2 && r<=9) cout<<"4";
        if(r==1) cout<<"4";
        if(r==10) cout<<"15";
        if(r==11) cout<<"4";
    }
    else cout<<"0";
}