#include <iostream>
#include<stdio.h>

#include <bits/stdc++.h>


using namespace std;


int main()
{
    //freopen("xorsum.in", "r", stdin);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int c_1=0;
	int eq,day ;
	cin >> eq >> day;
	int tableau[eq] ;
	for(int i=0 ;i<eq;i++)
	{
	    tableau[i]=0 ;
	    
	    
	}
	for(int i=0 ;i<day;i++)
	{
	    int a,b ;
	    cin >> a >> b ;
	    if (tableau[a-1]==0 and tableau[b-1]==0)  {
	        tableau[a-1]=2 ;
	        tableau[b-1]=1 ;
	        c_1+=2 ;
	    }
	    else if (tableau[a-1]!=0 and tableau[b-1]==0) 
	    {
	        tableau[a-1]++ ;
	        tableau[b-1]=1 ;
	        c_1+=1 ;
	    }
	    else if(tableau[a-1]==0 and tableau[b-1]!=0) 
	    {
	        tableau[a-1]=tableau[b-1]+1 ;
	        c_1+=1 ;
	    }
	    else if (tableau[a-1]!=0 and tableau[b-1]!=0) 
	    {
	        tableau[a-1]++ ;
	       
	    }
	    //-------------------------
	    int c=0;
        for(int i=0 ;i<eq-1;i++)
	{
	    for(int j=i+1 ;j<eq;j++)
	{
	    
	    if(tableau[i]==tableau[j]) c=1;
	    break ;
	}
	    
	    
	}
	    
	 //-----------------------
	   //cout << c << c_1 << endl ;
	    if(c==0 and c_1==eq)  {
	        
	        
	        cout << i+1 ;
	        break ;
	    }
	    else if(i==day-1 ) cout << -1 ; 
}
	return 0;
}