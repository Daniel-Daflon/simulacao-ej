#include <stdio.h>

int main() {
    char telefone[12]; // 11 dígitos + '\0'
    
    printf("INSIRA O TELEFONE (apenas numeros, 11 digitos): ");
    
    // Lê até 11 caracteres numéricos
    scanf("%11s", telefone);

    // Validação simples de preenchimento
    if (telefone[10] != '\0') {
        printf("\nPARABENS! O NUMERO ");
        
        // Exibição formatada: (21) 99999-9999
        printf("(%c%c) %c%c%c%c%c-%c%c%c%c", 
                telefone[0], telefone[1], // DDD
                telefone[2], telefone[3], telefone[4], telefone[5], telefone[6], // Prefixo
                telefone[7], telefone[8], telefone[9], telefone[10]); // Sufixo
        
        printf(" FOI ADICIONADO COM SUCESSO!\n");
    } else {
        printf("ERRO: Numero incompleto.\n");
    }

    return 0;
}
