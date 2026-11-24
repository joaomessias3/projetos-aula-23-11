#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char senha[20];
    const char senhaCorreta[] = "c1234";

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' deixado pelo fgets

    printf("Digite a senha: ");
    fgets(senha, 20, stdin);
    senha[strcspn(senha, "\n")] = '\0';

    // strlen() tecnicamente devolve size_t, mas convertemos para int aqui
    // porque o %d e mais simples e o tamanho de um nome nunca e um numero gigante.
    printf("\nOla, %s! Seu nome tem %d caracteres.\n", nome, (int) strlen(nome));

    if (strcmp(senha, senhaCorreta) == 0) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Senha incorreta.\n");
    }

    return 0;
}



