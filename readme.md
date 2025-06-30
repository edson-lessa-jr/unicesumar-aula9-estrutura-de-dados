# Estrutura de Dados em C - Grafos e Busca em Profundidade

**Autor:** Prof. Edson Orivaldo Lessa Junior

## Visão Geral

Este repositório contém uma implementação educacional completa de estruturas de dados fundamentais em linguagem C, com foco específico em grafos e algoritmos de busca em profundidade (DFS - Depth-First Search). O projeto foi desenvolvido como material didático para demonstrar conceitos essenciais de estruturas de dados e algoritmos de grafos de forma prática e interativa.

O projeto está organizado em dois módulos principais que abordam diferentes aspectos da teoria de grafos: o primeiro módulo apresenta a implementação básica de grafos utilizando matriz de adjacência, enquanto o segundo módulo demonstra a aplicação prática do algoritmo de busca em profundidade através de uma simulação temática de exploração de cavernas.

## Estrutura do Projeto

O repositório está organizado de forma modular, facilitando o entendimento e a manutenção do código. A estrutura hierárquica permite que cada conceito seja estudado independentemente, ao mesmo tempo que demonstra como diferentes componentes podem ser integrados em uma aplicação maior.

```
unicesumar-aula9-estrutura-de-dados/
├── 01_grafo/
│   ├── grafo.c                    # Implementação das funções de grafo
│   └── grafo.h                    # Definições e protótipos do módulo grafo
├── 02_busca_dfs/
│   ├── busca-profundidade.c       # Implementação do algoritmo DFS
│   └── busca-profundidade.h       # Definições e protótipos do módulo DFS
├── main.c                         # Programa principal com interface de menu
├── CMakeLists.txt                 # Configuração de compilação CMake
├── .gitignore                     # Configurações do Git
└── README.md                      # Documentação do projeto
```

## Módulo 1: Implementação Básica de Grafos

O primeiro módulo (`01_grafo/`) apresenta uma implementação fundamental de grafos não direcionados utilizando matriz de adjacência. Esta abordagem foi escolhida por sua simplicidade conceitual e facilidade de compreensão para estudantes iniciantes em teoria de grafos.

### Características Técnicas

A implementação utiliza uma matriz bidimensional de inteiros para representar as conexões entre vértices. O grafo suporta até 5 vértices, uma limitação deliberada que facilita a visualização e compreensão dos conceitos sem sobrecarregar o estudante com estruturas muito complexas.

### Funcionalidades Implementadas

O módulo oferece três funcionalidades principais que cobrem as operações essenciais em grafos:

**Inicialização da Matriz de Adjacência:** A função `inicializarMatriz()` prepara a estrutura de dados zerando todas as posições da matriz, estabelecendo o estado inicial onde nenhuma aresta existe entre os vértices. Esta operação é fundamental para garantir que o grafo comece em um estado conhecido e consistente.

**Adição de Arestas:** A função `adicionarAresta()` permite criar conexões bidirecionais entre vértices. Como o grafo é não direcionado, a função automaticamente adiciona a aresta em ambas as direções na matriz, mantendo a simetria necessária para este tipo de estrutura.

**Visualização da Matriz:** A função `exibirMatriz()` fornece uma representação visual clara da estrutura do grafo, imprimindo a matriz de adjacência de forma organizada. Esta funcionalidade é especialmente valiosa para fins educacionais, permitindo que os estudantes visualizem diretamente como as conexões são representadas internamente.

### Exemplo de Uso

O módulo inclui uma função de demonstração (`iniciaGrafo()`) que cria um grafo exemplo com várias conexões predefinidas. Este exemplo ilustra um grafo com 5 vértices (numerados de 0 a 4) e múltiplas arestas que formam uma estrutura conectada interessante para análise.

## Módulo 2: Busca em Profundidade (DFS)

O segundo módulo (`02_busca_dfs/`) implementa o algoritmo de busca em profundidade utilizando uma abordagem temática inovadora. Em vez de trabalhar com vértices abstratos, o módulo simula a exploração de um sistema de cavernas, tornando o conceito mais tangível e envolvente para os estudantes.

### Abordagem Temática

A escolha da temática de exploração de cavernas não é meramente cosmética. Esta abordagem oferece várias vantagens pedagógicas significativas. Primeiro, ela torna o conceito abstrato de "visitar vértices" mais concreto através da analogia com "explorar cavernas". Segundo, a ideia de "passagens entre cavernas" é intuitivamente mais fácil de compreender do que "arestas entre vértices". Finalmente, o conceito de "marcar cavernas como visitadas" para evitar loops infinitos torna-se naturalmente compreensível no contexto de não se perder em um sistema de cavernas.

### Características Técnicas Avançadas

Este módulo suporta sistemas de cavernas significativamente maiores, com capacidade para até 20 cavernas. Esta expansão permite demonstrações mais complexas do algoritmo DFS e oferece oportunidades para explorar comportamentos em grafos de diferentes tamanhos e topologias.

### Funcionalidades Implementadas

O módulo oferece um conjunto abrangente de funcionalidades que cobrem desde a criação básica de estruturas até algoritmos avançados de exploração:

**Inicialização do Sistema:** A função `inicializarSistemaCavernas()` prepara a matriz de adjacência para o sistema de cavernas, estabelecendo o estado inicial onde nenhuma passagem existe entre as cavernas.

**Criação de Passagens:** A função `adicionarPassagem()` permite a criação manual de conexões entre cavernas específicas, oferecendo controle total sobre a topologia do sistema.

**Geração Aleatória:** A função `criarPassagensAleatorias()` introduz um elemento de aleatoriedade na criação do sistema de cavernas. Esta funcionalidade é particularmente valiosa para demonstrar como o algoritmo DFS se comporta em diferentes configurações de grafo, permitindo múltiplas execuções com topologias variadas.

**Algoritmo DFS:** A função `explorarCavernas()` implementa o algoritmo de busca em profundidade de forma recursiva. A implementação segue fielmente os princípios teóricos do DFS, marcando cavernas como visitadas e explorando recursivamente todas as cavernas conectadas.

**Interface de Exploração:** A função `iniciarExploracao()` coordena o processo de exploração, inicializando as estruturas necessárias e iniciando o algoritmo DFS a partir de uma caverna especificada.

**Visualização de Estruturas:** A função `exibirCavernasEArestas()` oferece uma visão completa do sistema de cavernas, listando todas as passagens existentes de forma organizada e compreensível.

### Interface de Menu Interativa

O módulo inclui uma interface de menu completa (`menu()`) que permite aos usuários interagir com todas as funcionalidades de forma intuitiva. O menu oferece as seguintes opções:

1. **Inicializar Sistema de Cavernas:** Prepara um novo sistema limpo para exploração
2. **Adicionar Passagem entre Cavernas:** Permite a criação manual de conexões específicas
3. **Criar Passagens Aleatórias:** Gera automaticamente um sistema de cavernas com topologia aleatória
4. **Iniciar Exploração:** Executa o algoritmo DFS a partir de uma caverna escolhida pelo usuário
5. **Exibir Nós e Arestas:** Mostra a estrutura completa do sistema atual
6. **Sair:** Encerra o programa de forma controlada

## Programa Principal

O arquivo `main.c` serve como ponto de entrada e coordenador central do projeto. Sua implementação demonstra como diferentes módulos podem ser integrados de forma elegante em uma aplicação coesa.

### Arquitetura de Integração

O programa principal utiliza uma arquitetura baseada em menu que permite aos usuários escolher entre os diferentes módulos disponíveis. Esta abordagem modular facilita a compreensão individual de cada conceito enquanto demonstra como eles se relacionam no contexto maior da teoria de grafos.

### Interface de Usuário

A interface principal oferece duas opções fundamentais:

**Exemplo Matriz Adjacente:** Esta opção executa o módulo básico de grafos, demonstrando a criação e visualização de um grafo simples utilizando matriz de adjacência.

**Exemplo Problema Caverna:** Esta opção acessa o módulo avançado de busca em profundidade, oferecendo acesso completo à interface interativa de exploração de cavernas.

## Configuração de Compilação

O projeto utiliza CMake como sistema de build, proporcionando portabilidade e facilidade de compilação em diferentes plataformas. O arquivo `CMakeLists.txt` está configurado para:

- Utilizar CMake versão 3.28 ou superior
- Compilar código C seguindo o padrão C11
- Incluir automaticamente todos os arquivos fonte dos módulos
- Gerar um executável chamado `unicesumar_aula9_estrutura_dados`

### Processo de Compilação

Para compilar o projeto, execute os seguintes comandos no diretório raiz:

```bash
mkdir build
cd build
cmake ..
make
```

O executável resultante pode ser executado diretamente:

```bash
./unicesumar_aula9_estrutura_dados
```

## Conceitos Educacionais Abordados

Este projeto serve como uma ferramenta educacional abrangente que cobre múltiplos conceitos fundamentais da ciência da computação:

### Estruturas de Dados

**Matrizes Bidimensionais:** O projeto demonstra o uso prático de matrizes bidimensionais para representar relações entre elementos, um conceito fundamental em muitas áreas da programação.

**Grafos:** A implementação cobre os conceitos básicos de teoria de grafos, incluindo vértices, arestas, grafos direcionados versus não direcionados, e diferentes métodos de representação.

### Algoritmos

**Busca em Profundidade (DFS):** O projeto oferece uma implementação completa e bem documentada do algoritmo DFS, incluindo o controle de vértices visitados e a natureza recursiva do algoritmo.

**Geração Aleatória:** O uso de funções de aleatoriedade demonstra como introduzir variabilidade controlada em algoritmos, um conceito importante em simulações e testes.

### Programação em C

**Modularização:** A organização do código em módulos separados demonstra boas práticas de programação, incluindo separação de responsabilidades e reutilização de código.

**Gerenciamento de Memória:** Embora o projeto utilize estruturas estáticas para simplicidade, ele demonstra conceitos importantes de gerenciamento de dados em C.

**Interfaces de Usuário:** A implementação de menus interativos mostra como criar interfaces de linha de comando eficazes e user-friendly.

## Aplicações Práticas

Os conceitos implementados neste projeto têm aplicações diretas em muitas áreas da ciência da computação e engenharia:

### Redes de Computadores

Os algoritmos de grafo são fundamentais para o roteamento de dados em redes, onde cada nó representa um roteador e as arestas representam conexões físicas ou lógicas.

### Inteligência Artificial

A busca em profundidade é um algoritmo fundamental em IA, utilizado em sistemas de busca, jogos, e resolução de problemas.

### Análise de Redes Sociais

A representação de relacionamentos através de grafos é essencial para análise de redes sociais, onde vértices representam pessoas e arestas representam conexões sociais.

### Sistemas de Navegação

Algoritmos de busca em grafos são a base de sistemas de navegação GPS, onde intersecções são vértices e estradas são arestas.

## Extensões Possíveis

Este projeto serve como uma base sólida para extensões mais avançadas:

### Algoritmos Adicionais

- **Busca em Largura (BFS):** Implementação do algoritmo complementar ao DFS
- **Algoritmos de Caminho Mínimo:** Dijkstra, Bellman-Ford, Floyd-Warshall
- **Algoritmos de Árvore Geradora Mínima:** Kruskal, Prim

### Estruturas de Dados Alternativas

- **Lista de Adjacência:** Representação mais eficiente para grafos esparsos
- **Grafos Direcionados:** Extensão para suportar arestas direcionais
- **Grafos Ponderados:** Adição de pesos às arestas

### Funcionalidades Avançadas

- **Detecção de Ciclos:** Identificação de ciclos em grafos
- **Componentes Conectados:** Identificação de subgrafos desconectados
- **Ordenação Topológica:** Para grafos direcionados acíclicos

## Considerações de Performance

Embora este projeto priorize clareza educacional sobre otimização, é importante compreender as características de performance das implementações:

### Complexidade Temporal

- **Inicialização:** O(V²) onde V é o número de vértices
- **Adição de Aresta:** O(1) para cada aresta
- **DFS:** O(V + E) onde E é o número de arestas
- **Exibição:** O(V²) para mostrar a matriz completa

### Complexidade Espacial

- **Matriz de Adjacência:** O(V²) independentemente do número de arestas
- **Array de Visitados:** O(V) para controle do DFS
- **Stack de Recursão:** O(V) no pior caso para DFS

## Conclusão

Este projeto representa uma implementação educacional abrangente e bem estruturada de conceitos fundamentais de estruturas de dados e algoritmos de grafos. A combinação de implementações claras, documentação detalhada, e abordagens temáticas inovadoras torna este material especialmente valioso para estudantes que estão sendo introduzidos à teoria de grafos.

A modularização cuidadosa do código, a interface interativa user-friendly, e a progressão lógica dos conceitos desde implementações básicas até algoritmos mais complexos demonstram uma abordagem pedagógica bem pensada. O projeto não apenas ensina os conceitos técnicos necessários, mas também demonstra boas práticas de programação e design de software.

Para educadores, este projeto oferece uma base sólida que pode ser facilmente adaptada e estendida para diferentes níveis de ensino e objetivos específicos de aprendizagem. Para estudantes, ele fornece uma oportunidade hands-on de trabalhar com implementações reais de conceitos teóricos, facilitando uma compreensão mais profunda e duradoura dos princípios fundamentais da ciência da computação.

A escolha da linguagem C, embora apresente alguns desafios adicionais em termos de gerenciamento de memória e sintaxe, oferece aos estudantes uma compreensão mais próxima do hardware e dos fundamentos da programação, preparando-os melhor para conceitos mais avançados em suas carreiras acadêmicas e profissionais.

