#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //responsavel por cadastrar os usuarios no sistema
{
	//inicio da criação de variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//inicio da criação de variaveis/strings
	
	printf("Digite o cpf a ser cadastrado: "); //coletando as infromações do usuario
	scanf("%s", cpf); // "%s" refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo, "w" significa escrever
	fprintf(file,cpf); // salva o valor da varialvel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //O "a" siginifica atualização
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
		printf("Não Foi possivel abrir o arquivo, não localizado!.\n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
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

    printf("O usuário não existe!\n");

    system("pause");

  } 

else

  {

    fclose(file); // Fecha o arquivo, pois ele existe

    remove(cpf); // Agora você pode remover o arquivo

    printf("Usuário deletado!\n");

    system("pause");

  }

}



int main()
    {
    int opcao=0; //Definindo variáveis
    int laco=1;
    char senhadigitada[10]="a";
    int comparacao;
    
	printf("###Cartório da EBAC###\n\n");
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
	
			printf("###Cartório da EBAC###\n\n"); //inicio do menu
			printf("Escolha a opção desejada do menu: \n\n");
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n");
			printf("\t4 - Sair do sistema\n\n");
			printf("Opção: "); //fim do menu
	
			scanf("%d", &opcao); //armazenando a escolha do usuario
	
			system("cls");
		
		
			switch(opcao) // Inicio da seleção do menu
			{
				case 1:
				registro(); //chamada da função
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
				printf("Essa opção não esta disponivel\n");
				system("pause");
				break;	
			
			}
		}	
	}
	
	else
		printf("Senha incorreta!");
}
