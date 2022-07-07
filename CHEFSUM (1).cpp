#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	   int mn=INT_MAX,index=-1;
	   for(int i=0;i<N;i++)
	   {
	       cin>>arr[i];
	       if(arr[i]<mn)
	       {
	           mn=arr[i];
	           index=i+1;
	       }
	   }
	   cout<<index<<endl;
	}
	return 0;
}
