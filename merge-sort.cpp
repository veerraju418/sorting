#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,int a[])
{
	int left=low,right=mid+1;
	vector<int>v;
	while(left<=mid && right<=high)
	{
		if(a[left]<a[right])
		{
			v.push_back(a[left]);
			left++;
		}
		else{
			v.push_back(a[right]);
			right++;
		}
	}
	while(left<=mid)
	{
		v.push_back(a[left]);
		left++;
	}
	while(right<=high)
	{
		v.push_back(a[right]);
		right++;
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=v[i-low];
	}
}
void mergesort(int low,int high,int a[]){
	if(low==high)
	{
		return;
	}
	int mid=(low+high)/2;
	mergesort(low,mid,a);
	mergesort(mid+1,high,a);
	merge(low,mid,high,a);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(0,n-1,a);
	cout<<"array after sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
