//quick sort
#include<iostream>
using namespace std;
int partition(int,int,int[]);
void Quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int loc=partition(low,high,a);
		Quick_sort(a,low,loc-1);
		Quick_sort(a,loc+1,high);
	}
}
int partition(int lb,int ub,int a[])
{
	int pivot=a[lb];
	int start=lb,end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
	swap(a[end],a[lb]);
	return end;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
