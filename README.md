# Projeto em Linguagem C: Implementação e Análise de Operações em Listas Encadeadas 🚀📚💻

## Descrição do Projeto 📝🛠️🧩
Este projeto consiste na implementação detalhada e na análise de desempenho de operações fundamentais sobre listas encadeadas em linguagem C. Cada elemento (nó) da lista é estruturado para armazenar informações pessoais específicas:

- **Nome**: Cadeia de caracteres limitada a 49 caracteres.
- **RG**: Valor numérico inteiro com capacidade para até 9 dígitos.

O software é projetado para realizar uma série de operações sobre listas, permitindo a análise quantitativa rigorosa em termos de contagem de comparações, movimentações de elementos e tempo de execução, oferecendo assim insights sobre eficiência computacional.

## Funcionalidades ⚙️📈⏱️

As operações implementadas incluem:

- Inserção de elementos no início da lista
- Inserção de elementos no final da lista
- Inserção em posição arbitrária
- Remoção de elementos no início da lista
- Remoção de elementos no final da lista
- Remoção em posição arbitrária
- Busca por elemento através do RG
- Impressão de todos os elementos da lista
- Persistência dos dados da lista em arquivos
- Carregamento de dados para lista a partir de arquivos

Para cada operação, são disponibilizadas métricas detalhadas, incluindo número de comparações (`C(n)`), número de movimentações (`M(n)`), tempo de execução computacional (segundos) e posição do elemento na lista, quando aplicável.

## Estrutura do Projeto 📂🗃️📑

```
.
├── busca_no_rg.c
├── copiastring.c
├── criar_no.c
├── imprime_lista.c
├── insercao_no_fim.c
├── insercao_no_inicio.c
├── insercao_no_pos_n.c
├── ler_lista.c
├── lib.h
├── main.c
├── menu_operacao.c
├── retira_no_fim.c
├── retira_no_inicio.c
├── retira_no_pos_n.c
├── sair_do_sistema.c
└── salvar_nova_lista.c
```

## Requisitos 🧰🔧🖥️

- Compilador GCC (GNU Compiler Collection)

## Procedimento de Compilação e Execução 🔨💻🚦

1. Acesse a pasta raiz do projeto via terminal.
2. Utilize o seguinte comando para compilação:

```bash
gcc *.c -o programa.exe
```

3. Execute o programa compilado por meio do comando:

```bash
./programa.exe
```

## Demonstração de Uso 🎯🖱️🔍
Após inicialização do programa, o usuário deve seguir as orientações fornecidas pelo menu interativo para executar as operações disponíveis na lista encadeada.

## Operações com Arquivos 📁🖊️💾

### Persistência dos Dados
O armazenamento dos elementos da lista segue o formato abaixo:
```
nome,RG
```

### Carregamento dos Dados
Para leitura dos dados, o arquivo deve aderir ao seguinte formato:
```
nome,RG
```

## Contribuições 🤝🌟🔖
Contribuições acadêmicas e técnicas são altamente incentivadas. Interessados podem submeter Pull Requests com sugestões de melhorias, correções ou extensões das funcionalidades existentes.

## Autor 👨‍💻📗🎓
Projeto desenvolvido para fins acadêmicos e práticos na disciplina de estruturas de dados, utilizando a linguagem de programação C.

