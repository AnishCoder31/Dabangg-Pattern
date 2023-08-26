//Anish Coder 31

//Dabangg Pattern
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i = 1;
	while(i<=n)
	{
		
	//Printing Numbers (j)
		int j = 1;
		while(j<=n-i+1)
		{
			cout<<j<<" ";
			j+=1;
		}
		
		//Print stars
		int stars = i - 1;
		while(stars)
		{
			cout<<"* * ";
			stars--;
		}
		//Printing Numbers(n-i+1-j+1=n-i-j+2)
		j = 1;
		while(j<=n-i+1)
		{
			cout<<n-i-j+2<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	getchar();
	getchar();
	return 0;
}
