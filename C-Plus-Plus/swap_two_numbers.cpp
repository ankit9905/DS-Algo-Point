#include<bits/stdc++.h>  
 int main()    
{    
int a=10, b=20; 
cout<<"Before swap a="<<a<<" b="<<b;       
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
cout<<endl<<"After swap a="<<a<<" b="<<b;   
return 0;  
}  