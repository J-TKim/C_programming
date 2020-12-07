# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int std[5][5] = { { 28,28,26,9,91 },{30,27,30,10,97},{25,26,24,8,83},{18,22,22,5,67},{24,25,30,10,89} };
	float avg[5];

	printf("\t\t중간\t기말\t팀플\t출석\t총점\n");
	for (int i = 0; i < 5; i++) {
		printf("학 생   %d번: ", i + 1);
		for (int j = 0; j < 5; j++) {
			printf("\t%d", std[i][j]);
		}
		printf("\n");
	}

	printf("항목별 평균: ");
	for (int i = 0; i < 5; i++) {
		float stdavg = 0;

		for (int j = 0; j < 5; j++) {
			stdavg += std[j][i];
		}
		float savg = stdavg / 5;
		avg[i] = savg;

		printf("\t%.1f ", avg[i]);
	}

}