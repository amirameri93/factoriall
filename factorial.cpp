#include <iostream>
using namespace std;


int main()
 {
 	int number, x;
 	x=1;
 	cout<<"please enter the number:"<<endl;
 	cin>>number;
 	for(int i=1;i<=number;i++)
 	{
 		x=x*i;
	 }
 	cout<<"factorial= "<<x;
	return 0;
}