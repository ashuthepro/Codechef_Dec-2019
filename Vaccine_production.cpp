#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int d1,v1,d2,v2,total=0,sum=0,ti=1;
	cin>>d1>>v1>>d2>>v2>>total;
	while(sum<total)
	{
		if(ti>=d1)
		{
			sum+=v1;
		}
		if(ti>=d2)
		{
			sum+=v2;
		}
		ti++;
	}
	cout<<ti-1;
	return 0;
}
