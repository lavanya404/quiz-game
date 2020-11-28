#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
int level = 1;
int num = 0;

struct Node
{
    char name[20];
    char city[15];
    int score;
    struct Node *next ;
};
void printlist(struct Node *start)
{
  printf("\n\n\tDASHBOARD");
  printf("\n\t*************************************************************************");
  printf("\n\n\t\tNAME\t\tCITY\t\tSCORE");
  while(start!=NULL)
  {
      printf("\n\n\t\t%s",start->name);
      printf("\t\t%s",start->city);
      printf("\t\t%d",start->score);
      start = start->next;
      printf("\n");
  }

}

void questions(int n)
{
  char ch;
  switch(n)
  {
      case 0:printf("\n\n\n\t\t");
             printf("Who among the following wrote Sanskrit grammar?\n\n\t\t");
             printf("(a) Kalidasa \t\t\t (b) Charak\n");
             printf("\t\t(c) Panini \t\t\t (d) Aryabhatt");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='c'){
             num++;}
              getchar();
             break;
      case 1:printf("\n\n\n\t\t");
             printf("Which among the following headstreams meets the Ganges in last?\n\n\t\t");
             printf("(a) Alaknanda \t\t\t (b) Pindar\n");
             printf("\t\t(c) Mandakini \t\t\t (d) Bhagirathi");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='d'){
             num++;}
              getchar();
             break;
      case 2:printf("\n\n\n\t\t");
             printf("The metal whose salts are sensitive to light is?\n\n\t\t");
             printf("(a) Zinc \t\t\t (b) Silver\n");
             printf("\t\t(c) Copper \t\t\t (d) Aluminum");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='b'){
             num++;}
              getchar();
             break;
      case 3:printf("\n\n\n\t\t");
             printf("Patanjali is well known for the compilation of \n\n\t\t");
             printf("(a) Yoga Sutra \t\t\t (b) Panchatantra\n");
             printf("\t\t(c) Brahma Sutra \t\t (d) Ayurveda");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='a'){
             num++;}
              getchar();
             break;
      case 4:printf("\n\n\n\t\t");
             printf("River Luni originates near Pushkar and drains into which one of the following?\n\n\t\t");
             printf("(a) Rann of Kachchh \t\t\t (b) Arabian Sea\n");
             printf("\t\t(c) Gulf of Cambay \t\t\t (d) Lake Sambhar");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='a'){
             num++;}
              getchar();
             break;
      case 5:printf("\n\n\n\t\t");
             printf("Which one of the following rivers originates in Brahmagiri range of Western Ghats?\n\n\t\t");
             printf("(a) Pennar \t\t\t (b) Cauvery\n");
             printf("\t\t(c) Krishna \t\t\t (d) Tapti");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='b'){
             num++;}
              getchar();
             break;
      case 6:printf("\n\n\n\t\t");
             printf("The country that has the highest in Barley Production?\n\n\t\t");
             printf("(a) China \t\t\t (b) India\n");
             printf("\t\t(c) Russia \t\t\t (d) France");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='c'){
             num++;}
              getchar();
             break;
      case 7:printf("\n\n\n\t\t");
             printf(" Tsunamis are not caused by\n\n\t\t");
             printf("(a) Hurricanes \t\t\t (b) Earthquakes\n");
             printf("\t\t(c) Undersea landslides \t (d) Volcanic eruptions");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='a'){
             num++;}
              getchar();
             break;
      case 8:printf("\n\n\n\t\t");
             printf(" Chambal river is a part of  \n\n\t\t");
             printf("(a) Sabarmati basin \t\t(b) Ganga basin\n");
             printf("\t\t(c) Narmada basin \t\t(d) Godavari basin");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='c'){
             num++;}
              getchar();
             break;
      case 9:printf("\n\n\n\t\t");
             printf("D.D.T. was invented by?\n\n\t\t");
             printf("(a) Mosley \t\t\t (b) Rudolf\n");
             printf("\t\t(c) Karl Benz \t\t\t (d) Dalton");
             printf("\n\t\tAnswer:");
             scanf("%c",&ch);
             if(ch=='a'){
             num++;}
             getchar();
             break;

  }
}

void load()
{
int i=0;
printf("\n\n\n\t\t\t\t\t\t\tLOADING\n\n\n\n\n");
printf("\t\t");
while(i<90)
{
 printf("/");
 Sleep(20);
 i++;
}
Sleep(2000);
printf("\n\n\n\t\t\t\t\t\t\t LEVEL %d",level);
level++;
printf("\n\n\n");
Sleep(2000);
}
void main()
{
 char e_name[25],e_city[15];
 int i,n;
 struct Node *start = NULL;
 home:
 system("cls");
 printf("\n\n\n\n\n\n");
 printf("\t\t\t\tHIII!!! WELCOME \n");
 printf("\n\t\t\tPLEASE ENTER YOUR NAME BELOW\n\n\n");
 struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
 printf("\t\t\tNAME: ");
 scanf("%[^\n]%*c",e_name);
 strcpy(ptr->name,e_name);
 printf("\n\n\t\t\tCITY: ");
 scanf("%[^\n]%*c",e_city);
 strcpy(ptr->city,e_city);
 ptr->score = num;
 ptr->next = start;
 start = ptr;
 printf("\n\n\n");
 system("cls");
 load();
 system("cls");
 for(i=0;i<10;i++)
    {C:\Users\USER\Desktop\codeblocks_snippets\quiz_game\quiz_game.cbp
     srand(time(NULL));
     n=rand()%10;
     questions(n);
     system("cls");
    }
ptr->score = num;

printf("\n\n\n\t\tTOTAL SCORE :%d ",num);
printf("\n\n\n\t\tPress P to Proceed playing");
printf("\n\n\n\t\tPress Q to Quit the game\n\n\t\tEnter choice: ");
char enter=toupper(getch());
     if (enter=='P')
	{
	    system("cls");
	    load();
	    system("cls");
        for(i=0;i<10;i++)
        {
        srand(time(NULL));
        n=rand()%10;
        printf("%d",n);
        questions(n);
        system("cls");
        }
        ptr->score = num;
        printf("\n\n\n\t\tYOUR TOTAL SCORE :%d ",num);
        printf("\n\n\t\tPress D to display dashboard");
        printf("\n\n\t\tPress A to play again");
        printf("\n\n\t\tPress C to close game");
        char press=toupper(getch());
        if (press=='D')
        {
            system("cls");
            printlist(start);
        }
        else if (press=='A')
        {
            num=0;
            level=1;
            goto home;
        }
        else
        {
        system("cls");
        printf("\n\n\n\t\tWE ARE HAPPY THAT YOU CHOOSE OUR QUIZ GAME HOPE YOU ARE HAPPY TOO");
        printf("\n\t\tTHANKS FOR PLAYING :)");
        printf("\n\t\tHAVE A BEAUTIFUL DAY");
        printf("\n\t\tBYE");
        exit(1);
        printf("\n\n");
    }

}
	else
    {
        system("cls");
        printf("\nTHANKS FOR PLAYING :)");
        exit(1);
        printf("\n\n");
    }

//printlist(start);




}
