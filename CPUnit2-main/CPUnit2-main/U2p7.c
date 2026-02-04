// book search 
#include <stdio.h>

struct Book {
	int id;
	char title[20];
	char auther[20];
};

int main() {
	struct Book b1 = { 101, "C-Intro","Ritchie" };
	struct Book b2 = { 102, "Story","AAA" };
	struct Book b3 = { 103, "fab","xxx" };

	// Array of ptr to structire.
	struct Book* books[3] = { &b1,&b2,&b3 };
	int searchID, i, found = 0;

	printf("Enter the Book ID to search ");
	scanf_s("%d", &searchID);

	for (i = 0; i < 3; i++) {
		if (searchID == books[i] -> id) {
			found = 1;
			printf("Book found\n");
			printf("ID = %d\n", books[i]->id);
			printf("title = %s\n", books[i]->title);
			printf("auther = %s\n", books[i]->auther);
			break;
		}
	}
	if (!found) {
		printf("Not found");
	}
	return 0;
}
