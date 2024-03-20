#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



int main() {
	FILE* f;
	f = fopen("d:\\Valeria\\F.txt", "r");
	char link1[] = { "d:\\Valeria\\F1.txt" };
	char link2[] = { "d:\\Valeria\\F2.txt" };

	LettersAndNambers(link1, link2, f);

	fclose(f);
	return 0;
}