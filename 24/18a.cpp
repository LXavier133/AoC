#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<bool>> grid(100,vector<bool>(100,false));
vector<vector<bool>> seen(100,vector<bool>(100,false));
int main(){__
	freopen("input.txt","r",stdin);
	for(int i=0; i<1024; i++){
		int x,y;
		char v;
		cin>>x>>v>>y;
		grid[x][y]=true;}
	queue<tuple<int,int,int>> q;
	q.push({0,0,0});
	while(!q.empty()){
		tuple<int,int,int> tp=q.front();
		int x=get<0>(tp),y=get<1>(tp),d=get<2>(tp);
		q.pop();
		if(!(x<0||x>70||y<0||y>70||grid[x][y]||seen[x][y])){
			seen[x][y]=true;
			q.push({x+1,y,d+1});
			q.push({x-1,y,d+1});
			q.push({x,y-1,d+1});
                        q.push({x,y+1,d+1});}
		if(x==70 && y==70){
			cout<<d;
			return 0;}}

return 0;}

