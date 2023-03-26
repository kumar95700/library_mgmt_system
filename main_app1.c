#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll_no;
	char name[30];
	float marks;
};
struct book{
	char book_name[30];
	int no_of_book;
};

    struct student s[3] ;
    struct book b[3];
void input_student_details()
{
	for(int i=1; i<3; i++)
	{
		printf("Enter roll no of student:");
		scanf("%d",&s[i].roll_no);
		printf("Enter the name of student:");
		scanf("%s",s[i].name);
		printf("Enter the marks of student:");
		scanf("%f",&s[i].marks);

	}
}
void disp_student_details()
{
       for(int i=0; i<3; i++)	
       {
    printf("The name of student:%s\n",s[i].name);
    printf("The roll no. of student:%d\n",s[i].roll_no);
    printf("The marks of student:%f\n",s[i].marks);
       }
				
}
void input_book_detail()
{
	for(int i=1; i<2; i++)
	{
          printf("Enter the name of book:\n");
          scanf("%s",b[i].book_name);	
          printf("Enter the number of book\n");
          scanf("%d",&b[i].no_of_book);
	}
}
void disp_book_details()
{
	for(int i=1; i<2; i++)
	{
	printf("The name of book:%s\n",b[i].book_name);
	printf("The number of book:%d\n",b[i].no_of_book);
	}
}
	
int main()
{
    int choice;
    char ch;
  //  struct student s[3] ;
	do
	{
	printf("\n1.Add new Student");
	printf("\n2.Display Student's detail");
	printf("\n3.Delete Student detail");
	printf("\n4.Enter book details:");
	printf("\n5:Display the book details:");
	printf("\n6.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch( choice)
	{
		case 1:
			input_student_details();
	    /*   	printf("\n\nEnter the student name:");
	        scanf("%s",s1.name);
		
	        printf("Enter the student roll:");	      
	      	scanf("%d", &s1.roll_no);

		printf("Enter the marks of student:");
		scanf("%f",s1.marks);*/
		break;
		
                case 2:
		disp_student_details();
		break;

                case 3:
		 
		break;

		case 4:
		 input_book_detail();
		 break;

		case 5:
		  disp_book_details();
		 break; 
		
                case 6:
		exit(0);

		default:
		printf("Invalid choice");
	}

	printf("\nWants to continue(Y/N)");
	scanf("%s",&ch);
	}while(ch=='y'||'y');
}

