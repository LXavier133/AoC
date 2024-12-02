#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	freopen("input.txt", "r", stdin);
	vector<int> A,B;
	int a,b;
	while(cin>>a>>b){
		A.push_back(a);
		B.push_back(b);}
	sort(A.begin(),A.end());sort(B.begin(),B.end());
	int cost=0;
	for(int i=0; i<A.size(); i++) cost+=abs(A[i]-B[i]);
	cout<<cost;
return 0;}

