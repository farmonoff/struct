#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
        char street[30];
        int doorNum;
        int isworking;
} Address;

typedef struct{
    char name[50];
    int age;
    Address address;
} Person;

Person fillPerson() {
    Person new;
    printf("Name: "); scanf("%s", new.name);
    printf("Age: "); scanf("%d", &new.age);
    printf("Street: "); scanf("%s", new.address.street);
    printf("Doornum: "); scanf("%d", &new.address.doorNum);
    printf("Ishlayabsizmi?: "); scanf("%d", &new.address.isworking);
    return new;
}

void outperson(Person *person){
    printf("Name: %s\nAge: %d\nStreet: %s\nDoornum: %d\nIsworking: %d\n", person->name, person->age, person->address.street, person->address.doorNum, person->address.isworking ? "true":"false");
}

int main() {

    Person person = fillPerson();
    outperson(&person);
    return 0;
}