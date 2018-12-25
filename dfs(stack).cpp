//also it starts to move to right first
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
#define N 100
vector <int> v[N];
void dfs(int source,int n){
        int visited[n]={0};
        visited[source]=1;
        stack <int> s;
        s.push(source);
        while(!s.empty()){
                int p=s.top();
                s.pop();
                cout<<p;
                for(int i=0;i<v[p].size();i++){
                        if(!visited[v[p][i]]){
                                visited[v[p][i]]=1;
                                s.push(v[p][i]);
                        }
                }
        }
}
int main(){
        int n,edges;cin>>n>>edges;
        for(int i=0;i<edges;i++){
                int x,y;cin>>x>>y;
                v[x].push_back(y);
                v[y].push_back(x);
        }
        int source;cin>>source;
        dfs(source,n);
}
