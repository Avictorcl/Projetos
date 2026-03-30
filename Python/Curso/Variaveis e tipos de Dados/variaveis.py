"""
Tipos de variáveis:

?   -> Tipo Numérico
TODOS   --> Tipos de variáveis e Operações Matemáticas:

?           -> Tipo Numérico (Nativo do Python)
TODOS           --> Executa funções com números e devolve resultados numéricos.

*               Exemplos:
!               Soma/Subtração: 
                    5 + 5 = 10 || 5 - 5 = 0
!               Multiplicação/Divisão:
                    5 * 10 = 50 || 5 / 2 = 2.5 (devolve o valor em float) 
                    int(5/2) = 2 ou 5 // 2 = 2 (devolve o resultado em valor inteiro)
                    5 % 2 = 1 (devolve o resto de divisão / módulo)
!               Exponenciação:
                    5 ** 2 = 25 (eleva a base à potência indicada)
                
*               Exemplos de Funções Integradas Adicionais (Built-in)
!               Valor Absoluto: 
                    abs(-10) = 10 (remove o sinal negativo)
!               Arredondamento:
                    round(3.14159, 2) = 3.14 (arredonda para 2 casas decimais)
!               Máximo e Mínimo: 
                    max(1, 5, 9) = 9 || min(1, 5, 9) = 1


?           -> Biblioteca 'math' (Requer: import math)
TODOS           --> Executa cálculos matemáticos complexos e fornece constantes.

*               Exemplos de Constantes:
!               Pi:
                    math.pi = 3.141592653589793
!               Número de Euler: 
                    math.e = 2.718281828459045
                
*               Exemplos de Funções:
!               Raiz Quadrada: 
                    math.sqrt(25) = 5.0
!               Arredondar para Cima: 
                    math.ceil(4.2) = 5
!               Arredondar para Baixo: 
                    math.floor(4.8) = 4
!               Exponenciação (Float): 
                    math.pow(5, 2) = 25.0
!               Fatorial: 
                    math.factorial(5) = 120 (calcula 5 * 4 * 3 * 2 * 1)
!               Valor Truncado: 
                    math.trunc(5.9) = 5 (corta a parte decimal sem arredondar)
                
*               Exemplos Funções Trigonométricas e Logarítmicas:
!               Seno: 
                    math.sin(math.radians(90)) = 1.0
!               Cosseno: 
                    math.cos(math.radians(0)) = 1.0
!               Logaritmo Natural: 
                    math.log(10) = 2.302... (base 'e')
!               Logaritmo Base 10: 
                    math.log10(100) = 2.0


?   -> Tipo Float

?       -> Tipo Float (Ponto Flutuante / Números Decimais)

TODOS       --> Representa números reais com casas decimais. O sistema utiliza o ponto (.) como separador.

*               Criação e Conversão:
!               Declaração Direta:
                    pi = 3.14 || saldo = 150.50
!               Conversão de Inteiro (int) para Float:
                    float(5) = 5.0 (Adiciona a casa decimal nula)
!               Conversão de Texto (string) para Float:
                    float("4.2") = 4.2 (Transforma o texto numérico em valor operável)
!               Notação Científica (Exponencial):
                    2.5e3 = 2500.0 (Equivale a 2.5 * 10^3) || 1.5e-2 = 0.015

*               Peculiaridades e Comportamentos:
!               Precisão de Hardware (Imprecisão Binária):
                    0.1 + 0.2 = 0.30000000000000004 (Limitação natural da arquitetura de ponto flutuante do computador)
!               Divisão Padrão (True Division):
                    Qualquer operação com a barra simples '/' sempre devolve um float. Ex: 10 / 2 = 5.0

*               Métodos Nativos Úteis (Built-in):
!               Verificar se o valor equivale a um inteiro sem frações:
                    (3.0).is_integer() = True || (3.5).is_integer() = False
!               Arredondamento de precisão (round):
                    round(3.14159, 2) = 3.14 (Arredonda e limita a 2 casas decimais)

-> Tipo Booleano
-> Tipo String
"""

"""

"""
