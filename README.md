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

# Tema 3 : Super Trunfo

## Nivel Novato

# Descricao

Comparação de duas cartas utilizando apenas um atributo numérico definido no código, sem interação do usuário. O foco é o uso de if e if-else.

# Funcionalidades

Leitura de duas cartas via teclado

Cálculo da densidade populacional e PIB per capita

Comparação de um único atributo

Exibição do vencedor

Regras

Maior valor vence

Para densidade populacional, vence o menor valor

## Nivel Intermediario : Menu Interativo

# Descricao

Comparação de duas cartas com menu interativo, permitindo ao usuário escolher o atributo de comparação usando switch.

# Funcionalidades

Menu interativo para escolha do atributo

Comparação com if-else

Regra especial para densidade populacional

Tratamento de opção inválida

## Nivel Avancado : Comparacao com Dois Atributos

# Descricao

Desafio final do projeto. Permite a escolha de dois atributos diferentes, com menus dinâmicos, soma dos atributos e uso do operador ternário para determinar o vencedor.

# Funcionalidades

Escolha de dois atributos numéricos distintos

Menu dinâmico que impede repetição de atributos

Comparação individual dos atributos

Soma dos atributos para cada carta

Tratamento de empate

Resultado final claro e organizado

# Regras

Maior valor vence

Para densidade populacional, vence o menor valor

Em caso de soma igual, o resultado é Empate

## Como Compilar

# Tema 2:

gcc super_trunfo.c -o super_trunfo

# Tema 3:

# Nível Novato:

gcc super_trunfo_novato.c -o super_trunfo_novato

# Nível Intermediario:

gcc super_trunfo_intermediario.c -o super_trunfo_intermediario

# Nível Avançado:

gcc super_trunfo_avancado.c -o avancado