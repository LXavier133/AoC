#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define N 70
typedef long long ll;
vector<vector<bool>> grid(100,vector<bool>(100,false));
int main(){__
	freopen("input.txt","r",stdin);
	int xi,yi;
	char v;
	while(cin>>xi>>v>>yi){
		grid[xi][yi]=true;
		vector<vector<bool>> seen(100,vector<bool>(100,false));
		bool flg=true;
		queue<tuple<int,int,int>> q;
		q.push({0,0,0});
		while(!q.empty()&&flg){
			tuple<int,int,int> tp=q.front();
			int x=get<0>(tp),y=get<1>(tp),d=get<2>(tp);
			q.pop();
			if(!(x<0||x>N||y<0||y>N||grid[x][y]||seen[x][y])){
				seen[x][y]=true;
				q.push({x+1,y,d+1});
				q.push({x-1,y,d+1});
				q.push({x,y-1,d+1});
		                q.push({x,y+1,d+1});}
			if(x==N && y==N) flg=false;}
		if(flg){
			cout<<xi SS yi;
			break;}}
return 0;}

