/*
? Desempenho em função do tamanho da entrada:

*    -> Na programação, avaliamos o desempenho sob três perspectivas principais, baseadas na posição dos dados:

         -> Pior Caso: É o maior tempo de execução sobre todas as possíveis entradas de tamanho $n$. Imagine um algoritmo que procura o 
           primeiro número par em um vetor;  o pior caso ocorre quando o número par está na última posição, ou simplesmente não existe no vetor.

         -> Melhor Caso: É o menor tempo de execução sobre todas as possíveis entradas de tamanho "n". 
           Usando o mesmo exemplo, é quando o número par já está na exata primeira posição do vetor

         -> Caso Médio: É a média dos tempos de execução de todas as entradas, o que exige um cálculo com distribuições de probabilidade.

? Análise Assintótica:

*    -> A análise assintótica tem como foco verificar o crescimento do tempo de execução quando o tamanho da entrada (n) cresce ao infinito.
    
         -> Regra: Desprezam-se as constantes e os termos de mais baixa ordem da função.
            -> Para uma entrada de n = 10
                -> 3n² (representa 73,2% do peso do processamento)

            -> Para uma entrada de n = 100
                -> 3n² (representa 96,7% do peso do processamento)

*    -> Notação Big O    
         -> Excelente: O(log2n) (busca binária)
         -> Bom: O(n) (Busca linear)
         -> Razoável: O(nlog2n) (quick sort)
         -> Perigoso (leto): O(n²) (Bubble sort)
         -> Inviável: O(2^n) e O(n!)
*/