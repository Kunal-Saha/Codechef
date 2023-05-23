#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	if(T>=1 && T<=1000)
	{
	    while(T--)
	    {
	        int M,S;
	        cin>>M>>S;
	        if(M>=1 && M<=100 && S>=1 && S<=10)
	        {
	            cout<<(M/S)<<endl;
	        }
	    }
	}
	return 0;
}
