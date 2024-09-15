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

int start_node=1;

visited[start_node]=1;
queue.emplace(start_node);


while(!queue.empty()){

    int curr_node = queue.front();
    cout<<curr_node<<", ";
    
    int curr_node_len = adj[curr_node].size();

    //cout<<"visiting"<<queue.front()<<"of size "<<curr_node_len<<endl;

for(int i=0;i<curr_node_len;i++) {

    if (visited[adj[curr_node][i]] == 1){//cout<<"node "<<adj[curr_node][i]<<"visited"<<endl;
    continue;};

    visited[adj[curr_node][i]] = 1; //new node discovered set to visited
    queue.emplace(adj[curr_node][i]); // add to queue
    //cout<<adj[curr_node][i]<<endl; //print node
    
};
queue.pop();


};



    return 0;
}