#include <stdio.h>

void init_board();
void print_board();
char has_winner();
int isTied();

char board[3][3];

void init_board(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}

void print_board(){
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2) {
            printf("\n-----------\n");
        }
    }
    printf("\n");
}

char has_winner(){
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return board[i][0];
        }
            
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return board[0][i];
        } 
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return board[0][0];
    }
    
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return board[0][2];
    }
    
    return ' ';
}

int isTied(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 1;
}

int main(void){
    int row, col;

    char currentPlayer = 'X';
    char winner = ' ';

    init_board();

    while(1){
        print_board();

        printf("Jogador %c, escolha linha e coluna separado por espaço, ex.: 1 3 \n R: ", currentPlayer);
        scanf("%d %d", &row, &col);

        row--; col--;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Movimento inválido. Tente novamente.\n");
            continue;
        }

        board[row][col] = currentPlayer;
        winner = has_winner();

        if (winner != ' ') {
            print_board();
            printf("Jogador %c venceu\n", winner);
            break;
        }

        if (isTied()) {
            print_board();
            printf("Empate\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}