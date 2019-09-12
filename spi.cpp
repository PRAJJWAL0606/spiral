#include<iostream>
using namespace std;
void fun()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	int b=0;int c=0;
	int a[n][m];int j=0;int k=0;int y=m-1;int v=n-1;
	for(int i=0;i<n;i++)
	{
		for(int p=0;p<m;p++)
		{
			cin>>a[i][p];
			
		}
	}
	while(k!=(n)/2||j!=(m)/2)
	{
	
	while(j<=y)
	{
		cout<<a[k][j];
		j++;
	}
	j=j-1;
	if(k!=(n)/2||j!=(m)/2)
	{
	
	while(k<=v)
	{
			k++;
			if(k<=v)
			cout<<a[k][j];
	
		
	}
	k=k-1;
}


if((k!=(n)/2||j!=(m)/2))
{

	while(j>=b)
	{
		j--;
		if(j>=b)
		cout<<a[k][j];
		
	}
	j=j+1;
}

if(k!=(n)/2||j!=(m)/2)
{

	while(k>=b)
	{
		k--;
		if(k>b)
		cout<<a[k][j];
	}
	k=k+1;
}
	
	b++;
	c++;
	k=b;
	j=c;
	y--;
	v--;
}
	
	
}
int main()
{
	fun();
	return 0;
}
