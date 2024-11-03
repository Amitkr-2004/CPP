#include<bits/stdc++.h>
using namespace std;

int solution(int A[], int B[], int N) {
    vector<vector<pair<int, int>>> adj(N + 1);
    
    // Build the adjacency list, with direction of the roads
    for (int i = 0; i < N; ++i) {
        adj[A[i]].emplace_back(B[i], 0); // 0 means the road is A -> B
        adj[B[i]].emplace_back(A[i], 1); // 1 means the road is B -> A
    }

    vector<bool> visited(N + 1, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    int result = 0;

    // Perform BFS to calculate the number of reorientations needed
    while (!q.empty()) {
        int city = q.front();
        q.pop();
        
        for (auto& temp : adj[city]) {
			int next_city=temp.first;
			int direction=temp.second;
            if (!visited[next_city]) {
                visited[next_city] = true;
                q.push(next_city);
                result += direction; // Reorient if direction is against travel to 0
            }
        }
    }

    return result;
}

int main(){
	int A[]={0,2,2,3};
	int B[]={1,1,4,4};

	cout<<solution(A,B,4);

	return 0;
}