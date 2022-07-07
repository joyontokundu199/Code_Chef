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
	    vector<int> v(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>v[i];
	    }
	    unordered_map<int,int>  umap;
	    unordered_map<int,int> umap1;
	    for(int i=0;i<v.size();i++)
	    {
	        umap[v[i]]++;
	    }
	    for(auto it : umap)
	    {
	        umap1[it.second]++;
	    }
	    int value=0,ans=0;
	    for(auto it : umap1)
	    {
	        if(it.second>value)
	        {
	            value=it.second;
	            ans=it.first;
	        }
	        else if(value==it.second)
	        {
	            ans=min(ans,it.first);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
