
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stu{
	char *name;
	int age;
	double record;
} Student;

typedef struct _node{
	void *data;
	struct _node *next;
} Node;

typedef struct _linkedList{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;

Student initStu(char *name, int age, double record){
	Student stu;
	stu.name = (char *)malloc(30);
	strcpy(stu.name, name);
	stu.age = age;
	stu.record = record;

	return stu;
}

void outStu(Student stu){
	printf("%s's info: age: %d and record: %.2f\n", stu.name, stu.age, stu.record);

	return;
}

int main(int argc, char **argv)
{
	Student stu = initStu("zhangsan", 20, 77.5);
	Student stu1 = initStu1("zhangsan1", 21, 78.5);

	outStu(stu);
	outStu(stu1);

	return 0;
}

