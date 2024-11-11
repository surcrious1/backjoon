#include<stdio.h>
#include<string.h>

int main() {
    char s_n[50];//과목 이름
    float g;//학점
    char s[3];//과목 평점 입력
    float sum_s;//과목 평점 점수
    float sum = 0;//학점g 총합
    float result = 0;//학점X과목 평점
    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", &s_n, &g, &s);
        sum_s = 0;
        if (s[0] == 'P') {
            continue;
        }
        else if (s[0] != 'P') {
            sum += g;
            if (s[0] == 'A')sum_s += 4;
            else if (s[0] == 'B')sum_s += 3;
            else if (s[0] == 'C')sum_s += 2;
            else if (s[0] == 'D')sum_s += 1;
            else if (s[0] == 'F')sum_s += 0;

            if (s[1] == '+')sum_s += 0.5;
            else if (s[1] == '0')sum_s += 0.0;
            result += sum_s * g;
        }
    }
    printf("%f", result / sum);
    return 0;
}