//selection sort
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int min_ind=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min_ind])
			{
				min_ind=j;
			}
		}
		swap(a[i],a[min_ind]);
	}
	cout<<"array after sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
