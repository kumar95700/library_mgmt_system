#include<stdio.h>
#include<stdlib.h>
#include "book.h"
#include "student.h"
#define TOTAL_BOOK 10
#define MAX_STUDENT_CAPACITY 50
enum main_menu{
    add_new_student=1,
    display_student_details,
    delete_student_detail,
    enter_book_detail,
    display_book_detail,
    exit_menu
};
struct student s[MAX_STUDENT_CAPACITY]; 
struct book b[TOTAL_BOOK];
int total_books=0;
int total_student=0;
int input_student_details()
{
     int n;
     printf("Enter the No. of student to be added:");
     scanf("%d",&n);
     if(n > MAX_STUDENT_CAPACITY)
     {
         printf("\nNo.of Student can't be more than %d",MAX_STUDENT_CAPACITY);
         return 0;
     }

     for(int i=0; i<=n-1; i++)
     {
	 int j=total_student-1;
	 j=j+1;
         printf("Enter roll no of student:");
	 scanf("%d", &s[j].roll_no);
	 printf("\nEnter the name of student:");
	 scanf("%s", s[j].name);
	 printf("\nEnter the marks of student:");
	 scanf("%f", &s[j].marks);
        total_student=total_student+1;
     }
}
void disp_student_details()
{
       for(int i=0; i<total_student; i++)	
       {
		printf("\n-------------------------------------------\n");
                printf("The name of student:%s\n",s[i].name);
                printf("The roll no. of student:%d\n",s[i].roll_no);
                printf("The marks of student:%f\n",s[i].marks);
		printf("-------------------------------------------\n");
       }
				
}
void input_book_detail()
{
               int n=0;
               printf("number of books to be added");
               scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
	       int j=total_books-1;
	       j=j+1;	       
              // printf("The name of student:%s\n",s[j].name);
               printf("Enter the name of book:");
               scanf("%s",b[j].book_name);	
               printf("Enter the number of book\n");
               scanf("%d",&b[j].no_of_book);
	       total_books=total_books+1;
	}
}
void disp_book_details()
{
	for(int i=0; i<total_books; i++)
	{
		printf("-------------------------------------------\n");
        	printf("The name of book:%s\n",b[i].book_name);
             // printf("The name of student:%s\n",s[i].name);
        	printf("The number of book:%d\n",b[i].no_of_book);
		printf("-------------------------------------------\n");
       
	}
        	printf("Current books count=%d",total_books);
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
        	printf("\n4.Enter book detail:");
        	printf("\n5:Display the book detail:");
        	printf("\n6.Exit\n");
        	printf("Enter your choice:");
        	scanf("%d",&choice);
	switch( choice)
	{
		case add_new_student:
		input_student_details();
		//scanf("%f",s.marks);
		 break;
		
                case display_student_details:
		disp_student_details();
		 break;

                case delete_student_detail:
		 
		 break;

		case enter_book_detail:
		input_book_detail();
		 break;

		case display_book_detail:
	        disp_book_details();
		 break; 
		
                case exit_menu:
		exit(0);

		default:
		printf("Invalid choice");
	}

	printf("\nWants to continue(Y/N):");
	scanf("%s",&ch);
	}while(ch=='y'||'y');
}

