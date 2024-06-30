//The bfs algorithm

queue<int> q; //initialize the queue
vector<int> vis(n,0); //initialize the visited array, here n denotes the size of the adjaceny list/matrix.
vis[0] = 1;
q.push(0);

while(!q.empty()){
    int node = q.front();
    q.pop();
  cout<<node<<" ";
    for(auto it: adj[node]){
        if(!vis[it]){
            vis[it] = 1;
            q.push(it);
        }
    }
}
cout<<endl;
