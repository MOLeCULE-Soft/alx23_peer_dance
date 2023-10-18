#include "list.h"

int main(void);

int main(void)
{
	student_t stud;
	list_t *stud_list;
	char *filename = "register.csv";
	FILE *file;
	char line_buffer[BUFFER_SIZE];
	char *line;
	size_t len;
	short choice;

	file = fopen(filename, "r");

	if (file)
	{
		fgets(line_buffer, BUFFER_SIZE, file);
		while (fgets(line_buffer, BUFFER_SIZE, file))
		{
			stud.id = atoi(strtok(line_buffer, DELIMITER));
			stud.name = strtok(NULL, DELIMITER);
			stud.age = atoi(strtok(NULL, DELIMITER));
			stud.country = strtok(NULL, DELIMITER);
			stud.score = atof(strtok(NULL, DELIMITER));
			add_stud_node(&stud_list, stud);
		}
		fclose(file);
	}
	{
		fprintf(stderr, "File: %s: could not be opened\n", filename);
	}

	while (1)
	{
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				print_stud_list(stud_list);
				break;
			case 2:
				line = NULL;
				printf("Enter student name: ");
				getchar();
				getline(&line, &len, stdin);
				student_t *s = search_stud_by_name(&stud_list, strtok(line, "\n"));

				if (s)
					print_student(s);
				else
					fprintf(stderr, "%s not found!\n", line);
				free(line);
				break;
			case 3:
				exit(0);
				break;
			default:
				fprintf(stderr, "\nInvalid choice [%d]! Try again\n", choice);
				break;
		}
	}
}