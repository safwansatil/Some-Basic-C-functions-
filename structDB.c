#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

// Structure definition for a student.
struct Student
{
    int id;
    char name[50];
    float gpa;
};

// Global database and counter.
struct Student database[MAX_STUDENTS];
int studentCount = 0;

// Initializes a student struct with the provided details.
void initializeStudent(struct Student *s, int id, const char *name, float gpa)
{
    s->id = id;
    strncpy(s->name, name, sizeof(s->name) - 1);
    s->name[sizeof(s->name) - 1] = '\0';
    s->gpa = gpa;
}

// Prints a single student's details.
void printStudent(const struct Student *s)
{
    printf("ID: %d, Name: %s, GPA: %.2f\n", s->id, s->name, s->gpa);
}

// Checks if the student ID is already present in the database.
int isDuplicate(int id)
{
    for (int i = 0; i < studentCount; i++)
    {
        if (database[i].id == id)
        {
            return 1; // Duplicate found.
        }
    }
    return 0; // No duplicate found.
}

// Adds a new student to the database.
// Returns 1 on success, 0 if the database is full or the ID is already present.
int addStudent(int id, const char *name, float gpa)
{
    if (studentCount >= MAX_STUDENTS)
    {
        printf("Error: Maximum number of students reached!\n");
        return 0;
    }
    if (isDuplicate(id))
    {
        printf("Error: Student with ID %d already exists!\n", id);
        return 0;
    }

    // Initialize a new student in the next available slot.
    initializeStudent(&database[studentCount], id, name, gpa);
    studentCount++;
    printf("Student added successfully.\n");
    return 1;
}

// Lists all the student records in the database.
void listDatabase()
{
    printf("\n--- Student Database ---\n");
    if (studentCount == 0)
    {
        printf("The database is empty.\n");
    }
    else
    {
        for (int i = 0; i < studentCount; i++)
        {
            printStudent(&database[i]);
        }
    }
    printf("------------------------\n");
}

int main()
{
    int choice;
    while (1)
    {
        // Print menu.
        printf("\nSimple Student Database Menu:\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int id;
            char name[50];
            float gpa;

            printf("Enter student ID: ");
            scanf("%d", &id);
            printf("Enter student Name: ");
            scanf("%s", name); // Simple input; does not capture spaces.
            printf("Enter student GPA: ");
            scanf("%f", &gpa);

            addStudent(id, name, gpa);
        }
        else if (choice == 2)
        {
            listDatabase();
        }
        else if (choice == 3)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}
