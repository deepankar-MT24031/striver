#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

int main(){

int n=9;

vector<int> adj[n+1];
int visited[n+1];
queue<int>queue;

for(int i=0;i<=n;i++){visited[i]=0;};

adj[1]={2,6};
adj[2]={1,3,4};
adj[3]={2};
adj[4] = {2,5};
adj[5]={4,8};
adj[6]={1,7,9};
adj[7]={6,8};
adj[9]={6};
adj[8]={5,7};


return 0;
}