#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int height[] = {1,7,14,21,28,35,42};

int col = 0;

int counter = 0;

int moves[] = {};

long long bitboard[2] = {};

int posMoves[7] = {};

void makeMove(int col) {
    long long move = 1LL << height[col]++;
    bitboard[counter & 1] = bitboard[counter & 1] ^ move;
    moves[counter++] = col;
}

void undoMove() {
    int col = moves[--counter];
    long long move = 1LL << --height[col];
    bitboard[counter & 1] ^= move;
}

bool checkWin(long long bitboard){
    int direction[4] = {1, 6, 7, 8};
    for (int i = 0; i < 4; i++){
        if (bitboard & (bitboard >> direction[i]) & (bitboard >> 2*direction[i]) & (bitboard >> 3*direction[i])){
            return true;
        }
    }
}

int * listMoves() {
    int move[7] = {0};
    long long TOP = 283691315109952LL;
    //long long TOP = 1000000100000010000001000000100000010000001000000L;
    //000000100000010000001000000100000010000001000000 = 2216338399296
    for (int col = 0; col <= 6; col ++){
        if((TOP & (1LL << height[col])) == 0){
            moves[col] = 1;
        }
    }
}

int main(){
    
    
    return EXIT_SUCCESS;
}
