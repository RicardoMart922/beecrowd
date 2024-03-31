#include <stdio.h>
#include <string.h>

int main(void){
    char painel[300001], assinatura[10];
    unsigned instancia = 1;
    
    while (1) {
        scanf("%s", assinatura);
        
        if (strcmp(assinatura, "0") == 0) 
            break;
            
        if (instancia != 1)
            printf("\n");
        
        scanf("%s", painel);
        
        if (strstr(painel, assinatura)) {
            printf("Instancia %u\n", instancia);
            printf("verdadeira\n");
        } else {
            printf("Instancia %u\n", instancia);
            printf("falsa\n");
        }
        
        instancia++;
    }
    
    return 0;
}