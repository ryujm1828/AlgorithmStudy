#include <stdio.h>

int main() {
	int N, m, M, T, R;
	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	if(M - m < T) {
		printf("-1");
		return 0;
	}
	int i = m;					//현재 심박수
	int n = 0;					//현재 운동 횟수
	int min = 0;				//흐른 시간
	while (n < N) {
		if (i + T > M) {		//운동 후 심박수 > 최대심박수(휴식 해야될때)
			if (i-R < m) {			//휴식 후 심박수 < 최소심박수 일때
				i = m;					//현재 심박수를 최소 심박수로 초기화
				min += 1;				//시간 증가
			}
			else {					//휴식 후 심박수 > 최소심박수
				i -= R;					
				min += 1;		
			}
		}
		else {					//운동 후 심박수 < 최대심박수(운동 해야될때)
			i += T;					
			min += 1;
			n += 1;
		}
	}
	printf("%d", min);
}