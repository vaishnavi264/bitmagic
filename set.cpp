#include<iostream>
using namespace std;
int main()
{
	int n,position;
	cin>>n;
	cin>>position;
	if(n & ((position-1)<<1))
	{
		cout<<"it is set number"<<endl;
	}
	else
	{
			cout<<"it is not set number"<<endl;
	}
}

