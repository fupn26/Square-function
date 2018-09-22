#include "std_lib_facilities.h"

int square(int x)
{
int result = 0;
for (int i = 0;i < x; ++i)
	result += x;
return result;
}

int main()
{
int number;
cout<<"Please enter a number and I give you its square!\n";
cin>>number;
cout<<square(number)<<'\n';
}
