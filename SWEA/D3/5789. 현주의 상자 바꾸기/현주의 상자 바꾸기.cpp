
#include<iostream>

using namespace std;
#include<vector>

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n,q,l,r;
        cin>>n>>q;
        vector<int> num(n,0);
        
        for(int i=0;i<q;i++)
        {
        	cin>>l>>r;
            
            for(int j=l-1;j<r;j++)
                num[j]=i+1;
        }
        
        cout<<"#"<<test_case<<" ";
        for(int i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<"\n";
        

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}