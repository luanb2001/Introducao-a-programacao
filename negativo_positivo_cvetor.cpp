#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10; // Usar constante para definir o tamanho do vetor
int num[TAM];
int i,positivo=0,negativo=0;
main()
{
      using namespace std;
      setlocale(LC_ALL, "Portuguese");
      cout<<"\n Programa PARES e �MPARES.";
      cout<<"\n Informe "<<TAM<<" n�meros. \n";
    
      for(i=0;i<TAM;i++) // leitura do vetor usando a constante
      {
          cout<<"\n Informe o "<<i+1<<"o numero: "; //i+1 para deixar o usu�rio feliz
          cin>>num[i];
      }
    
     cout<<"\n\n Numeros Positivos: ";
      for(i=0;i<TAM;i++) // Verificando e mostrando os N�meros Pares
      {
          if(num[i]>0)
              cout<<"\n "<<num[i];
      }
    
     
      cout<<"\n\n Numeros Negativos: "; // Verificando e mostrando os N�meros �mpares
      for(i=0;i<TAM;i++){
          if(num[i]<0)
              cout<<"\n "<<num[i];
      }
    
      cout<<"\n\n ";
    
}
