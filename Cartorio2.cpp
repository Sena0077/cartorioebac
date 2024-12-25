#include <stdio.h>  // biblioteca de comunicação com o usuário

#include <stdlib.h> // biblioteca de alocação de espaço em memória

# include <locale.h> // biblioteca de alocações de texto por região

int main()
{


	int opcao=0; // definindo as variáveis
	
	int laco=1; // o nome da variável poderia ser x, ou qualquer outro
	
	for(laco=1;laco=1;)
{

	
	system("cls");

 setlocale(LC_ALL, "Portuguese");// tudo que estiver escrito aqui pertence a int main (se chama indentação), definindo a linguagem
 
 
 	printf("### Cartório da EBAC ###\n\n"); //início do menu, as # é apenas visual
 	printf("Escolha a opção desejada do menu: \n\n"); // \n serve para dar espaço, o ";" faz executar o comando
 	printf("\t1 - registrar nomes\n");// o \t serve também para dar espaço
 	printf("\t2 - consultar nomes\n");// é possível também escrever todo o código numa linha e ir dadndo \n, porém visualmente fica mais bonito dar espaço
 	printf("\t3 - deletar nomes\n\n"); // Final do menu,  preste atençao as vezes o espaço do \n acima ou abaixo faz a diferença
	printf("opcao: ");
 	printf("\t Esse software pertence a marcos sena\n");
 
 scanf("%d", &opcao); // Armazenando as escolhas do usuário, preste atenção nos acentos pois pode gerar erro
 
 system("cls"); // preste atenção no ; POIS PODE GERAR ERRO SENÃO COLOCÁ-LO PARA FECHAR UMA SINTAXE

 
	switch (opcao)
{
	case 1:
	printf("você escolheu o registro de nomes!\n");
 	system ("pause");
 	break;
 	
 	case 2:
	printf("você escolheu consultar os nomes!\n"); // o ponto e vírgula representa uma instrução para o computador e toda instrução precisa de ponto e vírgula
	system ("pause"); 
	break;
	
	case 3:
	printf("você escolheu deletar nomes!\n");
 	system ("pause");
 	break;
 	
 	default:
 	printf("Essa opção não está disponível!\n"); // fim da seleção
 	system ("pause");
 	break;
}
}
}
