//Repeat and Missing Number using O(N) time and O(1) space

#include <iostream>
#include <numeric>
using namespace std;
int main(int argc, char **argv)
{
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int val=0;
    for(int i=0;i<n;i++)
    {
        val=(arr[i]-1)%n;
        arr[val]+=n;
    }
    for(int i=0;i<n;i++)
    {
         if(((arr[i]-1)/n)>=2)
        {
            cout<<"Repeating number is "<<i+1;
        }
        if((arr[i]-1)/n ==0) 
            {
       cout<<"Missing number is "<<i+1;
    }
    
    }
    
   
	return 0;
}
