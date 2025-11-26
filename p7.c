//array of pointers to structure

    #include<stdio.h>

struct book
{
    int id;
    char title[20];
    char author[20];
};

int main()
{
    struct book b1 = {101, "c-intro", "ritchie"};
    struct book b2 = {102, "story", "aaa"};
    struct book b3 = {103, "lab", "xxx"};

    struct book *books[3] = {&b1, &b2, &b3};

    int searchid, i, found = 0;

    printf("Enter book id to search: ");
    scanf("%d", &searchid);

    for (i = 0; i < 3; i++)
    {
        if (books[i]->id == searchid)   
        {
            found = 1;
            printf("\nBook Found\n");
            printf("ID = %d\n", books[i]->id);
            printf("Title = %s\n", books[i]->title);
            printf("Author = %s\n", books[i]->author);
            break;
        }
    }

    if (!found)   
        printf("Book Not Found\n");

    return 0;  
}
