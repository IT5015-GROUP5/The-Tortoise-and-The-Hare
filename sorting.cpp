
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define N 20

//	Structure
typedef struct node{
	int book_no;
	int page_no;
	char title[255];
	char ISBN[255];
	char contents[255];
	char author[255];
}records[N];

//	Prototype
void readRec(records);
void writeRec(records);
void sort(records);
void display(records);

//	Prototypes for the sorting method
void sortBookNum(records, orderType);
void sortPageNum(records, orderType);
void sortTitle(records, orderType);
void sortISBN(records, orderType);
void sortContents(records, orderType);
void sortAuthor(records, orderType);

int main()
{
	records book_record;

	return 0;
}

void readRec(records)
{
	int i;
	FILE * fp;
    char *filename="library.txt"; 
	fp = fopen(filename, r);
	
	
}

void writeRec(records)
{
	int x;
	
	FILE * fp;
    char *filename="library.txt";
	
	printf("Placing in file...");
	
	if(sizeof(records) != 0){
		
		fp= fopen(filename,"w");
	}
	
	fclose(fp);
}

void sort(records data[])
{
	char choice;
	
	//	Option Panel
	printf("Sort by\n");
	printf("1 - Book Number\n");
	printf("2 - Book Number\n");
	printf("3 - Book Number\n");
	printf("4 - Book Number\n");
	printf("5 - Book Number\n");
	printf("6 - Book Number\n");
	printf("7 - Book Number\n\n");
	printf("Enter your choice: ");
	scanf("%c", &choice);
	
	//	switch case for the chosen option
}

//	Function for sorting book number in ascending or descending order
void sortBookNum(records data[], orderType)
{
}

//	Function for sorting page number in ascending or descending order
void sortPageNum(records data[], orderType)
{
}

//	Function for sorting book title in ascending or descending order
void sortTitle(records data[], orderType)
{
}

//	Function for sorting ISBN in ascending or descending order
void sortISBN(records data[], orderType)
{
}

//	Function for sorting book content in ascending or descending order
void sortContents(records data[], orderType)
{
}

//	Function for sorting book author in ascending or descending order
void sortAuthor(records data[], orderType)
{
}


