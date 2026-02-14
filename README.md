# Tema 2 : Super Trunfo

## Descrição

Programa em linguagem C que permite o cadastro de duas cartas do jogo Super Trunfo, realizando cálculos e comparações entre seus atributos.

---

## Funcionalidades

- Leitura dos dados de duas cartas via teclado
- Cálculo da densidade populacional
- Cálculo do PIB per capita
- Cálculo do Super Poder
- Comparação entre as cartas atributo por atributo

---

## Dados de Cada Carta

- Estado
- Código da carta
- Nome da cidade
- População (`unsigned long int`)
- Área (km2)
- PIB
- Pontos turísticos

---

## Cálculos Realizados

- Densidade Populacional = População ÷ Área  
- PIB per Capita = (PIB × 1.000.000.000) ÷ População  

O Super Poder é calculado pela soma dos atributos numéricos, considerando o inverso da densidade populacional.

---

## Comparações

- Para todos os atributos, vence o maior valor
- Para a densidade populacional, vence o menor valor
- O resultado é exibido como:
  - `1` → Carta 1 venceu
  - `0` → Carta 2 venceu

---

# Tema 3 : Nível Novato

## Descrição

Neste nível, o foco é comparar apenas duas cartas previamente cadastradas, usando um único atributo numérico definido no código. Não há escolha do atributo pelo usuário, nem menus interativos. O objetivo é praticar estruturas de decisão if e if-else.

## Funcionalidades

Leitura dos dados de duas cartas via teclado

Cálculo da densidade populacional e PIB per capita

Escolha de um único atributo para comparação (definido no código)

Determinação da carta vencedora baseada nesse atributo

Exibição clara do resultado, incluindo os valores das cartas

## Comparação de Cartas

Atributos possíveis: População, Área, PIB, Densidade Populacional, PIB per capita

Para todos os atributos exceto densidade populacional, vence o maior valor

Para densidade populacional, vence o menor valor

Exemplo de saída:

# Exemplo da Comparação de Cartas:

População: Carta 1 venceu (12.300.000 vs 6.000.000)
Área: Carta 2 venceu (1.500 km² vs 2.000 km²)
PIB: Carta 1 venceu (400 bilhões vs 350 bilhões)
Pontos Turísticos: Carta 2 venceu (20 vs 25)
Densidade Populacional: Carta 2 venceu (8.200 vs 3.000)
PIB per Capita: Carta 1 venceu (32.520 vs 29.167)
Super Poder: Carta 1 venceu (valor total)

---

## Como Compilar

```powershell
gcc super_trunfo.c -o super_trunfo
