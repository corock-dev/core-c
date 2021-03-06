/**
 * 1046 : [기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기
 * 
 * 정수 3개를 입력받아 합과 평균을 출력해보자.
 * 단, -2147483648 ~ +2147483647
 * 
 * 입력
 * 정수 3개가 공백을 두고 입력된다.
 * 단, -2147483648 ~ +2147483647
 * 
 * 출력
 * 합과 평균을 줄을 바꿔 출력한다.
 * 평균은 소수점 이하 둘째 자리에서 반올림해서 소수점 이하 첫째 자리까지 출력한다.
 * 
 * 입력 예시
 * 1 2 3
 * 
 * 출력 예시
 * 6
 * 2.0
 */
#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a + b + c);

    // 나눗셈 연산 시 항상 형 변환을 생각해야 함!
    printf("%.1f\n", (float)(a + b + c) / 3);
    return 0;
}
