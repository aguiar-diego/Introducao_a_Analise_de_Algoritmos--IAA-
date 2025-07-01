# 🧩 EP1 - Análise da Árvore de Execução: Fibonacci e Torre de Hanoi

Este exercício-programa tem como objetivo estudar e compreender o funcionamento de algoritmos recursivos por meio da análise de **árvores de execução**, utilizando como base os algoritmos de **Fibonacci recursivo** e **Torre de Hanoi**.

---

## 📌 Objetivo

Familiarizar-se com a representação gráfica da execução de funções recursivas e com a **ordem de chamadas e retornos** durante a execução. A ideia é visualizar o que acontece "por trás" da recursão utilizando árvores, mensagens e rastreamento de chamadas.

---

## 🧠 Contexto

A execução de funções recursivas pode ser representada por uma **árvore**, onde:

- **Nós** representam **instâncias de execução** da função;
- **Arestas** representam **chamadas** e **retornos** da função;
- A função recursiva segue chamadas **em profundidade** e os retornos não são sempre explicitados.

---

## 🌳 Exemplo: Fibonacci Recursivo

A função `F(n) = F(n−1) + F(n−2)` com `F(0) = 1` e `F(1) = 1` é implementada no programa `fiborec.c`.  
A execução de `F(5)` gera uma árvore onde:

- O nó raiz representa `F(5)`
- Cada chamada recursiva gera dois ramos
- A **árvore de execução** é montada com base nas chamadas e nos retornos

Durante a execução, a **ordem das arestas visitadas** (chamadas e retornos) pode ser rastreada por mensagens exibidas no console.

![fibo (1)-1](https://github.com/user-attachments/assets/7a3c0b57-3059-4a95-88fa-e54283d68cae)

---

## 🧪 Tarefa

### 1. **Modificar `hanoi.c`**  
Ajustar o programa para que ele imprima mensagens a cada **chamada** e **retorno** da função recursiva.

### 2. **Desenhar a árvore de execução**  
Utilizar o editor gráfico **yEd** ([link para o editor](https://www.yworks.com/products/yed)) para construir a árvore de execução da função `hanoi(n, A, B, C)` para `n = 3`.

- A árvore deve conter os **nós das chamadas** e as **arestas com os identificadores**
- Exportar o gráfico como **imagem PNG**

### 3. **Criar tabela de arestas visitadas**  
Registrar, em formato de tabela, a **ordem de visitação das arestas** (chamadas e retornos), conforme exibidas pelas mensagens impressas pelo programa.

> Dica: a cada linha impressa, uma aresta é percorrida (chamada ou retorno).

---

## 📎 Observações

- O modelo do exemplo Fibonacci pode ser consultado no arquivo `fibo.graphml` (yEd).
- https://edisciplinas.usp.br/pluginfile.php/8500044/mod_resource/content/1/fiborec.c
- A execução do programa pode ser usada para verificar a **ordem real das chamadas e retornos**.

