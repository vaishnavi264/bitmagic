#include<iostream>
using namespace std;
int main()
{
	int n,position,result;
	cin>>n;
	cin>>position;
    result=n ^ ((position-1)<<1);
    cout<<result;
		
}
