#include <stdio.h>

int main(){
    int escolhatorre, escolharainha, escolhabispo; //Input do usuário sobre a direção que deseja mover
    int r = 0, b = 0; //variável r - rainha e b - bispo
            
    printf("Movimento da torre: \n");
    printf("Como deseja movê-la? \n");
    printf("1. Direita\n");
    printf("2. Esquerda\n");
    printf("3. Cima\n");
    printf("4. Baixo\n");
    scanf("%d", &escolhatorre);

    switch (escolhatorre)
    {
        /*
        t = o início para não ter lixo de memória e o loop já iniciar > 5
        o limite t < 5 (quantidade de movimentos desejado)
        t++ para ter incremento e evitar o loop infinito       
        */
        case 1:
        for (int t = 0; t < 5; t++ ){   
        printf("Direita\n");
    }
        break;
    case 2:
        for (int t = 0; t < 5; t++ ){
        printf("Esquerda\n");
    }
        break;
    case 3:
        for (int t = 0; t < 5; t++ ){
        printf("Cima\n");
    }
        break;
    case 4:
        for (int t = 0; t < 5; t++ ){
        printf("Baixo\n");
    }
        break;    
    default:
        printf("Opção Inválida!\n");
        break;
    }

    printf("\nMovimento da Rainha:\n");
    printf("Como deseja movê-la? \n");
    printf("1. Direita\n");
    printf("2. Esquerda\n");
    printf("3. Cima\n");
    printf("4. Baixo\n");
    printf("5. Diagonal Cima-Esquerda\n");
    printf("6. Diagonal Cima-Direita\n");
    printf("7. Diagonal Baixo-Esquerda\n");
    printf("8. Diagonal Baixo-Direita\n");
    scanf("%d", &escolharainha);
    
    switch (escolharainha)
    {
    case 1:
        while (r < 8) // enquanto variavel da rainha for menor que 8 o loop executa
    {
        printf("Direita\n");
        r++;
    }    
        break;
    case 2:
        while (r < 8)
    {
        printf("Esquerda\n");
        r++;
    }        
        break;
    case 3:
        while (r < 8)
    {
        printf("Cima\n");
        r++;
    }  
            
        break;
    case 4:
        while (r < 8)
    {
        printf("Baixo\n");
        r++;
    }  
        break;  
    case 5:
        while (r < 8)
    {
        printf("Diagonal Cima-Esquerda\n");
        r++;
    }  
        break;
    case 6:  
        while (r < 8)
    {
        printf("Diagonal Cima-Direita\n");
        r++;
    }  
        break;
    case 7:
        while (r < 8)
    {
        printf("Diagonal Baixo-Esquerda\n");
        r++;
    }  
        break;
    case 8:
        while (r < 8)
    {
        printf("Diagonal Baixo-Direita\n");
        r++;
    }  
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }
   
    printf("\nMovimento do Bispo:\n");
    printf("Como deseja movê-lo? \n");
    printf("1. Diagonal Cima-Esquerda\n");
    printf("2. Diagonal Cima-Direita\n");
    printf("3. Diagonal Baixo-Esquerda\n");
    printf("4. Diagonal Baixo-Direita\n");
    scanf("%d", &escolhabispo);

    switch (escolhabispo)
    {
    case 1:
        do
        {
        printf("Diagonal Cima-Esquerda\n");
        b++;
        } while (b < 5);
        break;
    case 2:
        do
        {
        printf("Diagonal Cima-Direita\n");
        b++;
        } while (b < 5);
        break;
    case 3:
        do
        {
        printf("Diagonal Baixo-Esquerda\n");
        b++;
        } while (b < 5);
        break;
    case 4:
        do
        {
        printf("Diagonal Baixo-Direita\n");
        b++;
        } while (b < 5);
        break;    
    default:
        printf("Opção Inválida!\n");
        break;
    }




    return 0;

}