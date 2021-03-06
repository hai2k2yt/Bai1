#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	set<int>hang;//kiem tra 2 hau cung hang
	set<int>cot;//kiem tra 2 hau cung cot
	set<int>tong;//kiem tra 2 hau cung duong cheo huong phai duoi
	set<int>hieu;//kiem tra 2 hau cung duong cheo huong phai tren
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		hang.insert(x);
		cot.insert(y);
		tong.insert(x+y);
		hieu.insert(x-y);
	}
	if(hang.size()==n&&cot.size()==n&&tong.size()==n&&hieu.size()==n)
	{
		cout<<"no";
		return 0;
	}
	cout<<"yes";
	return 0;
}
