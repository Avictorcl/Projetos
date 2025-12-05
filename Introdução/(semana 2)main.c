//  Autor: Andrés Victor Callegari Lorenzo (24104611)
//
//  Data: 29/08/26
//
//  Descrição do problema: Mostrar a média da soma de 3 notas
//
//  Algoritmo informal:
//  1: Início
//
//  2: Solicitar a primeira nota:
//
//      Mostre a mensagem: "Digite a primeira nota:"
//
//      Leia e guarde o valor digitado (nota1).
//
//  3: Solicitar a segunda nota:
//
//      Mostre a mensagem: "Digite a segunda nota:"
//
//      Leia e guarde o valor digitado (nota2).
//
//  4: Solicitar a terceira nota:
//
//      Mostre a mensagem: "Digite a terceira nota:"
//
//      Leia e guarde o valor digitado (nota3).
//
//  5: Calcular a média:
//
//      Some as três notas: soma = nota1 + nota2 + nota3.
//
//      Divida o resultado da soma por 3: media = soma / 3.
//
//  6: Mostrar o resultado:
//
//      Mostre a mensagem: "A média das notas é: " seguida do valor da media.
//
//  7: Fim
//
//
//  Teste de Mesa:
//
//  Passo (Algoritmo):	Ação:		            	Variável modificada:			Valor da Variável:		Saída:
// 
//  1			        Início		            	nota 1, nota 2, nota 3,			indefinido			      -
//						                            resultado
//  
//
//  2			        printf("escreva a 	                  -				               -               	escreva a 
//			            primeira nota\n");										                            primeira nota
//
//  2			        scanf("%i", &nota1);	            nota1		                   7			           -
//
//  3			        printf("escreva a 		              -				               -                escreva a
//			            segunda nota\n");		  				      				                        segunda nota 
//															
//  3		        	scanf("%i", &nota2);	           	nota2			       	       8				       -
//
//  4			        printf("escreva a 		              -				               -                escreva a
//		            	terceira nota\n");		  				      				                        terceira nota 
//															
//  4			        scanf("%i", &nota3);		        nota3				           9				       -
//
//  5		        	resultado = 
//		            	(nota1+nota2+nota3)/3;		        resultado			          8.00			           -
//
//  6			        printf("%.2f", resultado);	           -				           -                     8.00
//
//  7			        Fim (return:0;)
//

#include <stdio.h>

int main()
{

int nota1, nota2, nota3;
float resultado;

        scanf("%i", &nota1);
    
        scanf("%i", &nota2);
        
        scanf("%i", &nota3);
        
        resultado = (nota1+nota2+nota3)/3.0;
        
        //utilizarei o "%.1f" para reduzir o número de casas decimais apresentadas na resposta do programa.
        printf("%.1f", resultado);

    return 0;
}
