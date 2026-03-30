"""
Aula de entrada de dados e variáveis

    *input() -->Todo dado recebido via input é do tipo string
?       --->Em Python, string é tudo que estiver entre:
            - Aspas simples;
            - Aspas duplas;
            - Aspas simples triplas;
            - Aspas duplas triplas;

    
    *Guardar dois valores (dupla atribuição)
            - valor0, valor1 = 10, 20
"""

"""
*   Print antigo (Python #2.x)
?       print("qual seu nome? ")
?       nome = input() 

?       print("qual seu nome? ")
?       idade = input()


*   Saída de dados
?       print('Seja bem vindo: %s, você tem %s' % (nome, idade))



*   Forma moderna (Python #3.x)
?       print('Qual seu nome? ')
?       nome = input()

?       print('Seja bem-vindo(a) {0}'.format(nome))

?       print('Qual a sua idade? ')
?       idade = input()

?       print('A {0}, tem {1} anos.'.format(nome, idade))



*   Forma atual (Python #3.7)
?      print('Qual seu nome? ')
?      nome = input()

?      print(f'Seja bem-vindo(a) {nome}')

?      print('Qual a sua idade? ')
?      idade = input()

?      print(f'A {nome}, tem {idade} anos.')



!   int(idade) --> cast
!       Cast é uma 'conversão' de um tipo de dado para outro tipo


?      print(f'A {nome} nasceu em {2026 - int(idade)}')
"""

#   Outra maneira de fazer porém simplificada (Python #3.7)

nome = input('Qual o seu nome? ')
idade = input('Qual a sua idade? ')  #! também é possível fazer o cast diretamente no input --> idade = int(input('Qual é sua idade? '))

print(f'Bem vindo {nome}')
print(f'A {nome}, tem {idade} e nasceu em {2026 - int(idade)}')

