#include <stdio.h>
#include <string.h>
#define SIZE 5

struct Student{
	int Rollno;
	char name[20];
};
struct Student table[SIZE];

void initialize(){
	int i;
	for(i = 0;i<SIZE;i++){
		table[i].Rollno = -1;
	}
}
int hashfunction(int Rollno){
	return Rollno%SIZE;
}

void insert(int Rollno, char name[])
{
	int index = hashfunction(Rollno);
	table[index].Rollno = Rollno;
	strcpy(table[index].name,name);
	printf("%s is inserted at index %d\n",name,index);
}
void search(int Rollno){
	int index = hashfunction(Rollno);
	if(table[index].Rollno == Rollno){
		printf("\n Student Found\n");
		printf("Rollno is : %d",Rollno);
		printf("Name: %s\n",table[index].name);
	}else{
		printf("student not found\n");
	}
}
void display

int main()
{
	initialize();
	insert(121,"Ritesh");
	insert(143,"Shashi");
	insert(1165,"Harsh");
	insert(234,"Deep");
	search(114);
}
