#include <iostream>
#include <stdlib.h> 
#include <locale.h>
#include <stdio.h>

using namespace std;

	int n, vote1, vote2, vote3, vote4, vote5, vote6, vote7;
    int nvote1, pare, nvote2, nvote3, nvote4, nvote5, nvote6;
    double ntotal, total; 

int main( ){
    setlocale(LC_ALL, "Portuguese");
   
    
   
	pare = 1; 
	n = 0;
	
	while (pare == 1) {
	
	cout << "Digite o numero do candidato em que deseja votar\n";
    cout << "Tecle 1 para Jair Messias - PSDB.\n";
    cout << "Tecle 2 para Lula - PT.\n";
    cout << "Tecle 3 para Marina - Partido verde.\n";
    cout << "Tecle 4 para Joao - Partido progressista.\n";
    cout << "Tecle 5 para Eneias - Prona.\n";
    cout << "Tecle 6 se est� indeciso \n";
    cout << "Tecle 7 para voto nulo ou branco \n";
    cin >> n;
	system("cls");
	voltar:	
	{ if (n!=0)
	{ 
		
	
{   
    		
		{
			
			{if ((n > -1) && (n < 9))  
	
	{
		
		{
          if (n == 1){
        vote1 = vote1 + 1;
        }
          if (n == 2){
        vote2 = vote2 + 1;
        }
          if (n == 3){
        vote3 = vote3 + 1;
        }
          if (n == 4){
        vote4 = vote4 + 1;
        }
          if (n == 5){
        vote5 = vote5 + 1;
        }
          if (n == 6){
        vote6 = vote6 + 1;

        } if (n == 7){
             vote7 = vote7 + 1;}
		}
		
	}
	else
	{
			
	  
	 cout << " Op��o invalida, digite novamente.\n";
	 	 	 cin >> n;
	 	 	 system("cls");
              goto voltar;  }
		   	
        
		
	}
		}
		}
	
	
{

    
	    cout << "Obrigado pela opniao.\n";
        cout << "Agora digite o numero do canditado em que jamais votaria.\n";
        cout << "Caso tenha duvida sobre isto, digite 6.\n";
        cin >> n;
  	    system("cls");

	


{voltar2:
	
{if ((n >= 0) && (n <= 6)) 
	
	{
		
		{
          if (n == 1){
        nvote1 = nvote1 + 1;
        }
          if (n == 2){
        nvote2 = nvote2 + 1;
        }
          if (n == 3){
        nvote3 = nvote3 + 1;
        }
          if (n == 4){
        nvote4 = nvote4 + 1;
        }
          if (n == 5){
        nvote5 = nvote5 + 1;
        }
          if (n == 6){
        nvote6 = nvote6 + 1; 
		}

		}
		
	}
	
	
    else
        {
        
            cout << " Op��o invalida, digite novamente.\n";
              cin >> n; 
			  system("cls");
			  goto voltar2;}
              

}
}
}

{

	
		cout << "Pesquisa concluida com sucesso. \n";
        cout << "Tecle 0 para mostrar os resultados \n";
		cout << "Tecle qualquer tecla para uma nova pesquisa \n";
		cin >> n; 
		system("cls");
		
		{
			if (n==0)
			{
			pare = 0;	
			}
		}

		}

}	
	else
	
	{
		pare == 0;
	}
	
	}
	}
	
{
	
	total =  vote1 + vote2 + vote3 + vote4 + vote5 + vote6 + vote7;
    ntotal =  nvote1 + nvote2 + nvote3 + nvote4 + nvote5 + nvote6;
    
    cout << "VOTA��O DE APROVADOS."<< endl;
    
    cout << "\n";
    cout << "\n";

	cout << "Jair obteve " << ((vote1 * 100)/total) << " % dos votos."<< endl;
    cout << "Lula obteve " << ((vote2 * 100)/total) << " % dos votos."<< endl;
    cout << "Marina obteve " << ((vote3 * 100)/total) << " % dos votos."<< endl;
    cout << "Jo�o obteve " << ((vote4 * 100)/total) << " % dos votos."<< endl;
    cout << "Eneias obteve " << ((vote5 * 100)/total) << " % dos votos."<< endl;
    cout << vote6 << " Pessoa(s) indecisas: "<<((vote6 * 100)/total)<<" % dos votos." <<endl;
    cout << vote7 << " Pessoa(s) votaram nulo ou em branco: " <<((vote7 * 100)/total)<<" % dos votos."<< endl;

    cout << "\n";
    cout << "\n";
    
    cout << "VOTA��O DE REPROVADOS."<< endl;
    
    cout << "\n";
    cout << "\n";

    cout << "Jair obteve " << ((nvote1 * 100)/ntotal) << " % de reprova��o."<< endl;
    cout << "Lula ganhou " << ((nvote2 * 100)/ntotal) << " % de reprova��o."<< endl;
    cout << "Marina ganhou " << ((nvote3 * 100)/ntotal) << " % de reprova��o."<< endl;
    cout << "Jo�o ganhou " << ((nvote4 * 100)/ntotal) << " % de reprova��o."<< endl;
    cout << "Eneias ganhou " << ((nvote5 * 100)/ntotal) << " % de reprova��o."<< endl;
    cout << nvote6 << " Pessoa(s) que n�o souberam opinar: "<<((nvote6 * 100)/ntotal)<<" % dos votos."<< endl;
		
	}



}
	
	

	
