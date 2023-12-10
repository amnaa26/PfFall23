#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
	int num;
	char author[20];
	char name[30];
	bool issued;
} Book;

void displayBooks(Book books[], int size) {
	printf("\nAll books (%d) info:\n", size);
	for (int i = 0; i < size; i++) {
		printf("\nBook number: %d\nBook author: %s\nBook title: %s\nBook issued: %s\n",
			books[i].num,
			books[i].author,
			books[i].name,
			(books[i].issued) ? "YES" : "NO"
		);
	}
	printf("\n");
}

void addBook(Book books[], int *size) {
	if (*size >= MAX_BOOKS) {
		printf("\n--Max books reached--\n");
		return;
	}

	printf("\n--Add book--\n");
	Book book;

	printf("Enter book number: ");
	scanf("%d", &book.num); fflush(stdin);

	printf("Enter book author: ");
	fgets(book.author, sizeof(book.author), stdin);
	book.author[strlen(book.author) - 1] = '\0';

	printf("Enter book name: ");
	fgets(book.name, sizeof(book.name), stdin);
	book.name[strlen(book.name) - 1] = '\0';

	book.issued = false;

	books[(*size)++] = book;

	printf("--Book inserted--\n\n");
}

int countBooksByTitle(Book books[], int size, char *title) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (!strcmp(books[i].name, title))
			count++;
	}
	return count;
}

int countBooksNotIssued(Book books[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (!books[i].issued)
			count++;
	}
	return count;
}

void issueBook(Book books[], int size) {
	int num;
	printf("\nEnter book number to issue: ");
	scanf("%d", &num);

	for (int i = 0; i < size; i++) {
		if (num == books[i].num) {
			if (!books[i].issued) {
				books[i].issued = true;
				printf("--Book issued successfully--\n");
				return;
			} else {
				printf("--Book is already issued--\n");
				return;
			}
		}
	}

	printf("--Book does not exist--\n");
}

int main() {
	Book books[MAX_BOOKS] = {
		{9123, "Serena Everhart", "Whispers in the Wind", false},
		{9456, "Donovan Steele", "Ephemeral Echoes", false},
		{9789, "Isabella Blackwood", "Labyrinth of Shadows", false},
		{1122, "Orion Nightshade", "Chronicles of Stardust", false},
		{1455, "Lila Moon", "Silent Serenade", false},
		{1788, "Xavier Storm", "Enigma's Embrace", false},
		{2121, "Celeste Rivers", "Midnight Mirage", false},
		{2454, "Lyra Starling", "Surrender to the Stars", false},
		{2787, "Damien Darkwood", "Crimson Cascade", false},
		{3120, "Aurora Skye", "Veil of Visions", false},
		{3453, "Thalia Ember", "Whirlwind Whispers", false},
		{3786, "Victor Eclipsion", "Quantum Quill", false},
		{4119, "Seraphina Frost", "Mystic Masquerade", false},
		{4452, "Gabriel Shadowheart", "Eternal Echo", false},
		{4785, "Selene Dusk", "Rogue Reflections", false},
		{5118, "Astrid Nova", "Aetherial Alchemy", false},
		{5451, "Caspian Mirage", "The Oracle's Overture", false},
		{5784, "Raven Nightshade", "Crimson Chronicles", false},
		{6117, "Elysia Enchant", "Whispering Woods", false},
		{6450, "Octavia Moonfall", "Spectral Symphony", false}
	};
	int size = 20;

	displayBooks(books, size);
	addBook(books, &size);

	char name[30];
	printf("Enter book name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	printf("Number of books with the title: %d\n", countBooksByTitle(books, size, name));
	printf("Total books in the library: %d\n", countBooksNotIssued(books, size));

	issueBook(books, size);
	displayBooks(books, size);
	printf("Total books in the library: %d\n", countBooksNotIssued(books, size));

	return 0;
}

