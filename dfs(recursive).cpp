//this starts with right first
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
#define N 100
vector <int> v[N];
int visited[N];
void dfs(int source,int n){
        visited[source]=1;
        cout<<source;
        for(int i:v[source])//for-each(important here not referencial)(as for(int i=0;i<v[source].size();i++))
        {
                if(!visited[i]){
                        dfs(i,n);
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
