#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <conio.h>
using namespace std; // OBRIGATÓRIO
int escolha;
float temp;
main()
{
setlocale(LC_ALL, "Portuguese");
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
cout<<"\n\n\n";
}
