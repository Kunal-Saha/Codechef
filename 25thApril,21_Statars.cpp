#include <iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	if(T>=1 && T<=100)
	{
	    while(T--)
	    {
	        int N,M;
	        cin>>N>>M;
	        if(N>=1 && N<=100 && M>=2 && M<=100)
	        {
	            char arr[N][M];
	            for(int i=0;i<N;i++)
	            {
	                for(int j=0;j<M;j++)
	                {
	                    cin>>arr[i][j];
	                }
	                cout<<endl;
	            }
	            int X,Y;
	            cin>>X>>Y;
	            int a=0,b=0;
	            if(X>=1 && X<=M && Y>=1 && Y<=M)
	            {
	                for(int i=0;i<N;i++)
	                {
	                    for(int j=0;j<M;j++)
	                    {
	                        if(arr[i][j]=='F')
	                            a++;
	                        if(arr[i][j]=='P')
	                            b++;
	                    }
	                    if(a>=X || a>=(X-1) || b>=Y)
	                        cout<<1;
	                    else
	                        cout<<0;
	                    a=0;
	                    b=0;
	                }
	            }
	        }
	    }
	}
	return 0;
}
