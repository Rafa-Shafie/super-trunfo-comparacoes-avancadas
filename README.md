# super-trunfo-comparacoes-avancadas
# 🃏 Desafio Final — Super Trunfo em C

Este projeto implementa comparações avançadas entre cartas de países no estilo **Super Trunfo**, permitindo ao jogador escolher **dois atributos diferentes** para decidir o vencedor.

## ⚙️ Funcionalidades

* Escolha de **dois atributos diferentes** para comparação
* Comparação de valores considerando a **regra especial da densidade demográfica (menor vence)**
* **Soma dos atributos** para determinar o vencedor final
* **Menus dinâmicos** com `switch`
* Tratamento de **empates**
* Código **comentado, modular e legível**

## 📋 Atributos Disponíveis

| Código | Atributo              | Regra de Vitória      |
| ------ | --------------------- | --------------------- |
| 1      | População             | Maior valor vence     |
| 2      | Área                  | Maior valor vence     |
| 3      | PIB                   | Maior valor vence     |
| 4      | Densidade Demográfica | **Menor valor vence** |

## 🧠 Estrutura do Código

* `struct Carta`: contém os dados de cada país
* `obterAtributo()`: retorna o valor de um atributo específico
* `nomeAtributo()`: retorna o nome do atributo
* `main()`: gerencia menus, entrada do usuário, comparação e exibição do resultado

## 🖥️ Como Compilar e Executar

### Compilando com GCC

```bash
gcc main.c -o supertrunfo
```

### Executando

```bash
./supertrunfo
```

## 🧩 Exemplo de Execução

```
Comparando cartas: Brasil vs Japão

Escolha o primeiro atributo:
1 - População
2 - Área
3 - PIB
4 - Densidade Demográfica
> 2

Escolha o segundo atributo (diferente do primeiro):
1 - População
3 - PIB
4 - Densidade Demográfica
> 3

--- RESULTADO ---
Área -> 8516.00 x 377.00
PIB -> 1839.00 x 5065.00

Soma total:
Brasil: 10355.00
Japão: 5442.00

Vencedor: Brasil
```

## 🧰 Tecnologias Utilizadas

* Linguagem C
* Compilador GCC
* Estruturas de decisão (`if`, `else`, `switch`, operador ternário)
* Validação de entrada

## 👨‍💻 Autor

**Rafael El Shafie**
Desafio final do módulo de estruturas de decisão — *Super Trunfo em C* 🎯

