#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high)
{
	int pivot=arr[low];
	
	int i=low;
	int j=high;
	
	while(i<j)
	{
		while(arr[i]<=pivot && i<=high-1)
		{
			i++;
		}
		while(arr[j]>pivot && j>=low+1)
		{
			j--;
		}
		if(i<j)
		swap(arr[i],arr[j]);		
	}
	swap(arr[low],arr[j]);
	return j;
}

void quicksort(vector<int> &arr,int low,int high)
{
	if(low<high)
	{
		int pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}


int main()
{
	int n,x;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	quicksort(arr,0,n-1);
	cout<<"PRINTING"<<endl;
	for(auto it:arr)
	{
		cout<<it<<endl;
	}
	return 0;
}
