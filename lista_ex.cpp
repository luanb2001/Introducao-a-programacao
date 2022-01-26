#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <conio.h>
using namespace std; // OBRIGATÓRIO
int escolha,num,i,numero,inicio,fim,andares,j;
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
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [1] - Imprimir a tabuada com o FOR";
 cout<<"\n [2] - Imprimir a tabuada com o DO_WHILE";
 cout<<"\n [3] - Todos os números ímpares de 0 a 200 com o DO_WHILE";
 cout<<"\n [4] - Mostrar todos os números de INÍCIO ATE O FIM usando o FOR";
 cout<<"\n [5] - Mostrar todos os números de INÍCIO ATE O FIM usando o DO_WHILE";
 cout<<"\n [6] - Imprimir uma torre de caracteres";
 cout<<"\n [7] - Conversor de temperaturas ";
 cout<<"\n [8] - FIM";
 cout<<"\n Sua escolha é: ";
 cin>>escolha;

 switch (escolha) // escolha uma opção - usar int ou char
 {
    case 1:{
              cout<<" \n=========================================  ";
              cout<<" \n\t  PROGRAMA TABUADA COM O FOR   ";
              cout<<" \n=========================================  ";
              cout<<" \n\n Informe um número:  ";
              cin>>num;
              for(i=1;i<=10;i++)
              {
              cout<<"\n "<<num<<"  * "<<i<<" = "<<num * i;
              }
              cout<<"\n\n\n";
              getch();
			  break;
             }
     case 2:{ 
	          cout<<" \n\t  PROGRAMA TABUADA COM DO WHILE ";
              cout<<" \n\n Informe um número:  ";
              cin>>num;
              i=1;
              do{
 	          cout<<"\n "<<num<<" * "<<i<<" = "<<num * i;
 	          i++;
              } while (i<=10);
              cout<<"\n\n\n";
              getch();
			  break;
            }   
    case 3:{
              cout<<" \n\t  NÚMEROS ÍMPARES DE 0 A 200 ";
              do{
              if (numero%2==1){
              cout <<"\n "<<numero;
              }
              numero++;
              }while (numero<=200);
              cout<<"\n\n\n";
              getch();
			  break;
           }
     case 4:{ 
	          cout<<" \n============================  ";
              cout<<" \n\t  NÚMEROS ";
              cout<<" \n============================  ";
              cout<<"\n\n Digite o início: ";
              cin>>inicio;
              cout<<"\n Digite o final: ";
              cin>>fim;
              for(i=inicio;i<=fim;i++)
              {
               cout<<"\n\n  "<<i;
              }
                cout<<"\n\n\n";
              getch();
			  break;
            }
    case 5:{
               cout<<"\n\n Digite o início: ";
               cin>>inicio;
               cout<<"\n Digite o final: ";
               cin>>fim;
               do{
               if (inicio<=fim)
			      {
                  cout <<"\n "<<inicio;
                  }
               inicio++;
               }while (inicio<=fim);
               cout<<"\n\n\n";
               getch();
			   break;
            }
	case 6:{
	       	   cout<<"\n\t TORRE DE CARACTERES ";
               cout<<"\n\n Digite um caractere: ";
               cin>>caractere;
               cout<<"\n Digite quantos andares você quer na torre: ";
               cin>>andares;
               cout<<"\n";
               for(i=0;i<andares;i++)
                  {
                  for(j=0;j<i;j++)
	                {
	                cout<<caractere;
	                }	
	                cout<<"\n";  
	              } 
		        getch();
	 	        break;
	        }
	case 7:{
			  cout<<" \n============================  ";
              cout<<" \n\t  CONVERSOR DE TEMPERATURA ";
              cout<<" \n============================  ";
              cout<<" \n Escolha uma medida de temperatura para informar";
              cout<<" \n [1] Celsius";
              cout<<" \n [2] Fahrenheit";
              cout<<" \n [3] Kelvin";
              cout<<"\n Sua escolha é: ";
              cin>>escolha;
              
              switch (escolha)
                {
              	case 1:{
			   	        cout<<"\n Digite a temperatura em graus Celsius: ";
			   	        cin>>temp;
			   	        cout<<"\n Temperatura em graus Fahrenheit: ";
			   	        cout<<temp*9/5+32;
			   	        cout<<"\n Temperatura em graus Kelvin: ";
			   	        cout<<temp+273.15;
			   	        getch();
			   	        break;
			   	       }
              	case 2:{
              		    cout<<"\n Digite a temperatura em graus Fahrenheit: ";
              		    cin>> temp;
              		    cout<<"\n Temperatura em graus Celsius: ";
              		    cout<<(temp-32)*5/9;
              		    cout<<"\n Temperatura em graus Kelvin: ";
              		    cout<<(temp+459.67)*5/9;
              	        getch();
					    break;
			           }
			   	case 3:{
			   		    cout<<"\n Digite a temperatura em graus Kelvin: ";
			   		    cin>>temp;
			   		    cout<<"\n Temperatura em graus Celsius: ";
			   		    cout<<temp-273.15;
			   		    cout<<"\n Temperatura em graus Fahrenheit: ";
			   		    cout<<((temp-273.15)*1.8)+32;
			   		    getch();
					    break;
				       }       
			   }
			}		      
    case 8:{
    	    cout<<"\n\t FIM";
		break;
	}           
    default : { // faz o papel do else, caso nenhuma opção seja atendida o default é executado
                cout<<"\n\n Escolha Inválida";
        getch();
		break;
    }                     
 }
}while(escolha!=8);
cout<<"\n\n\n";
}
