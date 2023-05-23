#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	if(T>=1 && T<=100)
	{
	    while(T--)
	    {
	        int Amin,Bmin,Cmin,Tmin,A,B,C;
	        cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
	        if(Amin>=1 && Amin<=100 && Bmin>=1 && Bmin<=100 && Cmin>=1 && Cmin<=100 && A>=1 && A<=100 && B>=1 && B<=100 && C>=1 && C<=100 && T<=300)
	        {
	            if(A>=Amin && B>=Bmin && C>=Cmin)
	            {
	                if(A+B+C>=Tmin)
	                {
	                    cout<<"YES"<<endl;
	                }
	                else
	                {
	                    cout<<"NO"<<endl;
	                }
	            }
	            else
	            {
	                cout<<"NO"<<endl;
	            }
	        }
	        //cout<<endl;
	    }
	}
	return 0;
}
