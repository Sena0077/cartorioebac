#include <stdio.h>  // biblioteca de comunica��o com o usu�rio

#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria

# include <locale.h> // biblioteca de aloca��es de texto por regi�o

int main()
{


	int opcao=0; // definindo as vari�veis
	
	int laco=1; // o nome da vari�vel poderia ser x, ou qualquer outro
	
	for(laco=1;laco=1;)
{

	
	system("cls");

 setlocale(LC_ALL, "Portuguese");// tudo que estiver escrito aqui pertence a int main (se chama indenta��o), definindo a linguagem
 
 
 	printf("### Cart�rio da EBAC ###\n\n"); //in�cio do menu, as # � apenas visual
 	printf("Escolha a op��o desejada do menu: \n\n"); // \n serve para dar espa�o, o ";" faz executar o comando
 	printf("\t1 - registrar nomes\n");// o \t serve tamb�m para dar espa�o
 	printf("\t2 - consultar nomes\n");// � poss�vel tamb�m escrever todo o c�digo numa linha e ir dadndo \n, por�m visualmente fica mais bonito dar espa�o
 	printf("\t3 - deletar nomes\n\n"); // Final do menu,  preste aten�ao as vezes o espa�o do \n acima ou abaixo faz a diferen�a
	printf("opcao: ");
 	printf("\t Esse software pertence a marcos sena\n");
 
 scanf("%d", &opcao); // Armazenando as escolhas do usu�rio, preste aten��o nos acentos pois pode gerar erro
 
 system("cls"); // preste aten��o no ; POIS PODE GERAR ERRO SEN�O COLOC�-LO PARA FECHAR UMA SINTAXE

 
	switch (opcao)
{
	case 1:
	printf("voc� escolheu o registro de nomes!\n");
 	system ("pause");
 	break;
 	
 	case 2:
	printf("voc� escolheu consultar os nomes!\n"); // o ponto e v�rgula representa uma instru��o para o computador e toda instru��o precisa de ponto e v�rgula
	system ("pause"); 
	break;
	
	case 3:
	printf("voc� escolheu deletar nomes!\n");
 	system ("pause");
 	break;
 	
 	default:
 	printf("Essa op��o n�o est� dispon�vel!\n"); // fim da sele��o
 	system ("pause");
 	break;
}
}
}
