#include "list.h"

void menu(void)
{
	printf("\nMenu\n====\n");
	printf("1. Show List\n");
	printf("2. Search by name\n");
	printf("3. Quit\n\n");
	printf("Enter choice: ");
}

void print_student(student_t *s)
{
	printf("Student Details\n-----------\n");
	printf("%10s : %-20d\n", "ID", s->id);
	printf("%10s : %-20s\n", "Name", s->name);
	printf("%10s : %-20d\n", "Age", s->age);
	printf("%10s : %-20s\n", "Country", s->country);
	printf("%10s : %-20f\n", "Score", s->score);
	printf("\n");
}