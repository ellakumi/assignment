# include <iostream>
using namespace std;
int GCD( int a,int b)
{
	if (b==0)
	return a;
	return GCD( b,a%b);
}
int main () 
{
	int a=100, b= 28;
	printf (" GCD of %d and %d is %d ", a, b,GCD( a,b) );
	return 0;
}
