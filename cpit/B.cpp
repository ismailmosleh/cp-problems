#include <iostream>
#include<stdio.h>

#include <bits/stdc++.h>


using namespace std;


int main()
{
    //freopen("xorsum.in", "r", stdin);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string alpha="abcdefghijklmnopqrstuvwxyz" ;
	int T  ;
	string A,B ;
	getline (cin,A);
	A.erase(std::remove(A.begin(), A.end(), ' '), A.end());
	getline (cin,B);
	B.erase(std::remove(B.begin(), B.end(), ' '), B.end());
	T=A.size() ;
	string code ;
    for (int i=0;i<T;i++)
    {  
        
        int j ;
        code[i]= alpha[(A[i]-B[i]+26)%26]  ;
        //cout << code ;
        string cle_rep =code;
        
	    for(int k=0;k<T;k++) 
	    {cle_rep+=code ;
	    cout << cle_rep[k] ;}
	    for(j=0  ;j<T;j++)
	    {
	        if(B[j]+cle_rep[j]!=A[j]) break ;
	    }
	    
	    if(j==T) 
	    {
	        cout << code;
	        break ;
	    }
    }
    
	
	return 0;
}