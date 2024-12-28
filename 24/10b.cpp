#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define N 8
#define f first
#define s second
typedef long long ll;
vector<vector<char>> grid(150,vector<char>(150));
vector<vector<bool>> seen(150,vector<bool>(150));
vector<pair<int,int>> crd;
int tot;

void hike(int x, int y, int p){
	if(x<0||x>=N||y<0||y>=N||grid[x][y]!=p+1) return;
	if(grid[x][y]=='9') tot++;
	hike(x-1,y,grid[x][y]);
	hike(x+1,y,grid[x][y]);
	hike(x,y-1,grid[x][y]);
	hike(x,y+1,grid[x][y]);}

int main(){__
	freopen("input.txt", "r", stdin);
	int i=0;
	while(cin>>grid[i/N][i%N]){
		if(grid[i/N][i%N]=='0'){
			crd.push_back({i/N,i%N});}
		i++;}
	for(auto c : crd){
		hike(c.f,c.s,'0'-1);}
	cout<<tot;
return 0;}

