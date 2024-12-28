#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<char>> grid(150,vector<char>(150));
int s=0;
vector<vector<bool>> seen(150,vector<bool>(150,false));
void anda(int x,int y,int dx,int dy){
	cout<< x SS y fl;
	if(x<0 || x>129 || y<0 || y>129) return;
	if(!seen[x][y]) s+=1;
	seen[x][y]=true;
	while(!(x+dx<0 || x+dx>129 || y+dy < 0 || y+dy>129) && grid[x+dx][y+dy]=='#'){
		int aux=dx;
		dx=dy;
		dy=-aux;}
	anda(x+dx,y+dy,dx,dy);}

int main(){__
	int i=0,x0=0,y0=0;
	while(cin>>grid[i/130][i%130]){
		if(grid[i/130][i%130]=='^'){
			x0=i/130;y0=i%130;}
		i++;}
	anda(x0,y0,-1,0);
	cout<<s;
return 0;}

