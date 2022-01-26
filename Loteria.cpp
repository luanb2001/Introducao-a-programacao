#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include "cores.h"
using namespace std; 
int op,i,j,igual,aux,n,num[15],sorteio[6];
void mostrar_num();
void ordenar_num();
void sorte();
void ordenar_sorteio();
void mostrar_sorteio();
void result();
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 //Entrada dos Dados
 do{
 system ("cls");
 textcolor(LIGHT_GRAY);
 cout<<" \n=======================================  ";
 cout<<" \n\t\a\a  SORTEIO - MEGA SENA  ";
 cout<<" \n=======================================  ";
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [1] - Surpresinha";
 cout<<"\n [2] - Escolha dos N�meros";
 cout<<"\n [3] - FIM";
 cout<<"\n Sua escolha �: ";
 cin>>op;

 switch(op)
 {
     case 1:{
              	system ("cls");
              	textcolor(LIGHT_GREEN);
				cout<<"\n ======== Surpresinha ========";
				cout<<"\n 6 n�meros - R$4,50";
				cout<<"\n 7 n�meros - R$31,50";
				cout<<"\n 8 n�meros - R$126,00";
				cout<<"\n 9 n�meros - R$378,00";
				cout<<"\n 10 n�meros - R$945,00";
				cout<<"\n 11 n�meros - R$2.079,00";
				cout<<"\n 12 n�meros - R$4.158,00";
				cout<<"\n 13 n�meros - R$7.722,00";
				cout<<"\n 14 n�meros - R$13.513,50";
				cout<<"\n 15 n�meros - R$22.522,50";
				cout<<"\n";
				do{
				cout<<"\n Escolha quantos n�meros voc� deseja gerar: ";
				cin>>n;
				cout<<"\n";
				
				if((n<6) || (n>15)){
              	cout<<" *Escolha Inv�lida, tente novamente...";
				}			
				
				srand(time(NULL));  // fun��o que inicializa o gerador de n�meros rand�micos
  
              	for(i=0;i<n;i++){ // rand()%30 --> gera um n�mero aleat�rio entre 1 e 60 (inclusive) 
              	num[i] = (rand()%60)+1; //vetor recebendo um n�mero aleat�rio
              	cout<<"      "<<num[i];
              	}
              	cout<<"\n";
                }while((n<6) || (n>15));
                mostrar_num();
              	getch();
              	break;
              	}
     case 2:{ 
	          	system ("cls");
	          	textcolor(YELLOW);
                cout<<"\n ======== Escolha dos N�meros ========";
                cout<<"\n 6 n�meros - R$4,50";
                cout<<"\n 7 n�meros - R$31,50";
                cout<<"\n 8 n�meros - R$126,00";
                cout<<"\n 9 n�meros - R$378,00";
                cout<<"\n 10 n�meros - R$945,00";
                cout<<"\n 11 n�meros - R$2.079,00";
                cout<<"\n 12 n�meros - R$4.158,00";
                cout<<"\n 13 n�meros - R$7.722,00";
                cout<<"\n 14 n�meros - R$13.513,50";
                cout<<"\n 15 n�meros - R$22.522,50";
                cout<<"\n";
                do{
                cout<<"\n - Informe quantos n�meros voc� deseja: ";
                cin>>n;
                if((n<6) || (n>15)){
                cout<<" *Escolha Inv�lida, tente novamente...";
                cout<<"\n";
                }}while((n<6) || (n>15));
                
				do{
					for(i=0,j=1;i<n;i++,j++){
              			cout<<"\n";
              	do{
                	cout<<" Digite o "<<j<<"� n�mero: ";
                   	cin>>num[i];
                	if(num[i]<=0 || num[i]>60){
                   		cout<<"\n - Voc� digitou um n�mero errado, digite novamente...\n";
                   		cout<<"\n";
                   		}
                	}while(num[i]<=0 || num[i]>60);
          		}
          		igual=0;
           		for(i=0;i<6;i++){
               		for(j=i+1;j<=5;j++){
                   		if(num[i]==num[j]){
                      	igual++;
                   		}
               		}
          	 	}
           		if(igual>0){
              	cout<<"\n - Voc� digitou n�meros iguais, digite a sequ�ncia novamente..."; 
				cout<<"\n"; 
     			}}while(igual>0);
     			mostrar_num();
              	getch();
              	break;
                }
     case 3:{
                cout<<"\n\n OBRIGADO POR USAR O PROGRAMA";                
                break;
                }           
    default:{ 
                cout<<"\n\n Escolha Inv�lida, tente novamente";
                getch();
                break;
   }                     
 }
}while(op!=3);
cout<<"\n\n\n";
} 	

////FUN��ES DE SORTEIO////
void mostrar_num()
{
     ordenar_num();   
     cout<<"\n\n - Voc� escolheu os seguintes n�meros: \n\n";
     
     for(i=0;i<n;i++){
    	cout<<"      "<<num[i];
    	}
    
    cout<<"\n\n Aperte qualquer tecla para efetuar o sorteio...\n\n\n";
    getch();
    sorte();   
}

void ordenar_num()
{
    for(i=0;i<6;i++){
        for (j=i+1;j<=5;j++){
            if(num[j] < num[i]){
               aux=num[i];
               num[i]=num[j];
               num[j]=aux;
            }
        }	
    }
}

void sorte()
{
     int igual;
     
     srand(time(0));
     textcolor(LIGHT_GRAY);
     cout<<"\n\t\t ======== SORTEIO ======== \n\n";
     do{ 
           for(i=0;i<6;i++){
               sorteio[i]=rand()%60+1; 
           	   }
           igual=0;
           for(i=0;i<6;i++){
               for(j=i+1;j<=5;j++){
                   if(sorteio[i]==sorteio[j]){
                      igual++;
                   	}
               } 
           }       
     }while(igual>0); 
     mostrar_sorteio();     
}

void ordenar_sorteio()
{
    for(i=0;i<6;i++){
        for(j=i+1;j<=5;j++){
            if(sorteio[j] < sorteio[i]){
               aux=sorteio[i];
               sorteio[i]=sorteio[j];
               sorteio[j]=aux;
            }
        }
    }
}

void mostrar_sorteio()
{
     ordenar_sorteio();
     for(i=0;i<6;i++){
     	textcolor(CYAN);
        cout<<"       "<<sorteio[i];
     	}
     result();
} 

void result()
{
     int iguais[6],acertos=0,k=0;
     
     for(i=0;i<6;i++){   //controla o vetor dos n�meros do usu�rio
         for(j=0;j<6;j++){    //controla o vetor dos n�meros sorteados
             if(num[i]==sorteio[j]){    //verifica se os numeros s�o iguais
                 iguais[k]=num[i];    //se forem iguais, copia os numeros iguais para um outro vetor
                 acertos++;
                 k++;
                 j=5;
             }
             if(num[i]<sorteio[j]){
                 j=5;
             }
        } 
     } 
     cout<<"\n\n\n Voc� teve "<<acertos<<" acerto(s): ";
     for(i=0;i<acertos;i++){   //mostrar apenas os n�meros iguais
         cout<<iguais[i]<<"   ";
     }    
} 
