#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//===============================
//fun��o de m�dia de temperaturas
//===============================
float tempe(float vet_temp[],int qntd)
 {
      float acumula, med=0;
      for(int i=0;i<qntd;i++)
      { acumula=acumula+vet_temp[i];
      }
      med=acumula/qntd;
      return(med);
}
//============================
//fun��o temperatura mais alta
//============================
float temp2(float vet_temp[],int qntd)
 {
      float maior;
      for(int i=0;i<qntd;i++)
      {if (vet_temp[i] > maior)
          maior = vet_temp[i];
      }
          
      return(maior);
}
//=============================
//fun��o temperatura mais baixa
//=============================
float temp3(float vet_temp[],int qntd)
 {
      float menor=66;
      for(int i=0;i<qntd;i++)
      {if (vet_temp[i] < menor)
          menor = vet_temp[i];
      }
          
      return(menor);
}
//==================================
//fun��o vetor_temperatura_negativa
//==================================
float temp4(float vet_temp[], int qntd)
{
	  int j=0;
      for(int i=0;i<qntd;i++)
      { 
       if(vet_temp[i] < 0)
	   j = j+1;
      }
      return(j);
}
//==================================
//fun��o vetor_temperatura_positiva
//==================================
float temp5(float vet_temp[], int qntd)
{
	  int j=0;
      for(int i=0;i<qntd;i++)
      { 
       if(vet_temp[i] >= 0)
	   j = j+1;
      }
      return(j);
}
//================================================
//fun��o de qual ano teve a temperatura mais baixa
//================================================
float ano_temp(float vet_temp[], int vet_ano[], int qntd)
{
     float menor=66;
     int ano, j=0;
     for(int i=0;i<qntd;i++)
     {if (vet_temp[i] < menor)
         ano=vet_ano[j]; 
         j=j+1;
         menor = vet_temp[i];
     }
          
      return(ano);
}
//===============================================
//fun��o de qual m�s teve a temperatura mais alta
//===============================================
float mes_temp(float vet_temp[],int vet_mes[], int qntd)
{
     float maior=0;
     int mes, j=0;
     for(int i=0;i<qntd;i++)
     {if (vet_temp[i] > maior)
         mes=vet_mes[j]; 
         j=j+1;
         maior = vet_temp[i];
     }
          
      return(mes);
}
//===================================
//fun��o temperatura_abaixo_da_m�dia
//===================================
float dias_temp(float vet_temp[], int vet_dia[], int qntd, float med)
{
	int j=0;
    for(int i=0;i<qntd;i++)
    	{ 
		if(vet_temp[i] < med)
		j++;
    	} 
return(j);
}
//===============================================
//fun��o todas as temperaturas do dia 15 do m�s 6
//===============================================
void meiodoano(float vet_temp[], int vet_dia[],int vet_mes[],int vet_ano[], int qntd)
{   
    for(int i=0;i<qntd;i++)
	if (vet_dia[i]==15 && vet_mes[i]==6)
	  {
	  	cout<<"\n\n Ano de "<<vet_ano[i]<<": "<<vet_temp[i]<<" graus.";
	  }
	
}



