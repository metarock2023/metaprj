#include <bits/stdc++.h>
using namespace std;
int p(int x){
	int cnt=0;
	while (x%5==0){
		x=x/5;
		cnt++;
	}
	return cnt;
}
int main() {
   int n,ans1=0,ans2=0;
   cin>>n;
   for (int i=1;i<=n;i++){
   	ans1=ans1+p(i);
   }
   if (n%2==0){
   	for (int i=2;i<=n;i=i+2){
   		ans2=ans2+p(i);
	   }
   }
   cout<<ans1<<" "<<ans2;
   return 0; 
}
