#include <stdio.h>

int main() {
    int escolha;

    printf("=====================================\n");
    printf("        DETECTIVE QUEST         \n");
    printf("=====================================\n\n");

    printf("Você é um detetive chamado para investigar\n");
    printf("um roubo misterioso no museu da cidade.\n\n");

    printf("O que deseja fazer primeiro?\n");
    printf("1 — Examinar a cena do crime\n");
    printf("2 — Interrogar o segurança\n");
    printf("3 — Ver imagens da câmera\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nVocê examina a cena do crime.\n");
        printf("Encontra pegadas de um sapato grande.\n\n");
        printf("O que fazer agora?\n");
        printf("1 — Seguir as pegadas\n");
        printf("2 — Voltar e interrogar o segurança\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nAs pegadas levam até o depósito.\n");
            printf("Você encontra uma mochila caída.\n");
            printf("Dentro dela, o item roubado!\n\n");
            printf("Você resolveu o caso!\n");
        } else {
            printf("\nO segurança diz que viu alguém muito alto saindo correndo.\n");
            printf("Com a dica, você acha o ladrão facilmente.\n");
            printf("Caso resolvido!\n");
        }

    } else if (escolha == 2) {
        printf("\nO segurança parece nervoso.\n");
        printf("Ele diz que apagou as luzes por acidente.\n\n");
        printf("1 — Acreditar nele\n");
        printf("2 — Pressioná-lo mais\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nVocê acredita nele e segue sem suspeitas.\n");
            printf("Sem pistas, o caso fica sem solução...\n");
            printf("GAME OVER.\n");
        } else {
            printf("\nSob pressão, ele admite que abriu a porta para um amigo.\n");
            printf("Você rastreia o amigo e recupera o item.\n");
            printf("Caso encerrado!\n");
        }

    } else if (escolha == 3) {
        printf("\nAs câmeras mostram uma pessoa alta usando capuz.\n\n");
        printf("1 — Aumentar o zoom\n");
        printf("2 — Procurar detalhes no fundo\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nO zoom revela uma tatuagem no braço.\n");
            printf("Você identifica o ladrão pela ficha criminal.\n");
            printf("Caso resolvido!\n");
        } else {
            printf("\nVocê percebe um reflexo mostrando um carro vermelho.\n");
            printf("Rastreia a placa e encontra o suspeito.\n");
            printf("Caso encerrado!\n");
        }

    } else {
        printf("\nOpção inválida. Jogo encerrado.\n");
    }

    printf("\nObrigado por jogar Detective Quest!\n");

    return 0;
}