#include<iostream>
using namespace std;
int main()
{
   int n1,n2,n3;
    cout << "Enter the value of 1st number: ";
    cin >> n1;
    cout << "Enter the value of 2nd number: ";
    cin >> n2;
    cout << "Enter the value of 3rd number: ";
    cin >> n3;
    
    if(n1>n2&&n1>n3)
	{
       cout<< "1st number is greatest:"<<endl<<"which is "<<n1;
    }
    else if(n2>n1&&n2>n3)
	{
       cout<< "2nd number is greatest:"<<endl<<"which is "<<n2;
    } 
    else
	{
       cout<< "3rd number is greatest:"<<endl<<"which is "<<n3;
    }
    cout<<"\n\nprogrammed by: MOJICA, JAIME VINCENT A.";
    return 0;
}
