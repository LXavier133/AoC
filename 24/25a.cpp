#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	freopen("input.txt","r",stdin);
	string s;
	int i=0,tot=0;
	vector<vector<int>> cv,fc;
	vector<int> aq(5,0);
	bool ch;
	while(cin>>s){
		for(int i=0; i<5; i++) aq[i]+=s[i]=='#';
		if(i==0) ch=(s[0]=='#');
		i=(i+1)%7;
		if(i==0){
			if(ch) cv.push_back(aq);
			else fc.push_back(aq);
			aq.assign(5,0);}}
	for(auto k : cv){
		for(auto l : fc){
			tot+=1;
			for(int i=0; i<5; i++){
				if(k[i]+l[i]>7){
					tot-=1;
					break;}}}} 		

	cout<<tot;
return 0;}

