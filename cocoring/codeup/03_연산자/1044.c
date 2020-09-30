/**
 * 1044 : [기초-산술연산] 정수 1개 입력받아 1 더해 출력하기(설명)
 * 
 * 정수를 1개 입력받아 1만큼 더해 출력해보자.
 * 단, -2147483648 ~ +2147483647 의 범위로 입력된다.
 * 
 * 입력
 * 정수 1개가 입력된다.
 * 단, -2147483648 ~ +2147483647 의 범위로 입력된다.
 * 
 * 출력
 * 입력된 정수에 1을 더해 출력한다.
 * 
 * 입력 예시
 * 2147483647
 * 
 * 출력 예시
 * 2147483648
 */
#include <stdio.h>

int main()
{   
    long long d;
    scanf("%lld", &d);          // 88을 입력하면

    // printf("%lld\n", d++);   // 후위 연산자로 d == 88이 출력
    // printf("%lld\n", ++d);   // 전위 연산자로 d의 값을 1 증가시키고 그 값을 출력 (d == 89)
    printf("%lld\n", d += 1);

    return 0;
}
