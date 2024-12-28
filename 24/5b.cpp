#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
vector<vector<bool>> pd(100,vector<bool>(100));

int main(){__
	freopen("input.txt","r",stdin);
	string s;
	int tot=0;
	while(getline(cin,s)&&!s.empty()){
		int a,c;
		char b;
		istringstream iss(s);
		iss>>a>>b>>c;
		pd[c][a]=true;}

	while(getline(cin,s)){
		vector<int> t;
		istringstream iss(s);
		int a;
		char v;
		while(iss>>a>>v) t.push_back(a);
		iss>>a;
		t.push_back(a);
		bool flag=true;
		for(int i=0; i<t.size(); i++){
			for(int j=i+1; j<t.size(); j++){
				if(pd[t[i]][t[j]]){
					flag=false;
					swap(t[i],t[j]);
					j=i+1;}}}
		if(!flag) tot+=t[t.size()/2];}
	cout<<tot;
return 0;}

