#include<stdio.h>
#include<string.h>

int main() {
    //변수
    int king, queen, look, bishop, knight, pawn;
    int k_num = 0;
    int q_num = 0;
    int l_num = 0;
    int b_num = 0;
    int n_num = 0;
    int p_num = 0;
    //input
    scanf("%d %d %d %d %d %d", &king, &queen, &look, &bishop, &knight, &pawn);
    //king
    if (king != 1) {
        k_num = 1 - king;
    }
    //queen
    if (queen != 1) {
        q_num = 1 - queen;
    }
    //look
    if (look != 2) {
        l_num = 2 - look;
    }
    //bishop
    if (bishop != 2) {
        b_num = 2 - bishop;
    }
    //knight
    if (knight != 2) {
        n_num = 2 - knight;
    }
    //pawn
    if (pawn != 8) {
        p_num = 8 - pawn;
    }
    //output
    printf("%d %d %d %d %d %d", k_num, q_num, l_num, b_num, n_num, p_num);
    return 0;
}