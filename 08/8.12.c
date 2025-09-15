#include<stdio.h>
#include<time.h>

enum day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main(void)
{
	time_t now;
	enum day today;

	now = time(NULL);
	today = (now / (60 * 60 * 24) + 4) % 7;

	switch (today) {
		case SUN:
			printf("오늘은 일요일입니다.\n");
			break;
		case MON:
                        printf("오늘은 일요일입니다.\n");
                        break;
		case TUE:
                        printf("오늘은 일요일입니다.\n");
                        break;
		case WED:
                        printf("오늘은 일요일입니다.\n");
                        break;
		case THU:
                        printf("오늘은 일요일입니다.\n");
                        break;
		case FRI:
                        printf("오늘은 일요일입니다.\n");
                        break;
		case SAT:
                        printf("오늘은 일요일입니다.\n");
                        break;
		default:
			printf("time() 함수 오류입니다.\n");
	}
	return 0;
}
