#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    string S,temp;
	    cin>>S;
	    set<string> ans;
	    for(int i=0;i<S.length()-1;i++)
	    {
	        temp=S.substr(i,2);
	        ans.insert(temp);
	    }
	    cout<<ans.size()<<endl;
	}
	
	return 0;
}
