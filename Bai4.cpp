#include<iostream>

bool timso( int a[],int left,int right,int k)
{
	if(left>right)return false;
	int mid=(left+right)/2;
	if(a[mid]==k)return true;
	if(a[mid]<k) return timso(a,mid+1,right,k);
	if(a[mid]>k) return timso(a,left,mid-1,k);
}

using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int left=0,right=n-1;
	if(timso(a,left,right,k)==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
