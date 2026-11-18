#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 10

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    int disponivel;
} Livro;

void cadastrarLivro(Livro livros[], int *quantidade);
void listarLivros(Livro livros[], int quantidade);
int buscarPorTitulo(Livro livros[], int quantidade, char titulo[]);
void emprestarLivro(Livro livros[], int quantidade);
void devolverLivro(Livro livros[], int quantidade);
int lerTexto(char texto[], int tamanho);

int main(void) {
    Livro livros[MAX_LIVROS];
    int quantidade = 0, opcao, posicao;
    char titulo[100];

    printf("=== Mini Biblioteca ===\n");
    do {
        printf("\n--- Menu ---\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar por titulo\n");
        printf("4 - Emprestar livro\n");
        printf("5 - Devolver livro\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) return 1;
        switch (opcao) {
            case 1:
                cadastrarLivro(livros, &quantidade);
                break;
            case 2:
                listarLivros(livros, quantidade);
                break;
            case 3:
                printf("Titulo para buscar: ");
                if (!lerTexto(titulo, sizeof(titulo))) break;
                posicao = buscarPorTitulo(livros, quantidade, titulo);
                if (posicao == -1) {
                    printf("Livro nao encontrado.\n");
                } else {
                    printf("%s | %s | %d | %s\n", livros[posicao].titulo,
                           livros[posicao].autor, livros[posicao].ano,
                           livros[posicao].disponivel ? "Disponivel" : "Emprestado");
                }
                break;
            case 4:
                emprestarLivro(livros, quantidade);
                break;
            case 5:
                devolverLivro(livros, quantidade);
                break;
            case 0:
                printf("\nBiblioteca encerrada.\n\n");
                break;
            default:
                printf("[ERRO] Escolha uma opcao do menu.\n");
                break;
        }
    } while (opcao != 0);

    system("PAUSE");
    return 0;
}

int lerTexto(char texto[], int tamanho) {
    int c, i = 0, excedeu = 0;

    /* Descarta apenas o espaco em branco deixado pela leitura anterior. */
    do {
        c = getchar();
    } while (c == '\n' || c == '\r' || c == ' ' || c == '\t');

    while (c != '\n' && c != EOF) {
        if (i < tamanho - 1) {
            texto[i++] = (char)c;
        } else {
            excedeu = 1;
        }
        c = getchar();
    }
    texto[i] = '\0';
    if (excedeu || i == 0) {
        printf("[ERRO] Informe um texto de 1 a %d caracteres.\n", tamanho - 1);
        return 0;
    }
    return 1;
}

void cadastrarLivro(Livro livros[], int *quantidade) {
    Livro novo;
    if (*quantidade == MAX_LIVROS) {
        printf("A biblioteca ja tem 10 livros cadastrados.\n");
        return;
    }
    printf("Titulo (ate 99 caracteres): ");
    if (!lerTexto(novo.titulo, sizeof(novo.titulo))) return;
    if (buscarPorTitulo(livros, *quantidade, novo.titulo) != -1) {
        printf("Esse titulo ja esta cadastrado.\n");
        return;
    }
    printf("Autor (ate 99 caracteres): ");
    if (!lerTexto(novo.autor, sizeof(novo.autor))) return;
    printf("Ano de publicacao: ");
    if (scanf("%d", &novo.ano) != 1 || novo.ano <= 0) {
        printf("[ERRO] Ano invalido.\n");
        exit(EXIT_FAILURE);
    }
    novo.disponivel = 1;
    livros[*quantidade] = novo;
    (*quantidade)++;
    printf("Livro cadastrado.\n");
}

void listarLivros(Livro livros[], int quantidade) {
    int i;
    if (quantidade == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }
    printf("\n--- Livros Cadastrados ---\n");
    for (i = 0; i < quantidade; i++) {
        printf("%d. %s | %s | %d | %s\n", i + 1, livros[i].titulo,
               livros[i].autor, livros[i].ano,
               livros[i].disponivel ? "Disponivel" : "Emprestado");
    }
}

int buscarPorTitulo(Livro livros[], int quantidade, char titulo[]) {
    int i;
    for (i = 0; i < quantidade; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) return i;
    }
    return -1;
}

void emprestarLivro(Livro livros[], int quantidade) {
    char titulo[100];
    int posicao;
    printf("Titulo para emprestar: ");
    if (!lerTexto(titulo, sizeof(titulo))) return;
    posicao = buscarPorTitulo(livros, quantidade, titulo);
    if (posicao == -1) {
        printf("Livro nao encontrado.\n");
    } else if (!livros[posicao].disponivel) {
        printf("Esse livro ja esta emprestado.\n");
    } else {
        livros[posicao].disponivel = 0;
        printf("Emprestimo realizado.\n");
    }
}

void devolverLivro(Livro livros[], int quantidade) {
    char titulo[100];
    int posicao;
    printf("Titulo para devolver: ");
    if (!lerTexto(titulo, sizeof(titulo))) return;
    posicao = buscarPorTitulo(livros, quantidade, titulo);
    if (posicao == -1) {
        printf("Livro nao encontrado.\n");
    } else if (livros[posicao].disponivel) {
        printf("Esse livro ja esta disponivel.\n");
    } else {
        livros[posicao].disponivel = 1;
        printf("Devolucao realizada.\n");
    }
}
