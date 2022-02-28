#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

vector<int> graph[1001];
int visit[1001];
int visit2[1001];
queue<int> q;

void Dfs(int start) {
	if(visit[start]) {
		return;
	}
	visit[start]=true;
	cout<<start<<" ";
	for(int i =0;i<graph[start].size();i++) {
		int x = graph[start][i];
		Dfs(x);
	}
}

void Bfs(int start) {
	visit2[start]=true;
	q.push(start);
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		cout<<x<<" ";
		for(int i =0; i<graph[x].size();i++) {
			int y = graph[x][i];
			if(!visit2[y]) {
				q.push(y);
				visit2[y] = true;
			}
		}

	}
}

int main() {
	int n, m, v;
	cin>>n>>m>>v;
	for(int i =0;i<m;i++) {
		int x, y; cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for(int i =1;i<=n;i++) {
		sort(graph[i].begin(),graph[i].end());
	}
	Dfs(v);
	cout<<"\n";
	Bfs(v);
	return 0;
}
