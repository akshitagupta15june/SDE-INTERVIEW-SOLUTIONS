//KADANE ALGORITHM FOR MAXIMUM SUBARRAY SUM
//Time Complexity O(N)
//Space Complexity O(1)
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,t;
    int mx=0;
    int csum=0;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
		}
    for(int j=0;j<t;j++)
    {
        csum=csum+a[j];
        if(csum<0)
        {
            csum=0;
        }
        mx=max(csum,mx);
    }
	
		
    cout<<mx<<endl;
	}
    return 0;

}
