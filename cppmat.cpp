#include <iostream>
using namespace std;
int main()
{
	int n1,m1,n2,m2;
	cout<<"Enter the order of the matrix 1\n";
	cin>> m1>>n1;
	cout<<"\n";
	cout<<"Enter the order of the matrix 2\n";
	cin>>m2>>n2;


	if (n1 == m2)
	{
	int i,j,k,a[m1][n1],b[m2][n2],c[m1][n2],sum;
	cout<<"Matrix Calculation\n\n";
	for (i=0;i<=m1-1;i++)
	{
		for(j=0;j<=n1-1;j++)
		{
		cout<<"Enter the element of matrix 1 in row "<< i << "and column "<< j;
		cin>>a[i][j];
		}
	
	} 
	cout<<"\n\n\n";
		for (i=0;i<=m2-1;i++)
		{
		
	
		for(j=0;j<=n2-1;j++)
		{
		cout<<"Enter the element of matrix 1 in row "<< i << "and column "<< j;
		cin>>b[i][j];
		}
	
	}
	cout<<"The provided matrix 1 is\n";
	for (i=0;i<=m1-1;i++)
	{
		for(j=0;j<=n1-1;j++)
		{
		
		cout<<"\t"<<a[i][j];
		}
	    cout<<"\n";
	}
	cout<<"\n\n\n";
	cout<<"The provided matrix 2 is\n";
	for (i=0;i<=m2-1;i++)
	{
		for(j=0;j<=n2-1;j++)
		{
		
		cout<<"\t"<<b[i][j];
		}
	    cout<<"\n";
	}
	cout<<"The product is: ";
	for (k=0;k<=n2-1;k++)
	{
		for (i=0;i<=m1-1;i++)
		{
			sum = 0;
			for (j=0;j<=m2-1;j++)
			{
				sum = sum + a[i][j]*b[j][k];
			}
			c[i][k] = sum;
			
			
		}
	
	}
	cout<<"\n\n\n";
	cout<<"The provided matrix product is\n";
	for (i=0;i<=m1-1;i++)
	{
		for(j=0;j<=n2-1;j++)
		{
		
		cout<<"\t"<<c[i][j];
		}
	    cout<<"\n";
	}
	
	
}
else 
{
	cout<<"Matrix multiplication not possible";
}
	
	
}
