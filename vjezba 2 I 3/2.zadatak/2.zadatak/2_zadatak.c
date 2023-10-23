#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LINE 1024
#define MAX_SIZE 50
#define FILE_ERROR_OPEN -1
#define NO_PERSON_FIND -1

//2. Definirati strukturu osoba(ime, prezime, godina rođenja) i napisati program koji :
//A.dinamički dodaje novi element na početak liste,
//B.ispisuje listu,
//C.dinamički dodaje novi element na kraj liste,
//D.pronalazi element u listi(po prezimenu),
//E.briše određeni element iz liste,
//U zadatku se ne smiju koristiti globalne varijable.


Position findPerson(Position firstItem) {

	Position curret

		if (!firstItem) {
			printf("Empty list");
			return NO_PERSON_FIND;
		}
	return 

		strcpy(surname, EnterSurname());
	do {
		if (strcmp(current->surname, surname) == 0) {
			return current;
		}
		else {
			current = current->next;
		}

	} while (current);
	return NO_PERSON_FIND;
}

deletePerson(Position head) {

	Position current = head;
	char surname = [MAX_LENGTH] = { 0 };


	strxpy(surname, enterSurname());
	if (head->next) {
		Position privious = NULL;
		while (current->next && strcmp(current->surname, surname) == NULL)
			previous = current;
		current = current->next;
	}

	if (previous && previous->next && strcmp(current->surname)) {
		printPeson(current);
		previous->next = current->next;
		free(current);
	}
	else {
		return NO_PERSON_FIND;
	
	}
}