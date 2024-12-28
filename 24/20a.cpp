#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define N 141
#define f first
#define s second

typedef long long ll;
vector<vector<char>> grid(150,vector<char>(150));
vector<vector<bool>> vis(150,vector<bool>(150,false));
vector<vector<int>> dis(150,vector<int>(150,100000));
vector<pair<int,int>> crd={{1,0},{0,1},{-1,0},{0,-1}};
bool val(int x, int y){
	return x>=0 && x<N && y>=0 && y<N;
}

int main(){__
	freopen("input.txt", "r", stdin);
	int i=0,x0,y0,xf,yf;
	while(cin>>grid[i/N][i%N]){
		if(grid[i/N][i%N]=='S'){
			x0=i/N;
			y0=i%N;}
		if(grid[i/N][i%N]=='E'){
			xf=i/N;
			yf=i%N;}
		i++;}
	queue<tuple<int,int,int>> q;
	q.push({xf,yf,0});
	while(!q.empty()){
		tuple<int,int,int> aux=q.front();q.pop();
		int x=get<0>(aux),y=get<1>(aux),d=get<2>(aux);
		if(val(x,y)&&!vis[x][y]&&grid[x][y]!='#'){
			vis[x][y]=true;
			dis[x][y]=d;
			q.push({x+1,y,d+1});
			q.push({x-1,y,d+1});
			q.push({x,y-1,d+1});
			q.push({x,y+1,d+1});}}
	vis.assign(150,vector<bool>(150,false));		
	q.push({x0,y0,0});
	int tot=0;
	while(!q.empty()){
		tuple<int,int,int> aux=q.front();q.pop();
		int x=get<0>(aux),y=get<1>(aux),d=get<2>(aux);
		if(val(x,y)&&!vis[x][y]&&grid[x][y]!='#'){
			for(auto k : crd) for(auto l : crd) if(val(x+k.f+l.f,y+k.s+l.s) && d+dis[x+k.f+l.f][y+k.s+l.s]+2<=dis[x0][y0]-100) tot++;
			vis[x][y]=true;
			q.push({x+1,y,d+1});
			q.push({x-1,y,d+1});
			q.push({x,y-1,d+1});
			q.push({x,y+1,d+1});}}
	cout<<tot;
return 0;}

