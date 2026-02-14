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

## Como Compilar

```powershell
gcc super_trunfo.c -o super_trunfo
