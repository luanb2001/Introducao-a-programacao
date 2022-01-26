/*
Verificar se a data é válida
*/


#include<iostream>

int valida_data(int dia,int mes,int ano);
int dia,mes,ano,result;

main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese");
      cout<<"\n VALIDANDO A DATA  ";
      cout<<"\n\n\n";
      do{
	     cout<<"\n Informe o dia:  ";
	     cin>>dia;
	     if ((dia<1) || (dia>31))
	        {
	          cout<<" \n\n\Dia Errado... Tente outra vez...";
	          cout<<"\n\n Informe o dia:  ";
	          cin>>dia;
			}
	  }while ((dia<1) || (dia>31));
	     
     do{
	     cout<<"\n Informe o mês:  ";
	     cin>>mes;
	     if ((mes<1) || (mes>12))
	        {
	          cout<<" \n\n\Mês Errado... Tente outra vez...";
	          cout<<"\n\n Informe o mês:  ";
	          cin>>mes;
			}
	  }while ((mes<1) || (mes>12));
	 
      cout<<"\n Informe o ano:  ";
      cin>>ano;
      result = valida_data(dia,mes,ano);
      if(result==1){
	     cout<<"\n A data informada: " <<dia<<" / "<<mes <<" / " << ano;
		 cout<<"\n A data informada É VÁLIDA !!" ;
       }
       if(result==0){
	     cout<<"\n A data informada: " <<dia<<" / "<<mes <<" / " << ano;
		 cout<<"\n A data informada NÃO É VÁLIDA !!" ;
       }
      cout<<"\n\n\n\n\n ";
  
}

int valida_data(int dia,int mes,int ano)
{
     if ((dia>=1 && dia<=31) && (mes>=1 && mes<=12) && (ano>=1900 && ano<=2100)) //verifica se os números são válidos
        {
            if ((dia == 29 && mes == 2) && ((ano%4)== 0)&& ((ano%100)!=0) ||((ano%400)==0)) //verifica se o ano e bissexto
            {
               return 1;
            }
            if (dia<=28 && mes==2) //verifica o mes de feveireiro
            {
                return 1;
            }
            if ((dia<=30) && (mes==4 || mes==6 || mes==9 || mes==11)) //verifica os meses de 30 dias
            {
                return 1;
            }
            if ((dia<=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
            {
                return 1;
            }
            else
            {
                return 0;
            }
      }
       else
           {
                return 1;
           }
}
