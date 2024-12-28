#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define N 50
#define f first
#define s second
typedef long long ll;
vector<vector<char>> grid(150,vector<char>(150));
set<char> ant;
map<char,vector<pair<int,int>>> crd;
set<tuple<int,int,int>> nn;

bool val(int x, int y){
	return x>=0 && x<N && y>=0 && y<N;
}

int main(){__
	freopen("input.txt", "r", stdin);
	int i=0,tot=0;
	while(cin>>grid[i/N][i%N]){
		if(grid[i/N][i%N]!='.'){
			ant.insert(grid[i/N][i%N]);
			crd[grid[i/N][i%N]].push_back({i/N,i%N});}
		i++;}

	for(auto k : ant) for(int i=0; i<crd[k].size(); i++) for(int j=i+1; j<crd[k].size(); j++){
		int dx=crd[k][i].f -crd[k][j].f;
		int dy=crd[k][i].s -crd[k][j].s;
		int ct=dx*crd[k][i].s-dy*crd[k][i].f;
		nn.insert({dx,dy,ct});}
	for(int x=0; x<N; x++) for(int y=0; y<N; y++) for(auto k : nn) if(get<0>(k)*y==get<1>(k)*x+get<2>(k)){
		tot++;
		break;}
	cout<<tot;
return 0;}

