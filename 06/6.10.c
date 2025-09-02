#include<stdio.h>
#include<string.h>
#define N 50
#define L 10
int input_words(char [][L]);
void sort_words(int, char [][L]);
void print_words(int, char [][L]);

int main(void)
{
	char words[N][L];
	int num_word = 0;

	num_word = input_words(words);
	sort_words(num_word, words);
	printf("\n** (단어 정렬 결과 **\n");
	print_words(num_word, words);

	return 0;
}

int input_words(char words[][L])
{
	int num = 0;
	char temp[100];

	while (1) {
		printf("단어를 입력하세요: ");
		scanf("%[^\n]", temp);
		getchar();	//개행 삭제

		if (strcmp(temp, ".end") == 0)
			break;
		if (strlen(temp) < 10)
			strcpy(words[num],temp);
		else
			continue;
		if(++num == N)
			break;
	}
	return num;
}

void sort_words(int num, char words[][L])
{
	int i,j;
	char tmp[L];
	for (i = 0; i < num; i++)
		for (j = num-1; j > i; j--)
			if (strcmp(words[j - 1], words[j]) > 0) {
				strcpy(tmp, words[j - 1]);
				strcpy(words[j - 1], words[j]);
				strcpy(words[j], tmp);				
			}
	return;
}

void print_words(int num, char words[][L])
{
	int i;

	for (i = 0; i < num; i++)
		printf("%s\n", words[i]);
	return;
}
