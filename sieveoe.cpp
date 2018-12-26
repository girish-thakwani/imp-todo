#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void soe(int n){
    int arr[n];
    memset(arr,1,sizeof(arr));
    int i=2;
    while(i*i<=n){
        if(arr[i]!=0){
            for(int j=2*i;j<n;j+=i){
                arr[j]=0;
            }
        }
        ++i;
    }
for(int k=2;k<n;k++){if(arr[k]!=0)cout<<k;}
}
int main(){
    int n;cin>>n;
    soe(n);
r
