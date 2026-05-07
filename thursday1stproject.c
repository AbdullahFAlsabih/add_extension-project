#include <stdio.h>
#include <stdlib.h>

struct  student 
{
    char name;
     int id;
    int age;

};
int main(){
    void *ptr = malloc(sizeof(struct student));
    struct student *sptr = (struct student*)ptr;

    sptr->name = 'A';
    sptr->id = 0x44eeff11;
    sptr->age = 0x663388dd;


    FILE *fAbdullah= fopen("students.abdi", "wb");
    if(fAbdullah!= NULL)
    {
        fwrite(ptr, sizeof(struct student), 1, fAbdullah);
        fclose(fAbdullah);
    }
free(ptr);



}
