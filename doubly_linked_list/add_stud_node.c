#include "list.h"

void add_stud_node(list_t **head, student_t student)
{
	list_t *new_stud_node;

	new_stud_node = malloc(sizeof(list_t));
	if (new_stud_node && head)
	{
		new_stud_node->student.name = malloc(50);
		new_stud_node->student.country = malloc(50);
		new_stud_node->student.id = student.id;
		strcpy(new_stud_node->student.name, student.name);
		new_stud_node->student.age = student.age;
		strcpy(new_stud_node->student.country, student.country);
		new_stud_node->student.score = student.score;

		if (*head)
			(*head)->prev = new_stud_node;
		new_stud_node->next = *head;
		new_stud_node->prev = NULL;
		*head = new_stud_node;
	}
}