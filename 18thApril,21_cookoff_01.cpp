#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	if(T>=1 && T<=10)
	{
	    while(T--)
	    {
	        long long int N,R;
	        cin>>N>>R;
	        if(N>=1 && N<=50000 && R>=1)
	        {
	            vector<long long int>A(N);
	            vector<long long int>B(N);
	            for(size_t i=0;i<N;i++)
	            {
	                cin>>A[i];
	                if(A[i]>=1 && A[i]<=pow(10,9))
	                {
	                    continue;
	                }
	                else
	                {
	                    break;
	                }
	            }
	            for(size_t i=0;i<N;i++)
	            {
	                cin>>B[i];
	                if(B[i]<=pow(10,5))
	                {
	                    continue;
	                }
	                else
	                {
	                    break;
	                }
	            }
	            for(size_t i=0;i<(N-1);i++)
	            {
	                int sum=sum+(B[i]-R);
	            }
	            cout<<sum+B.back()<<endl;
	        }
	    }
	}
	return 0;
}
