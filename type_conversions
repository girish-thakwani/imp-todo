#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define btos(b,n) bitset<b>(n).to_string()
int main(){
        string a,bb;cin>>a>>bb;
        ll b=stoll(bb,0,2),ans=0;
        for(ll i=0;i<=a.size()-bb.size();i++){
                string cc=a.substr(i,bb.size());
                ll c=stoll(cc,0,2);
                ll x=b^c;
                //string xx=btos(8,x);
                ll cnt=__builtin_popcount(x);
                //cout<<b<<" "<<c<<endl;
                if((cnt&1)==0)ans++;
        }
        cout<<ans;
return 0;
}
