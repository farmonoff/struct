#include<stdio.h>

struct human {
    char name[16];
    char surname[20];
    int age;
    char gender[10];
    char country[20];
    char nationality[20];
};

int main() {

    struct human Mayk;

    printf("Name: "); scanf("%s", Mayk.name);
        printf("Surname: "); scanf("%s", Mayk.surname);
            printf("Age: "); scanf("%d", &Mayk.age);
            printf("Gender: "); scanf("%s", Mayk.gender);
        printf("Country: "); scanf("%s", Mayk.country);
    printf("Nationality: "); scanf("%s", Mayk.nationality); 

    puts("");

    printf("Name: %s\n", Mayk.name);
        printf("Surname: %s\n", Mayk.surname);
            printf("Age: %d\n", Mayk.age);
            printf("Gender: %s\n", Mayk.gender);
        printf("Country: %s\n", Mayk.country);
    printf("Nationality: %s\n", Mayk.nationality);

return 0;   
}