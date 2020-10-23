//Find the duplicate in an array of N+1 integers.
//time complexity O(N) Space complexity O(1)
//Floyds cycle detection Runner Technique

#include<iostream>
#include<algorithm>
using namespace std;
int findduplicate(long long int *arr,long long int n)
{
    long long int slow=arr[0];
    long long int fast=arr[0];
    do
    {
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    
    fast=arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return fast;
}
int main(int argc, char **argv)
{
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int duplicate;
    duplicate=findduplicate(arr,n);
    cout<<duplicate<<endl;
	return 0;
}
