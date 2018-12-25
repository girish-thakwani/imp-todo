#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;
#define N 100
vector <int> v[N];
void bfs(int source,int n){
        int visited[n]={0};
        visited[source]=1;
        queue <int> q;
        q.push(source);
        while(!q.empty()){
                int p=q.front();
                q.pop();
                cout<<p;
                for(int i=0;i<v[p].size();i++){
                        if(!visited[v[p][i]]){
                                visited[v[p][i]]=1;
                                q.push(v[p][i]);
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
        bfs(source,n);
}
