/*
//Adjacency matrix

#include <iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"Enter the no. of nodes and edges: ";
	cin>>n>>m;
	int adj[n+1][n+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
		adj[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}
*/

// Adjacency list

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> adjlist[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adjlist[u].push_back(v);
		adjlist[v].push_back(u);
	}	
}

