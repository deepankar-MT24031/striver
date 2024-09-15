#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<stack>
using namespace std;

int dfs(vector<int> adj[],int current_node,int visited,stack<int> stack){

return 0;

}

int main(){

int n=9;

vector<int> adj[n+1];
int visited[n+1];
stack<int>stack;

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

int start_node=1;

visited[start_node]=1;
stack.push(start_node);

int current_node;


return 0;
}