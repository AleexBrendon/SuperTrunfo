# Tema 2 : Super Trunfo

## Descrição do Projeto

Este projeto consiste na criação de um programa em linguagem C que permite ao usuário cadastrar duas cartas do jogo Super Trunfo.

O programa solicita ao usuário os dados de cada carta, armazena as informações em variáveis apropriadas e, ao final, exibe os dados cadastrados de forma organizada e legível.

---

## Objetivo

Implementar:

- Leitura de dados via teclado
- Armazenamento em variáveis adequadas
- Exibição formatada das informações

Sem utilizar estruturas de repetição (for, while) ou decisão (if, else).

---

## Dados Solicitados para Cada Carta

Para cada carta, o usuário deve informar:

- Estado (char)
- Código da Carta (string)
- Nome da Cidade (string)
- População (int)
- Área em km² (float)
- PIB (float)
- Número de Pontos Turísticos (int)

---

## Funcionamento do Programa

1. O programa solicita os dados da Carta 1.
2. Em seguida, solicita os dados da Carta 2.
3. Após o cadastro das duas cartas, o programa exibe todas as informações inseridas.
4. Cada informação é apresentada em uma linha separada para facilitar a leitura.

---

## Requisitos Funcionais Atendidos

✔ Leitura correta de dados via teclado  
✔ Armazenamento em variáveis apropriadas  
✔ Exibição organizada e legível  

---

## Requisitos Não Funcionais Atendidos

Usabilidade:
O programa possui mensagens claras orientando o usuário durante o cadastro.

Legibilidade:
O código está indentado, comentado e utiliza nomes de variáveis significativos.

Corretude:
O programa compila e executa corretamente sem erros.

---

## Nivel Aventureiro

### Novas Funcionalidades

Além das funcionalidades do nível novato, o programa passa a:

- Calcular a densidade populacional (população / área)
- Calcular o PIB per capita (PIB / população)
- Exibir os valores calculados com duas casas decimais

### Cálculos Realizados

- Densidade Populacional = População ÷ Área
- PIB per Capita = PIB ÷ População

---

### Proposta

No nível aventureiro, o programa poderá ser expandido para incluir:

- Comparação entre cartas
- Identificação da carta vencedora por atributo
- Cálculo de super poder
- Uso de estruturas de decisão e repetição
- Organização dos dados com estruturas (`struct`)

⚠️ **Este nível não está implementado neste código**, apenas descrito como evolução futura.

---

## Requisitos Não Funcionais Atendidos

- Usabilidade: instruções claras ao usuário
- Legibilidade: código bem indentado e comentado
- Corretude: compilação e execução sem erros
- Eficiência: cálculos simples e diretos

---

## Como Compilar

```powershell
gcc super_trunfo_tema2_intermediario.c -o super_trunfo

