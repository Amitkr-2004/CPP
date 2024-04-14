void bfs(int src,vector<int> dist){
//     dist.resize(v,INT_MAX);
//     visited.clear();
//     queue<int> q;
//     dist[src]=0;
//     q.push(src);
//     visited.insert(src);
//     while(q.size()>0){
//         int curr=q.front();
//         cout<<curr<<" ";
//         q.pop();
//         for(auto neighbour:graph[curr]){
//             if(!visited.count(neighbour)){
//                 q.push(neighbour);
//                 visited.insert(neighbour);
//                 dist[neighbour]=dist[curr]+1;
//             }
//         }
//     }
// }