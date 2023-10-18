#include "list.h"

student_t *search_stud_by_name(list_t **head, char *name)
{
	list_t *tmp;

	tmp = *head;
	while (tmp)
	{
		if (strcmp(name, tmp->student.name) == 0)
		{
			return (&tmp->student);
		}
		tmp = tmp->next;
	}
	return (NULL);
}