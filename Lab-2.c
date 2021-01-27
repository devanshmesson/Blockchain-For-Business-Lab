#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define freopen freopen("input.txt","r",stdin);freopen("out.txt","w",stdout);
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int long long int

//Linked list
struct linkedlist
{
	int id,experience,salary,sizn,sizd;
	char department[20],name[20];
  struct linkedlist *next;
}*emp,*traverse;

//Global variables to store data
int id1,experience1,salary1,sizen,sized;
char department1[20],name1[20];

//Insert in linked list
void insert()
{
  traverse=(struct linkedlist*)malloc(sizeof(struct linkedlist));
  traverse->next=emp;
  (traverse)->id=id1;
  (traverse)->experience=experience1;
  traverse->sizn=sizen;
  traverse->sizd=sized;
  (traverse)->salary=salary1;
  for(int i=0;i<sizen;i++)(traverse)->name[i]=name1[i];
  for(int i=0;i<sized;i++)(traverse)->department[i]=department1[i];
  emp=traverse;
}



int main()
{
    freopen
    int tt;
    printf("1.Retrieve Employee details\n");
    printf("2.Exit\n");
    int r=1;
  
      int i;
      int d;

      //Insertion
      while(1)
      {
      	scanf("%d",&id1);
      	if(id1==-1)break;
      	scanf("%s %s %d %d",name1,department1,&experience1,&salary1);
        sizen=strlen(name1);
        sized=strlen(department1);
        insert();
      }

    //Query
    while(1)
    {
      printf("\n\n");
      printf("Enter employee id\n");
      scanf("%d",&d);
      traverse=emp;
      if(d==-1)break;
      while(1)
      {
        if(traverse->id==d)
        {
          printf("Employee's name: ");
          for(int i=0;i<traverse->sizn;i++)printf("%c",traverse->name[i]);
          printf("\nEmployee's department:");
          for(int i=0;i<traverse->sizd;i++)printf("%c",traverse->department[i]);
          printf("\nEmployee's experience: %d",traverse->experience);
          printf("\nEmployee's salary: %d",traverse->salary);
          break;
        }
        traverse=traverse->next;
      }

     }
    
    return 0;
}



// INPUT:
// 1 devansh informatics 1 50000
// 10 rohan gaming 10 70000
// 4 Rahul blockchain 4 60000
// 2 Vanaj informatics 3 55000
// 7 Parth gaming 11 80000
// 9 Ram finance 14 90000
// 3 Sham cloud 16 100000 
// 8 Raju  AI  19 200000
// -1
// 10
// 2
// 7
// -1







