#include <stdio.h>
#include <string.h>
#define Size 10

struct Student{
	int rollno;
	char name[20];
};
struct Student table[Size];

void initialize(){
	int i;
	for(i = 0;i<Size;i++){
		table[i].rollno=-1;
	}
}
int hashfunction(int rollno)
{
	return rollno%Size;
}
void insert(int rollno,char name[])
{
 	int index = hashfunction(rollno);
 	while(table[index].rollno!= -1)
 	{
 	  index = (index+1)% Size;
	}
	table[index].rollno = rollno;
	strcpy(table[index].name,name);
	printf("%s is inserted at index %d\n",table[index].name,index);
}
void search(int rollno) {
    int index = hashfunction(rollno);
    int start = index;

    while (table[index].rollno != -1) {
        if (table[index].rollno == rollno) {
            printf("%d found at index %d\n", rollno, index);
            return;
        }

        index = (index + 1) % Size;

        if (index == start)
            break;
    }

    printf("%d not found\n", rollno);
}
int main()
{
	initialize();
	insert(121,"Ritesh");
	insert(141,"Shashi");
	insert(111,"Harsh");
	insert(233,"Deep");
	search(111);
}
