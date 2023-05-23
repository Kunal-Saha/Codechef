#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	if(T>=1 && T<=10)
	{
	    while(T--)
	    {
	        long long int n,x;
	        cin>>n>>x;
	        if(x>=1 && n>=x & n<=200000)
	        {
	            int A[n];
	            for(int i=0;i<n;i++)
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
	            int num=n-x;
	            int arr1[x];
	            for(int i=0;i<x;i++)
	            {
	                arr1[i]=A[num-1];
	                num++;
	            }
	            sort(arr1,arr1+x);
	            int d=0;
	            for(int i=0;i<x;i++)
	            {
	                while (i < x-1 && arr1[i] == arr1[i+1])
	                {
	                    i++;
	                }
	                d++;
	            }
	            cout<<d<<endl;
	        }
	    }
	}
	return 0;
}

