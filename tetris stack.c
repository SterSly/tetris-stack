#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 15
#define COLS 10

int board[ROWS][COLS];
int row = 0;            
int piece_col;


#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"


void draw() {
    system("clear"); 

    printf("=== TETRIS STACK ===\n");
    printf("Digite:\n");
    printf("  a = mover esquerda\n");
    printf("  d = mover direita\n");
    printf("  s = descer bloco\n\n");

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {

            if (r == row && c == piece_col) {
                
                printf(YELLOW "[]" RESET);
            }
            else if (board[r][c] == 1) {
                
                printf(CYAN "[]" RESET);
            }
            else {
                
                printf(" .");
            }
        }
        printf("\n");
    }
}


int can_fall(int pr, int pc) {
    if (pr + 1 >= ROWS) return 0;
    if (board[pr + 1][pc] == 1) return 0;
    return 1;
}


void check_lines() {
    for (int r = 0; r < ROWS; r++) {
        int filled = 1;
        for (int c = 0; c < COLS; c++) {
            if (board[r][c] == 0) { filled = 0; break; }
        }
        if (filled) {
            for (int rr = r; rr > 0; rr--) {
                for (int cc = 0; cc < COLS; cc++) {
                    board[rr][cc] = board[rr - 1][cc];
                }
            }
            for (int cc = 0; cc < COLS; cc++) board[0][cc] = 0;
        }
    }
}

int main() {
    piece_col = COLS / 2;

    srand((unsigned)time(NULL));

    while (1) {
        draw();

        printf("\nComando: ");
        char cmd;
        if (scanf(" %c", &cmd) != 1) break;

        if (cmd == 'a' && piece_col > 0 && board[row][piece_col - 1] == 0)
            piece_col--;

        if (cmd == 'd' && piece_col < COLS - 1 && board[row][piece_col + 1] == 0)
            piece_col++;

        
        if (cmd == 's') {
            while (can_fall(row, piece_col))
                row++;
        } else {
            if (can_fall(row, piece_col)) {
                row++;
            } else {
                board[row][piece_col] = 1;
                check_lines();
                row = 0;
                piece_col = COLS / 2;

                if (board[row][piece_col] == 1) {
                    draw();
                    printf("\nGAME OVER!\n");
                    break;
                }
            }
        }
    }

    return 0;
}