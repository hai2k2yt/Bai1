#include<iostream>

using namespace std;
int main(){
	int a,n,m;
	cin>>a>>n>>m;
	int kq=1;
	a=(a%m);
	for(int i=0;i<n;i++){
		kq*=a;
		kq=(kq%m);
	}
	cout<<kq;
}
