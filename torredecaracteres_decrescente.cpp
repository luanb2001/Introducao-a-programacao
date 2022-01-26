#include<iomanip>
#include<iostream>
#include <ctype.h>
using namespace std;
char caracter;
int i, andares, j;
main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<"\n\t TORRE DE CARACTERES ";
 cout<<"\n\n Digite um caracter: ";
 cin>>caracter;
 cout<<"\n Digite quantos andares você quer na torre: ";
 cin>>andares;
 
 cout<<"\n";
 for(i=1;i<=andares;i++)
    {
    for(j=1;j<=i;j++)
	   {
	    cout<<caracter;
	   }	
	 cout<<"\n";  
	}
	for (i=andares;i>=1;i--)
       {
       	for(j=1;j<=i;j++)
	       {
	       	cout<<caracter;
		   }
		 cout<<"\n";
       }
}



