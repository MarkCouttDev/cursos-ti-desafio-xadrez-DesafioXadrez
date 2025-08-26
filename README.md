# ♟️ Simulação de Movimentos de Peças de Xadrez em C - Nível Mestre

Projeto desenvolvido como parte do **Desafio de Programação - Nível Mestre**, com foco na aplicação prática de **recursividade** e **loops complexos** na linguagem C. O objetivo é simular os movimentos de quatro peças do jogo de xadrez: **Torre, Bispo, Rainha e Cavalo**, utilizando técnicas avançadas de programação.

---

## 👨‍🎓 Aluno Desenvolvedor
**Marcos Augusto do Couto**

---

## 🎯 Objetivo

Aprimorar o programa anterior, substituindo estruturas simples por abordagens avançadas:

- **Torre**: movimento horizontal (direita) usando **função recursiva**  
- **Bispo**: movimento diagonal (cima e direita) usando **função recursiva + loops aninhados**  
- **Rainha**: movimento horizontal (esquerda) usando **função recursiva**  
- **Cavalo**: movimento em "L" (2 casas para cima e 1 para a direita) usando **loops aninhados com break/continue**  

---

## 🧩 Estrutura do Código

O código está contido em um único arquivo: `xadrez.c`.

Cada peça é simulada com uma técnica específica:

| Peça   | Direção do Movimento                   | Estrutura Usada                          |
|--------|----------------------------------------|------------------------------------------|
| Torre  | 5 casas para a direita                 | Recursividade                            |
| Bispo  | 5 casas na diagonal superior direita   | Recursividade + loops aninhados          |
| Rainha | 8 casas para a esquerda                | Recursividade                            |
| Cavalo | 2 casas para cima + 1 para a direita   | Loops aninhados + break/continue         |

---

📜 Saída Esperada

O programa exibirá no console os movimentos de cada peça, organizados e separados por linhas em branco, no formato:

Movimento da Torre:
Direita
Direita
Direita
...

Movimento do Bispo:
Cima
Direita
Cima
Direita
...

Movimento da Rainha:
Esquerda
Esquerda
...

Movimento do Cavalo:
Cima
Cima
Direita

✅ Requisitos Atendidos

Recursividade implementada na Torre, Bispo e Rainha

Loops complexos e controle de fluxo no movimento do Cavalo

Saídas organizadas e claras no console

Código documentado, legível e eficiente