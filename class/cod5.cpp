#include <iostream>
using namespace std;
class fact
{
	public:
		int i,f,n;
		int factorial()
		{
			cout<<"Enter the no.";
			cin>>n;
			f=1;
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<f;
		}
}f1;
main()
{
	f1.factorial();
	return 0;
}
