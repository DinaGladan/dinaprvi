#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_LINE 1024
#define MAX_SIZE 50
#define FILE_ERROR_OPEN -1

//Napisati program koji prvo pročita koliko redaka ima datoteka, tj.koliko ima studenata
//zapisanih u datoteci.Nakon toga potrebno je dinamički alocirati prostor za niz struktura
//studenata(ime, prezime, bodovi) i učitati iz datoteke sve zapise.Na ekran ispisati ime,
//prezime, apsolutni i relativni broj bodova.
//Napomena: Svaki redak datoteke sadrži ime i prezime studenta, te broj bodova na kolokviju.
//	relatvan_br_bodova = br_bodova / max_br_bodova * 100

typedef struct _student { //tip strukture je _student, a ime je Student

	char name[MAX_SIZE];
	char surname[MAX_SIZE];
	double points;

}Student;

int readNoRowsInFile() {
	int counter = 0;
	FILE* fp = NULL;
	char buffer[MAX_LINE] = { 0 };
	fp = fopen("students.txt", "r");
	if (!fp) {
		printf("\nNema nis");
		return FILE_ERROR_OPEN;
	}
	while (!feof(fp)) {
		fgets(buffer, MAX_LINE, fp);
		counter++;
	}

	fclose(fp);
	return counter;
}

int main() {
	int noRows = 0;
	noRows = readNoRowsInFile();
	printf("%d", noRows);
	return 0;
}
