//Sorting 0's 1's 2's in just one pass
//time complexity=O(N)
//Space complexity=O(1)
//Variation of Dutch National flag problem

#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char **argv)
{
    
    long long int n;
    cin>>n;
	long long int arr[n];
    cout<<"Enter an array containing only 0's 1's 2's"<<endl;
    long long int low=0;
    long long int mid=0;
    long long int high=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
