#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //responsavel por cadastrar os usuarios no sistema
{
	//inicio da cria��o de variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//inicio da cria��o de variaveis/strings
	
	printf("Digite o cpf a ser cadastrado: "); //coletando as infroma��es do usuario
	scanf("%s", cpf); // "%s" refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo, "w" significa escrever
	fprintf(file,cpf); // salva o valor da varialvel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //O "a" siginifica atualiza��o
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // O "r" serve para ler o arquivo
	
	if(file == NULL)
	{
		printf("N�o Foi possivel abrir o arquivo, n�o localizado!.\n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}

	system("pause");
	fclose(file);


}

int deletar()
{

char cpf[40];

setlocale(LC_ALL,"portuguese");


printf("Digite o CPF a ser deletado: ");

scanf("%s",cpf);


FILE *file;

  file = fopen(cpf, "r"); // Tenta abrir o arquivo para leitura

if (file == NULL) 

  {

    printf("O usu�rio n�o existe!\n");

    system("pause");

  } 

else

  {

    fclose(file); // Fecha o arquivo, pois ele existe

    remove(cpf); // Agora voc� pode remover o arquivo

    printf("Usu�rio deletado!\n");

    system("pause");

  }

}



int main()
    {
    int opcao=0; //Definindo vari�veis
    int laco=1;
    char senhadigitada[10]="a";
    int comparacao;
    
	printf("###Cart�rio da EBAC###\n\n");
	printf("Login de administrador!\n\nDigite a sua senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
		system ("cls");
    	for(laco=1;laco=1;)
		{
    	
			system("cls"); // responsavel por limpar a tela

			setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
			printf("###Cart�rio da EBAC###\n\n"); //inicio do menu
			printf("Escolha a op��o desejada do menu: \n\n");
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n");
			printf("\t4 - Sair do sistema\n\n");
			printf("Op��o: "); //fim do menu
	
			scanf("%d", &opcao); //armazenando a escolha do usuario
	
			system("cls");
		
		
			switch(opcao) // Inicio da sele��o do menu
			{
				case 1:
				registro(); //chamada da fun��o
				break;
			
				case 2:
				consulta();
				break;
			
				case 3:
				deletar();
				break;
			
				case 4:
				printf("Obrigado por utilizar nosso sistema!\n");
				return 0;
				break;
			
				default:
				printf("Essa op��o n�o esta disponivel\n");
				system("pause");
				break;	
			
			}
		}	
	}
	
	else
		printf("Senha incorreta!");
}
