#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <conio.h>
using namespace std; // OBRIGAT�RIO
int escolha,num,i,acumula,f;
float temp;
char caractere;
main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 do{ 
system("cls"); // Para usar o getch
 cout<<" \n=========================================  ";
 cout<<" \n\t\a\a  PROGRAMA USANDO O SWITCH  ";
 cout<<" \n=========================================  ";
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [1] - Calcular o fatorial com o FOR";
 cout<<"\n [2] - Calcular o fatorial com o DO_WHILE";
 cout<<"\n [3] - Calcular o fatorial com o WHILE";
 cout<<"\n [4] - FIM";
 cout<<"\n\n Sua escolha �: ";
 cin>>escolha;

 switch (escolha) // escolha uma op��o - usar int ou char
 {
    case 1:{
              cout<<" \n=========================================  ";
              cout<<" \n\t  CALCULAR O FATORIAL COM O FOR   ";
              cout<<" \n=========================================  ";
              cout<<" \n\n Informe um n�mero:  ";
              cin>>num;
              f = 1;
              
              for(i=0;i=num;i--)
              {
               cout<<num;
               if (num>1)
			   {
			   	cout<<" x ";
			   }
			   else
			   {
			   	cout<<" = ";
			   }
			   
			   f *= num;
			   num -= 1;
              }
              cout<<f;
              getch();
			  break;
             }
     case 2:{ 
	          cout<<" \n\t  CALCULAR O FATORIAL COM O DO_WHILE ";
              cout<<" \n\n Informe um n�mero:  ";
              cin>>num;
              i=1;
              do{
 	          cout<<num;
 	          
 	          if (num>1)
			   {
			   	cout<<" x ";
			   }
			   else
			   {
			   	cout<<" = ";
			   }
 	          i++;
 	          f *= num;
 	          num -=1;
 	          {
 	          	cout<<f;
			   }
              } while (i<num);
              cout<<"\n\n\n";
              getch();
			  break;
            }   
    case 3:{
              cout<<" \n\t  CALCULAR O FATORIAL COM O WHILE ";
              cout<<" \n\n informe um n�mero: ";
              cin>>num;
              i=0;
              while (i<=10)
                  {
                   cout<<"\n";
			       cout<<num<<"*"<<i<<"="<<i*num<<"\n";
			       i++;
			      }
              getch();
			  break;
           }		      
    case 4:{
    	    cout<<"\n\t FIM";
		break;
	}           
    default : { // faz o papel do else, caso nenhuma op��o seja atendida o default � executado
                cout<<"\n\n Escolha Inv�lida";
        getch();
		break;
    }                     
 }
}while(escolha!=4);
cout<<"\n\n\n";
}

