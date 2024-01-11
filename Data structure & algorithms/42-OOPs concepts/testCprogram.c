#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    int class;   // Wait there is something that i have know like each variable take its own size like int take 4 bytes char takes 1 bytes
    char section; // but whent I print the roll class and section size it shows 12 bytes. As of my calculation it should be 9? 
                    // for understanding this you must know about padding and greedy alignment
};

int main(){

    struct student s1;
    strcpy(s1.name, "Jubayer");
    s1.roll = 5011;
    s1.class = 11;
    s1.section = 'B';

    printf("Details of the student one: \n");
    printf("Name: %s", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Class : %d\n", s1.class);
    printf("Section : %c\n", s1.section);

    printf("Size of student struct: %d\n", sizeof(s1));

    return 0;
}