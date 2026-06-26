# Trabalho_IAlg
# Relatório – Projeto Prático de IAlg

**Tema:** Personagens de Jogos

**Integrantes:** Gabriel de Avelas Silva - Luiza Mara Fernandes Costa - Lucas Aguilar de Oliveira

## Introdução

O presente trabalho teve como objetivo desenvolver um sistema de cadastro em C++ com armazenamento permanente em arquivos CSV. O sistema permite carregar os dados para a memória, realizar operações de inserção, busca, ordenação, remoção e gravação das alterações no arquivo, aplicando os conceitos estudados na disciplina de Introdução aos Algoritmos.

O tema escolhido foi **Personagens de Jogos**, sendo cada registro composto pelos seguintes campos: identificador, nome, criador, título do jogo e espécie do personagem. Dessa forma, foi possível trabalhar com dados numéricos e textuais, incluindo campos que possuem espaços, conforme solicitado na especificação do projeto.

## Estrutura do programa e lógica utilizada

O programa foi organizado em diversos arquivos (.cpp e .h), deixando cada funcionalidade separada. Essa divisão tornou o código mais organizado e facilitou o desenvolvimento em equipe.

Inicialmente, os dados são carregados do arquivo CSV para um vetor alocado dinamicamente. O vetor possui uma capacidade inicial e, quando necessário, é redimensionado automaticamente para permitir a inserção de novos registros sem perda dos dados já armazenados.

A aplicação possui um menu principal através do qual o usuário pode executar todas as operações disponíveis.

Na inserção de registros, o usuário pode escolher entre inserir o novo personagem no final do vetor ou realizar uma inserção ordenada. A inserção ordenada pode ser feita considerando diferentes campos, como nome, criador, título ou espécie, mantendo a organização dos dados.

A busca dos registros pode ser realizada utilizando diferentes critérios. O projeto implementa tanto busca sequencial quanto busca binária, sendo esta última utilizada quando os dados estão previamente ordenados.

A ordenação dos registros é realizada em memória utilizando algoritmos estudados durante a disciplina. O sistema permite ordenar os personagens por diferentes campos, facilitando tanto a visualização quanto a realização das buscas binárias.

Também foi implementada a remoção de registros. Após as alterações, o usuário pode salvar novamente o arquivo CSV, preservando todas as modificações realizadas durante a execução do programa.

Além disso, existe uma funcionalidade para exibir todos os registros ou apenas um intervalo informado pelo usuário, tornando a visualização mais prática quando a quantidade de dados é grande.

## Organização dos dados no arquivo

Os registros são armazenados no arquivo CSV seguindo sempre a mesma ordem dos campos:

1. Identificador;
2. Nome do personagem;
3. Criador;
4. Título do jogo;
5. Espécie.

Cada linha representa um personagem diferente. Durante a leitura do arquivo, esses dados são carregados para o vetor em memória exatamente nessa ordem. Após alterações como inserções, ordenações ou remoções, os registros podem ser gravados novamente no arquivo mantendo essa mesma estrutura.

## Acertos e dificuldades encontradas

Durante o desenvolvimento do projeto, um dos principais acertos foi a organização do código em módulos, permitindo que cada funcionalidade fosse implementada separadamente. Isso facilitou tanto a programação quanto a manutenção do sistema.

Outro ponto positivo foi a implementação do redimensionamento dinâmico do vetor, permitindo que novos registros fossem inseridos sem limitar a quantidade inicial de personagens.

Entre as principais dificuldades encontradas destacam-se o controle da memória dinâmica, a implementação das inserções ordenadas, o funcionamento correto das buscas binárias e a manipulação do arquivo CSV. Também foi necessário garantir que todas as operações mantivessem a consistência dos dados armazenados.

Esses desafios contribuíram para um melhor entendimento dos conceitos de estruturas de dados, manipulação de arquivos e algoritmos de ordenação e busca.

## Conclusão

O desenvolvimento deste projeto permitiu colocar em prática diversos conteúdos estudados na disciplina de Introdução aos Algoritmos, como alocação dinâmica de memória, manipulação de arquivos, vetores, ordenação e busca de dados.

O sistema desenvolvido atende aos principais requisitos propostos, oferecendo funcionalidades para cadastrar, consultar, ordenar, remover, visualizar e salvar personagens de jogos em arquivo CSV. Além de atender às especificações do trabalho, o projeto proporcionou experiência prática em organização de código, divisão de tarefas e desenvolvimento colaborativo, contribuindo para o aprendizado da equipe.
