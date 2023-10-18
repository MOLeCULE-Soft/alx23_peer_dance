#ifndef LIST_HEADER
#define LIST_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIMITER ",\n"
#define BUFFER_SIZE 256

typedef struct student_s
{
	unsigned short id;
	char *name;
	unsigned short age;
	char *country;
	float score;
} student_t;

/**
* struct list_s - doubly linked list
* @student: student_t
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*
*/
typedef struct list_s
{
	student_t student;
	struct list_s *prev;
	struct list_s *next;
} list_t;

void print_stud_list(const list_t *);
void add_stud_node(list_t **, student_t);
student_t *search_stud_by_name(list_t **, char *);
void menu(void);
void print_student(student_t *);

#endif
