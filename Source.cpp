#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void LettersAndNambers(char* link1, char* link2, FILE* f) {
	char c = getc(f);
	FILE* f1, * f2;
	f1 = fopen(link1, "w");
	f2 = fopen(link2, "w");
	while (c != EOF) {
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
			fprintf(f1, "%c", c);
		}
		if (c >= '0' && c <= '9') {
			fprintf(f2, "%c", c);
		}
		c = getc(f);
	}
	fclose(f1);
	fclose(f2);
}

int main() {
	FILE* f;
	f = fopen("d:\\Valeria\\F.txt", "r");
	char link1[] = { "d:\\Valeria\\F1.txt" };
	char link2[] = { "d:\\Valeria\\F2.txt" };

	LettersAndNambers(link1, link2, f);

	fclose(f);
	return 0;
}