#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int n;
	int rem;
	
	cout<<"enter any number:"<<endl;
	cin>>n;

	int arm=n;
	while(n>0)
	{rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;
}
if(arm==sum)
{cout<<"armstrong"<<endl;
	}	
	else
	{cout<<"not an armstrong."<<endl;
	}
		return 0;		
	}
