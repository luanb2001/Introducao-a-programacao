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
 cout<<"\n Digite a quantidade de dias que você deseja: ";
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
 cout<<" \n\t\a\a  SWITCH DE FUNÇÕES  ";
 cout<<" \n======================================  ";
 cout<<"\n Escolha uma opção: ";
 cout<<"\n [1] - Faça uma função que receba o vetor de temperaturas e calcule e retorne ao programa a média das temperaturas.";
 cout<<"\n [2] - Faça uma função que receba o vetor de temperaturas e calcule e retorne ao programa a temperatura mais alta.";
 cout<<"\n [3] - Faça uma função que receba o vetor de temperaturas e calcule e retorne ao programa a temperatura mais baixa.";
 cout<<"\n [4] - Faça uma função que calcule e retorne ao programa a quantidade de temperaturas negativas que foram cadastradas";
 cout<<"\n [5] - Faça uma função que calcule e retorne ao programa a quantidade de temperaturas positivas que foram cadastradas";
 cout<<"\n [6] - Faça uma função que imprima todas as temperaturas do dia 15 do mês 6";
 cout<<"\n [7] - Faça uma função que verifique em qual ano houve a temperatura mais baixa";
 cout<<"\n [8] - Faça uma função que verifique em qual mês houve a temperatura mais alta";
 cout<<"\n [9] - Faça uma função que determine quantos dias a temperatura ficou abaixo da média de todas as temperaturas";
 cout<<"\n [10] - Faça uma função que imprima todos os vetores lidos";
 cout<<"\n [11] - Faça uma função que imprima o vetor desejado";
 cout<<"\n [12] - FIM";
 cout<<"\n Sua escolha é: ";
 cin>>escolha;

 switch (escolha) 
 {
    case 1:{
             system ("color 5");
             result=tempe(vet_temp,qntd);// Passando o Vetor para a Função
             cout<<"\n A Média de temperaturas é:  "<<result<<" graus";
             getch();
             break;
            }
    case 2:{
             system ("color 5");
             result=temp2(vet_temp,qntd);// Passando o Vetor para a Função
             cout<<"\n A temperatura mais alta é: "<<result<<" graus";
             getch();
             break;
            }
    case 3:{
             system ("color 5");
             result=temp3(vet_temp,qntd);// Passando o Vetor para a Função
             cout<<"\n A temperatura mais baixa é: "<<result<<" graus";
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
             cout<<"\n\t ======== VETOR DE MÊS COM A TEMPERATURA MAIS ALTA ========"; 
             result=mes_temp(vet_temp,vet_mes,qntd);
             cout<<"\n\n Mês com a temperatura mais alta: "<<result;
             getch();
             break;
            }
    case 9:{ 
	         system ("cls");
             cout<<"\n\t ======== TEMPERATURAS ABAIXO DA MÉDIA ========";
			 media=tempe(vet_temp,qntd);
             result=dias_temp(vet_temp,vet_mes,qntd,media);
             cout<<"\n\n Dias que a temperatura ficou abaixo da média: "<<result;
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
             cout<<"\n\n Escolha Inválida, tente novamente...";
             getch();
             break;
            }                     
 }
}while (escolha != 12);
cout<<"\n\n\n";
}
//==================================
//Área das funções
//==================================

//==================================
//função Dias
//==================================
void dias(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o dia: ";
  cin>>dia;
  if(dia<1 || dia>30) 
   {
    cout<<" *Digite um dia válido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_dia[dia_atual] = dia;
}
//==================================
//função Mês
//==================================
void meses(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o mês: ";
  cin>>mes;
  if(mes<1 || mes>12) 
   {
    cout<<" *Digite um mês válido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_mes[dia_atual] = mes;
}
//==================================
//função Ano
//==================================
void anos(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite o ano: ";
  cin>>ano;
  if(ano<1850 || ano>2021) 
   {
    cout<<" *Digite um ano válido \n";
   } 
  else
   {
    break;
   }  
  }
  vet_ano[dia_atual] = ano;
}
//==================================
//função Temperatura
//==================================
void temperatura(int dia_atual)
{
  for(;;) 
  {
  cout<<"\n Digite a temperatura: ";
  cin>>temp;
  if(temp<-50 || temp>65) 
   {
    cout<<" *Digite uma temperatura válida \n";
   } 
  else
   {
    break;
   }  
  }
  vet_temp[dia_atual] = temp;
}
//===========================================
//função para imprimir todos os vetores lidos
//===========================================
void vetores_lidos(float vet_temp[], int vet_dia[],int vet_mes[],int vet_ano[],int qntd)
{
	for(int i=0;i<qntd;i++)
	{
	 cout<<"\n\n "<<vet_dia[i]<<"/"<<vet_mes[i]<<"/"<<vet_ano[i]<<": "<<vet_temp[i]<<" graus.";
	}
}
//=====================================
//função para imprimir o vetor desejado
//=====================================
float vetor_desejado(float vet_temp[], int vet_dia[], int vet_ano[], int vet_mes[], int qntd)
{	
int op;
cout<<"\n (1)Dia";
cout<<"\n (2)Mês"; 
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
	    cout<<"\n Mês: "<<vet_mes[i];
	   } 
	   else if(op==3)
	   {
	    cout<<"\n Ano: "<<vet_ano[i];
	   }
	   else if(op==4)
	   {
	    cout<<"\n Temperatura: "<<vet_temp[i]<<"°C";
	   }
	   else
	   {
	   	cout<<"\n Valor Inválido, digite novamente";
	   }
	}
  return(0);
}  


