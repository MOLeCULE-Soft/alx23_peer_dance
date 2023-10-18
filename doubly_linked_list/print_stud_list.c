#include "list.h"

void print_stud_list(const list_t *h)
{
	list_t *tmp;
	student_t st;

	tmp = (list_t *)h;
	printf("|%5s|%10s|%5s|%15s|%10s|\n", "ID", "Name", "Age", "Country", "Score");
	while (tmp)
	{
		st = tmp->student;
		printf("|%4ld.|%10s|%5d|%15s|%10.2f|\n", st.id, st.name, st.age, st.country, st.score);
		tmp = tmp->next;
	}
}