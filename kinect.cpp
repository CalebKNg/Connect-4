#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//place piece
const int NUMROW = 6;
const int NUMCOL = 7;

void placePiece(int s, int board[NUMROW][NUMCOL], int piece){
    for (int i = NUMROW; i > 0 ; i--){
        if(board[i][s] == 0){
            board[i][s] = piece;
        }
    }
}

void drawBoard(int board[NUMROW][NUMCOL]){
    for (int i=0; i< NUMROW; i++){
        for (int s=0; s< NUMCOL; s++){
            cout << board[i][s];
        }
        cout << endl;
    }
}

int checkWin(int board[NUMROW][NUMCOL], int player){
    for (int i=0; i< NUMROW; i++){
        for (int s=0; s< NUMCOL; s++){
            int player = board[i][s];
            if (player = 0){
                continue
            }
            //check down
            if (i+3 <= NUMROW && board[i + 1][s] == player && board[i + 2][s] = player && board[i + 3][s] == player){
                return player;
            }
            //check right
            if (s + 3 <= NUMCOL && board[i][s+1]== player && board[i][s+2}== player && board[i][s+3] == player){
                return player;
            }
            //check diagonal right
            if (s+3 <= NUMROW && i+3 <= NUMCOL && board[i+1][s+1] == player && board[i+2][s+2] == player && board[i+3][s+3] == player){
                return player;
            }
            //check diagonal left
            if (s-3 <= NUMROW && i+3 <= NUMCOL && board[i+1][s-1] == player && board[i+2][s-2] == player && board[i+3][s-3] == player){
                return player;
            }
            
        }
    }
    return 0;
}
//decision making

int main(){
    int board[NUMROW][NUMCOL] = {0};
    
    int turn = 0;
    
    turn = rand() % 1;
    
    drawBoard(board);    
        
}
