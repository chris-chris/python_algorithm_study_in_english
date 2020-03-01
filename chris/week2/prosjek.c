/*
문제
민건이는 수학 수업시간동안 재밌는 방법으로 수학을 연습하고 있다.

먼저 민건이는 정수 수열 A를 작성했다.

그리고 나서 그 아래에 A의 해당 항까지의 평균값을 그 항으로 하는 정수 수열 B를 쓴다.

예를 들어 , 만약 수열 A가 1, 3, 2, 6, 8 이라면 수열 B는 1/1, (1+3)/2 , (1+3+2)/3, (1+3+2+6)/4, (1+3+2+6+8)/5 즉, 1, 2, 2, 3, 4 가 된다.

수열 B가 주어졌을 때 수열 A를 구하는 프로그램을 작성하시오.



입력
첫째줄에 수열 B의 길이를 나타내는 N이 주어진다.(1 <= N <= 100)

두번째 줄에 수열 B를 구성하는 N개의 요소가 주어진다. Bi (1 <= Bi <= 10^9)



출력
첫째 줄에 수열 A를 이루는 N개의 정수를 출력해라 (1 <= Ai <= 10^9)

NOTE : 수열 A의 요소들은 정수이다.



예제 입력
copy1
2
예제 출력
copy2


예제 입력
copy4
3 2 3 5
예제 출력
copy3 1 5 11


예제 입력
copy5
1 2 2 3 4
예제 출력
copy1 3 2 6 8
*/

#include <stdio.h>

int main() {

  int n;
  int arr[200];
  int res[200];

  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  res[0]=arr[0];

  for(int i=1;i<n;i++){
    // arr[i] = res[0]~res[i] / i+1
    // arr[i]*(i+1) - (res[0]+res[i-1]) = res[i]
    int ressum=0;
    for(int j=0;j<i;j++) ressum += res[j];
    res[i]= arr[i]*(i+1) - ressum;
  }
  for(int i=0;i<n;i++) printf("%d ", res[i]);
  return 0;
}