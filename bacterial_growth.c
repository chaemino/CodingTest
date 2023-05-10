#include <stdio.h>
#include <math.h>

int solution(int n, int t){
    int answer = 0;
    answer = n*pow(2, t);
    return answer;
}
int main(void){

    int results = solution(2, 10);
    printf("%d\n",results);

    return 0;
}
