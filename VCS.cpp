
// Version Control System Code Chef Problem 
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,M,K;
	    cin>>N>>M>>K;
	    vector<int> v(M),v1(K);
	    map<int,int> m;
	    for(int i=0;i<M;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	       
	    }
	    for(int i=0;i<K;i++)
	    {
	     
	        int y;
	        cin>>y;
	        v1.push_back(y);
	        
	    }
	    for(int i=0;i<v.size();i++)
	    {
	        m[v[i]]++;    // frequency Count 
	    }
	    for(int i=0;i<v1.size();i++)
	    {
	        m[v1[i]]++;
	    }
	    int count=0,count1=0;
	    for(int i=0;i<=N;i++)
	    {
	        if(m[i]==2)
	        {
	            count++;
	        }
	        else if(m[i]==0)
	        {
	            count1++;
	        }
	    }
	    cout<<count<<" "<<count1<<endl;
	}
	return 0;
}
