/*
 * Programmer: Amna(23K-0066)
 * Date: 10/12/23
 * Desc: Creates a 2D array for multiple departments. Assigns each department with employees with random names, roles and stats. Finds the best department according to stats
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[20];
    char role[10];
    int communication;
    int team_work;
    int creativity;
} Employee;

char *depart_names[4] = {"HR", "Finance", "Marketing", "Logistics"};
char *names[20] = {"John Doe", "Alice Johnson", "Michael Brown", "Sophia Williams", "James Davis", "Olivia Miller", "William Garcia", "Ava Rodriguez", "Robert Martinez", "Emily Wilson", "Charles Clark", "Ella Anderson", "David Thompson", "Grace Taylor", "Joseph White", "Amelia Moore", "Andrew Hill", "Natalie Jackson", "Charles Dicken", "Sophie Lee"};
char *roles[5] = {"Director", "Executive", "Manager", "Employee", "Trainee"};


Employee **createDepartments() {
    Employee **departments = (Employee **)malloc(sizeof(Employee *) * 4);
    Employee *employees = (Employee *)malloc(sizeof(Employee) * 5 * 4);

    for (int i = 0; i < 4; i++) {
        departments[i] = &employees[i * 5];
    }

    return departments;
}

void printEmployees(Employee *department) {
    printf("%7c%-12s|%9s%4c|%15s%-2c|%11s%-2c|%12s%-2c|\n", ' ', "Name", "Role", ' ', "Communication", ' ', "Team Work", ' ', "Creativity", ' ');
    for (int i = 0; i < 5; i++) {
        printf("%2c%-17s|%2c%-11s|%10d%-7c|%8d%-5c|%8d%-6c|\n",
               ' ', department[i].name, ' ', department[i].role, department[i].communication, ' ', department[i].team_work, ' ', department[i].creativity, ' ');
    }
}

int assignRoles(Employee *department) {
    bool rolesCheck[5] = {true, true, true, true, true};

    for (int i = 0; i < 5; i++) {
        int indexN, indexR;
        do {
            indexN = rand() % 20;
        } while (names[indexN] == NULL);

        do {
            indexR = rand() % 5;
        } while (!rolesCheck[indexR]);

        strcpy(department[i].role, roles[indexR]);
        strcpy(department[i].name, names[indexN]);

        department[i].communication = rand() % 100 + 1;
        department[i].team_work = rand() % 100 + 1;
        department[i].creativity = rand() % 100 + 1;

        names[indexN] = NULL;
        rolesCheck[indexR] = false;
    }

    return 0;
}

int getHighestStatsDepartment(Employee **departments) {
    int maxStats = INT_MIN, totalStats, highestDepartment = 0;
    for (int i = 0; i < 4; i++) {
        totalStats = 0;
        for (int j = 0; j < 5; j++) {
            totalStats += departments[i][j].communication + departments[i][j].team_work + departments[i][j].creativity;
        }

        if (totalStats > maxStats) {
            maxStats = totalStats;
            highestDepartment = i;
        }
    }

    return highestDepartment;
}

int main() {
    srand((unsigned)time(NULL));
    	
    printf("Name: Amna\nID: 23K-0066\n\n");
    
    Employee **departments = createDepartments();

    for (int i = 0; i < 4; i++) {
        assignRoles(departments[i]);
    }

    int highestDepartment = getHighestStatsDepartment(departments);

    for (int i = 0; i < 4; i++) {
        if (i == highestDepartment) {
            continue;
        }
        printf("%20cEmployees of department: %s\n", ' ', depart_names[i]);
        printEmployees(departments[i]);
        printf("\n");
    }

    printf("%20cBest department award goes to: %s\n", ' ', depart_names[highestDepartment]);
    printEmployees(departments[highestDepartment]);

    free(departments[0]); // Free allocated memory
    free(departments);

    return 0;
}

