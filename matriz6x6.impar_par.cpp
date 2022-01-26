#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;

 

//função para fazer funcionar o gotoxy
void gotoxy(int x, int y)
{
HANDLE hOut;
COORD Position;
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
Position.X = x;
Position.Y = y;
SetConsoleCursorPosition(hOut,Position);
}

 

//=========================================================

 


int const TAM = 6;//foi utilizado somente uma constante - para matriz quadrada

 

int  vet[TAM],i,j,col,lin,impar,par; 

 

main()
{
	setlocale(LC_ALL, "Portuguese");
    lin=5;
    // posiciona o cursor na  coluna e linha indicados no gotoxy
    gotoxy(19,2);
    cout<<" Matriz ";
    
    srand(time(NULL));
    
    //leitura da matriz
    for(i=0;i<TAM;i++)  // leitura da linha da matriz         
     { col=10; // posiciona o cursor na coluna desejada
        for (j=0;j<TAM;j++) // leitura da coluna da matriz
        {
            
          gotoxy(col,lin);  // para posicionar o cursor para ler o elemento da matriz
          vet[i] =(rand()%30)+1;
          col=col+5;
          cout<<vet[i];
          if (vet[i]%2!=0)
          impar++;
          if (vet[i]%2==0)
          par++;
          
          //col=col+2; // dá 6 espaços entre cada elemento da matriz
         } 
         
       lin=lin+2; //pular uma linha
           
       
       }
     
       
       cout<<"\n\n Números ímpares:"<<impar;
       cout<<"\n Números pares:"<<par;
       
gotoxy(8,20);
 system("PAUSE"); // dá uma pausa na tela
     
}











//if (numero%2==0)
 // {
      //cout<<"\n\n ESSE NÚMERO É PAR";
 // }
 // else
 // {
  //    cout<<"\n\n ESSE NÚMERO É ÍMPAR";
 // }
