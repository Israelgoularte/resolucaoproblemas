Em um dos bancos da internet, milhares de operações são realizadas todos os dias. Como certos clientes fazem negócios mais ativamente do que outros, algumas das contas bancárias ocorrem muitas vezes na lista de operações. Sua tarefa é classificar os números das contas bancárias em ordem crescente. Se uma conta aparecer duas ou mais vezes na lista, escreva o número de repetições logo após o número da conta. O formato das contas é o seguinte: 2 dígitos de controle, um código de 8 dígitos do banco, 16 dígitos identificando o proprietário (escritos em grupos de quatro dígitos), por exemplo (no final de cada linha há exatamente um espaço):

30 10103538 2222 1233 6160 0142 
Os bancos são instituições em tempo real e precisam de soluções RÁPIDAS. Se você acha que pode encarar o desafio dentro de um limite de tempo muito rigoroso, vá em frente! Um algoritmo de classificação bem projetado em uma linguagem rápida provavelmente terá sucesso.

Entrada
t [o número de testes <= 5 ]
n [o número de contas <= 100 000 ]
[lista de contas]
[linha em branco]
[próximos casos de teste]

Saída
[lista ordenada de contas com o número de contas repetidas]
[linha vazia]
[outros resultados]

Exemplo
Entradacópia	Saídacópia
2
6
03 10103538 2222 1233 6160 0142
03 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0142
30 10103538 2222 1233 6160 0141
30 10103538 2222 1233 6160 0142

5
30 10103538 2222 1233 6160 0144
30 10103538 2222 1233 6160 0142
30 10103538 2222 1233 6160 0145
30 10103538 2222 1233 6160 0146
30 10103538 2222 1233 6160 0143

Saídacópia
03 10103538 2222 1233 6160 0141 1
03 10103538 2222 1233 6160 0142 1
30 10103538 2222 1233 6160 0141 2
30 10103538 2222 1233 6160 0142 2

30 10103538 2222 1233 6160 0142 1
30 10103538 2222 1233 6160 0143 1
30 10103538 2222 1233 6160 0144 1
30 10103538 2222 1233 6160 0145 1
30 10103538 2222 1233 6160 0146 1
