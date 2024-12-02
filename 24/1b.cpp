#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	freopen("input.txt", "r", stdin);
	vector<int> A;
	multiset<int> B;
	int a,b;
	while(cin>>a>>b){
		A.push_back(a);
		B.insert(b);}
	int cost=0;
	for(int i=0; i<A.size(); i++) cost+=A[i]*B.count(A[i]);
	cout<<cost;
return 0;}

