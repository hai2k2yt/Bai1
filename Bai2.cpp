#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=1;
	}
	a[1]=0;
	for(int i=2;i<n;i++)
	{
		int k=2;
		if(a[i]==1){
			while(k*i<=n){
				a[k*i]=0;
				k++;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i]==1)cout<<i<<" ";
	}
	return 0;
}
