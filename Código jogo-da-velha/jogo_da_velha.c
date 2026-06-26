#include <stdio.h>
#include <conio.h>


int main()
{
    
    char aux;
    char teste[3][3];
    int linha = 1;
    int coluna = 1;
    char ENTER = '/r';
    int Jog_Atual = 1;

    // --- Gera tabuleiro 3x3 ----
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                //aux[i][j] = teste[i][j];
                teste[i][j] = ' ';

                if(linha == i && coluna == j){
                    printf("[%c]",teste[linha][coluna]);
                }else{
                    printf("[%c]",teste[i][j]);
                }
                
            }
            printf("\n");
        }
    //----------------------------

    // --- Jogo ---
    while (1)
    {
        system("cls");

        // --- Desenho do ' ', X ou O no tabuleiro ---
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                
                if(Jog_Atual == 1)
                {
                    if(linha == i && coluna == j){
                        printf("[X]",teste[linha][coluna]);
                    }else{
                        printf("[%c]",teste[i][j]);
                    }
                }else if (Jog_Atual == 2)
                {
                    if(linha == i && coluna == j){
                        printf("[O]",teste[linha][coluna]);
                    }else{
                        printf("[%c]",teste[i][j]);
                    }
                }
                
            }
            printf("\n");
        }
        //-------------------------------------------


        aux = getch();

        // --- Teclado cima/baixo/esq/dir ---
            if(aux == 'w'){
                if (linha>0){
                   linha--; 
                }
            }
            
            if(aux == 'a'){
                if (coluna>0){
                   coluna--; 
                }
            }

            if(aux == 's'){
                if (linha<2){
                   linha++;
                }
            }
            
            if(aux == 'd'){
                if (coluna<2){
                   coluna++; 
                }
            }
        //---------------------------------

        // --- Seleção do X ou O ---
            if(aux == 'q'){
                if( Jog_Atual == 1)
                {
                    teste[linha][coluna]='X';
                    Jog_Atual = 2; // Passa a vez pro Jogador 2
                }else if (Jog_Atual == 2)
                {
                    teste[linha][coluna]='O';
                    Jog_Atual = 1; // Passa a vez pro Jogador 1
                }
            }
        //--------------------------------

    }

    
    
    return 0;
}
