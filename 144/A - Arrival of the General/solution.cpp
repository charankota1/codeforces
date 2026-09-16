#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxi=INT_MIN,mini=INT_MAX,mx=0,mi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi){ 
            maxi=a[i];
            mx=i;
        }
        if(a[i]<mini){ 
            mini=a[i];
            mi=i;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi){
            mx=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==mini){
            mi=i;
            break;
        }
    }
    int res = mx + (n - 1 - mi);
    if (mx > mi) {
        res--;
    }
    cout<<res;
}