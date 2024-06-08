#include <iostream>
using namespace std;

void printOneToN(int n){
	if (n==0)
	{
		return;
	} else{
		printOneToN(n-1);
		cout<<n<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	printOneToN(n);
	return 0;
}