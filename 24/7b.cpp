#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
#define int unsigned long long
signed main(){__
	freopen("input.txt", "r", stdin);
	string s;
	int tot=0;
	while(getline(cin,s)){
		vector<int> t;
		istringstream iss(s);
		int n,a;iss>>n;
		char col;iss>>col;
		while(iss>>a) t.push_back(a);
		if(t.size()==1 || n==t[0]) tot+=n;
		for(int i=0; i<pow(3,t.size()-1); i++){
			int tt=t[0];
			int x=i;
			for(int j=0; j<t.size()-1; j++){
				int ai=x%3;
				x/=3;
				if(ai==0) tt+=t[j+1];
				if(ai==1) tt*=t[j+1];
				if(ai==2) tt=pow(10,(int)(log10(t[j+1])+1))*tt+t[j+1];}
			if(tt==n){
				tot+=n;
				break;}}}
	cout<<tot;
return 0;}

