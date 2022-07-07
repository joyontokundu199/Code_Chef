#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    vector<int> v(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>v[i];
	    }
	    int count =1;
	    int mn=INT_MAX;
	    int mx=INT_MIN;
	    for(int i=0;i<N-1;i++)
	    
	    {
	        
	        if(v[i+1]-v[i]<=2)
	        {
	            count++;
	        }
	        else
	        {
	            mn=min(mn,count);
	            mx=max(mx,count);
	            count=1;
	        }
	    }
	    if(mn>count)
	    {
	        mn=count;
	    }
	    if(count>mx)
	    {
	        mx=count;
	    }
	    cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}
