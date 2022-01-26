#include<iostream> 
#include"luanbm.h"
#include<iomanip> 
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int const TAM=300;
int escolha,dia,mes,ano,temp,qntd,result,op;
int vet_dia[TAM],vet_mes[TAM],vet_ano[TAM];
float vetor_desejado(float vet_temp[], int vet_dia[], int vet_ano[], int vet_mes[], int qntd);
float vet_temp[TAM],media;
void dias(int dia_atual);
void meses(int dia_atual);
void anos(int dia_atual);
void temperatura(int dia_atual);
void qntdias(int qnt_dias);
void meiodoano(float vet_temp[], int vet_dia[],int vet_mes[],int qntd);
void vetores_lidos(float vet_temp[], int vet_dia[],int vet_mes[],int vet_ano[],int qntd);


main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<"\n Digite a quantidade de dias que voc� deseja: ";
 cin>>qntd; 
 for(int i=0;i<qntd;i++)
{
 system ("color 3");
 cout<<"\n\t -------- Digite os valores do dia "<<i+1<<" --------"; 
 dias(i);
 meses(i);
 anos(i);
 temperatura(i);
}
 do{
 system ("cls");
 cout<<" \n======================================  ";
 cout<<" \n\t\a\a  SWITCH DE FUN��ES  ";
 cout<<" \n======================================  ";
 cout<<"\n Escolha uma op��o: ";
 cout<<"\n [1] - Fa�a uma fun��o que receba o vetor de temperaturas e calcule e retorne ao programa a m�dia das temperaturas.";
 cout<<"\n [2] - Fa�a uma fun��o que receba o vetor de temperaturas e calcule e retorne ao programa a temperatura mais alta.";
 cout<<"\n [3] - Fa�a uma fun��o que receba o vetor de temperaturas e calcule e retorne ao programa a temperatura mais baixa.";
 cout<<"\n [4] - Fa�a uma fun��o que calcule e retorne ao programa a quantidade de temperaturas negativas que foram cadastradas";
 cout<<"\n [5] - Fa�a uma fun��o que calcule e retorne ao programa a quantidade de temperaturas positivas que foram cadastradas";
 cout<<"\n [6] - Fa�a uma fun��o que imprima todas as temperaturas do dia 15 do m�s 6";
 cout<<"\n [7] - Fa�a uma fun��o que verifique em qual ano houve a temperatura mais baixa";
 cout<<"\n [8] - Fa�a uma fun��o que verifique em qual m�s houve a temperatura mais alta";
 cout<<"\n [9] - Fa�a uma fun��o que determine quantos dias a temperatura ficou abaixo da m�dia de todas as temperaturas";
 cout<<"\n [10] - Fa�a uma fun��o que imprima todos os vetores lidos";
 cout<<"\n [11] - Fa�a uma fun��o que imprima o vetor desejado";
 cout<<"\n [12] - FIM";
 cout<<"\n Sua escolha �: ";
 cin>>escolha;

 switch (escolha) 
 {
    case 1:{
             system ("color 5");
             result=tempe(vet_temp,qntd);// Passando o Vetor para a Fun��o
             cout<<"\n A M�dia de temperaturas �:  "<<result<<" graus";
             getch();
             break;
            }
    case 2:{
             system ("color 5");
             result=temp2(vet_temp,qntd);// Passando o Vetor para a Fun��o
             cout<<"\n A temperatura mais alta �: "<<result<<" graus";
             getch();
             break;
            }
    case 3:{
             system ("color 5");
             result=temp3(vet_temp,qntd);// Passando o Vetor para a Fun��o
             cout<<"\n A temperatura mais baixa �: "<<result<<" graus";
             getch();
             break;
            }
	case 4:{
		     system ("cls");
             cout<<"\n\t ======== VETOR DE TEMPERATURA NEGATIVA ========"; 
             result=temp4(vet_temp,qntd);
             cout<<"\n\n Quantidade de temperaturas negativas: "<<result;
             getch();
             break;
	        }
	case 5:{ 
	         system ("cls");
             cout<<"\n\t ======== VETOR DE TEMPERATURA POSITIVA ========"; 
             result=temp5(vet_temp,qntd);
             cout<<"\n\n Quantidade de temperaturas positivas: "<<result;
             getch();
             break;
            }
    case 6:{
             system ("cls");
             cout<<"\n\t ======== TEMPERATURAS EM 15/06 ========"; 
             meiodoano(vet_temp,vet_dia,vet_mes,vet_ano,qntd);
             getch();
             break;
            }
    case 7:{ 
	         system ("cls");
             cout<<"\n\t ======== VETOR DE ANO COM A TEMPERATURA MAIS BAIXA ========"; 
             result=ano_temp(vet_temp,vet_ano,qntd);
             cout<<"\n\n Ano com a temperatura mais baixa: "<<result;
             getch();
             break;
            }
    case 8:{ 
	         system ("cls");
             cout<<"\n\t ======== VETOR DE M�S COM A TEMPERATURA MAIS ALTA ========"; 
             result=mes_temp(vet_temp,vet_mes,qntd);
             cout<<"\n\n M�s com a temperatura mais alta: "<<result;
             getch();
             break;
            }
    case 9:{ 
	         system ("cls");
             cout<<"\n\t ======== TEMPERATURAS ABAIXO DA M�DIA ========";
			 media=tempe(vet_temp,qntd);
             result=dias_temp(vet_temp,vet_mes,qntd,media);
             cout<<"\n\n Dias que a temperatura ficou abaixo da m�dia: "<<result;
             getch();
             break;
            }
    case 10:{
             system ("cls");
             cout<<"\n\t ======== VETORES LIDOS ========"; 
             vetores_lidos(vet_temp,vet_dia,vet_mes,vet_ano,qntd);
             getch();
             break;
            }
   case 11:{
             system ("cls");
             cout<<"\n\t ======== VETOR DESEJADO ========"; 
             result=vetor_desejado(vet_temp,vet_dia,vet_ano,vet_mes,qntd);
             getch();
             break;
            }
   case 12:{
            cout<<"\n\n\n OBRIGADO POR USAR O PROGRAMA";                
            break;
            } 
   default:{ 
             cout<<"\n\n Escolha Inv�lida, tente novamente...";
             getch();
             break;
            }                     
 }
}while (escolha != 12);
cout<<"\n\n\n";
}
//==================================
//�rea das fun��es
//==================================

//==================================
//fun��o Dias
//==================================
void dias(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o dia: ";
  cin>>dia;
  if(dia<1 || dia>30) 
   {
    cout<<" *Digite um dia v�lido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_dia[dia_atual] = dia;
}
//==================================
//fun��o M�s
//==================================
void meses(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o m�s: ";
  cin>>mes;
  if(mes<1 || mes>12) 
   {
    cout<<" *Digite um m�s v�lido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_mes[dia_atual] = mes;
}
//==================================
//fun��o Ano
//==================================
void anos(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o ano: ";
  cin>>ano;
  if(ano<1850 || ano>2021) 
   {
    cout<<" *Digite um ano v�lido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_ano[dia_atual] = ano;
}
//==================================
//fun��o Temperatura
//==================================
void temperatura(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite a temperatura: ";
  cin>>temp;
  if(temp<-50 || temp>65) 
   {
    cout<<" *Digite uma temperatura v�lida \n";
   } 
  else
   {
    break;
   }  
  }
  vet_temp[dia_atual] = temp;
}
//===========================================
//fun��o para imprimir todos os vetores lidos
//===========================================
void vetores_lidos(float vet_temp[], int vet_dia[],int vet_mes[],int vet_ano[],int qntd)
{
	for(int i=0;i<qntd;i++)
	{
	 cout<<"\n\n "<<vet_dia[i]<<"/"<<vet_mes[i]<<"/"<<vet_ano[i]<<": "<<vet_temp[i]<<" graus.";
	}
}
//=====================================
//fun��o para imprimir o vetor desejado
//=====================================
float vetor_desejado(float vet_temp[], int vet_dia[], int vet_ano[], int vet_mes[], int qntd)
{	
int op;
cout<<"\n (1)Dia";
cout<<"\n (2)M�s"; 
cout<<"\n (3)Ano";
cout<<"\n (4)Temperatura";
cout<<"\n Escolha o vetor: ";
cin>>op;
  	for(int i=0;i<qntd;i++)
  	{
	   if(op==1)
	   {
	    cout<<"\n Dia: "<<vet_dia[i];
	   }
	   else if(op==2)
	   {
	    cout<<"\n M�s: "<<vet_mes[i];
	   } 
	   else if(op==3)
	   {
	    cout<<"\n Ano: "<<vet_ano[i];
	   }
	   else if(op==4)
	   {
	    cout<<"\n Temperatura: "<<vet_temp[i]<<"�C";
	   }
	   else
	   {
	   	cout<<"\n Valor Inv�lido, digite novamente";
	   }
	}
  return(0);
}  


