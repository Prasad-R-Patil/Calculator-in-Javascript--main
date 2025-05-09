#include<stdio.h>
#include <string.h>



void Addition()
{
    int iNo1=0;
    int iNo2=0;
    int iRet =0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    iRet = iNo1 + iNo2;

     printf("*****************************************************\n");
     printf("Your Addition is :- %d\n",iRet);
     printf("*****************************************************\n");

}
void Substraction()
{
    int iNo1=0;
    int iNo2=0;
    int iRet =0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    iRet = iNo1 - iNo2;

     printf("*****************************************************\n");
     printf("Your Substraction is :- %d\n",iRet);
     printf("*****************************************************\n");

}
void Multiplaction()
{
    int iNo1=0;
    int iNo2=0;
    int iRet =0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    iRet = iNo1 * iNo2;

     printf("*****************************************************\n");
     printf("Your Multiplaction is :- %d\n",iRet);
     printf("*****************************************************\n");

}
void Division()
{

    int iNo1=0;
    int iNo2=0;
    int iRet =0;

    printf("Enter First Number : ");
    scanf("%d",&iNo1);

    printf("Enter Second Number : ");
    scanf("%d",&iNo2);

    iRet = iNo1 / iNo2;

     printf("*****************************************************\n");
     printf("Your Division is :- %d\n",iRet);
     printf("*****************************************************\n");

}
void DisplayResult()

{
    float fMark = 0.0f;

   
    printf("Enter your Persentage : \n");
    scanf("%f",&fMark);
  

    if ((fMark < 0.00) || (fMark>100.00))   // Filter
    {
        printf("*****************************************************\n");
        printf("You are Enter Invalid Input\n");
        printf("*****************************************************\n");
    }

    if((fMark >= 0.0) && (fMark <35.00))
    {
        printf("*****************************************************\n");
        printf("Student Are Fail\n");
        printf("*****************************************************\n");
    }
    else if((fMark >= 36.00)&& (fMark <50.00))
    {
        printf("*****************************************************\n");   
        printf("Student Are Pass\n");
        printf("*****************************************************\n");
    }
     else if((fMark >= 66.00)&& (fMark <60.00))
    {
        printf("*****************************************************\n");
        printf("Student Are Second Class: \n");
        printf("*****************************************************\n");
    }
    else if((fMark >= 60.00)&& (fMark <75.00))
    {
        printf("*****************************************************\n");
        printf("Student Are First Class:\n");
        printf("*****************************************************\n");
    }
    else if((fMark >= 75.00)&& (fMark <=100))
    {
        printf("*****************************************************\n");
        printf("Student Are First Class with Destineshion\n");
        printf("*****************************************************\n");
    }
    
   
}

void MinimumNumber()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter first no : ");
    scanf("%d",&iNo1);
    
    printf("Enter second no : ");
    scanf("%d",&iNo2);

    if(iNo1<=iNo2)
    {
        printf("*****************************************************\n");
        printf("Minimum no is : %d \n",iNo1 );
        printf("*****************************************************\n");
    }
    else
    {
         printf("*****************************************************\n");
         printf("Minimum no is : %d \n",iNo2);
         printf("*****************************************************\n");
    }
}

void Average()
{
     int iNo1=0;
     int iNo2=0;
     int iNo3=0;
     
    float fAns =0.0f;

     printf("Enter first no : ");
    scanf("%d",&iNo1);
    
    printf("Enter second no : ");
    scanf("%d",&iNo2);

    printf("Enter third no : ");
    scanf("%d",&iNo3);


    fAns= ((float)(iNo1+iNo2+iNo3)/3);

     printf("*****************************************************\n");
     printf("The Average is : %f \n",fAns);
     printf("*****************************************************\n");

    
}

void ChakeEvenOdd()
{
    int iNo =0;
    

    printf("Enter number : ");
    scanf("%d",&iNo);

    if ((iNo % 2)==0)
    {
        printf("*****************************************************\n");
        printf("%d is an even no\n",iNo);
        printf("*****************************************************\n");
    }
    else
    {
        printf("*****************************************************\n");
         printf("%d is an Odd no\n",iNo);
         printf("*****************************************************\n");
    }
}




int main()
{
    char Start [10];
     int iChoice =0;
       
        printf("=====================================================\n");
        printf("Welcome to QuizCalculator...\n");
        printf("=====================================================\n");
        
        printf("=====================================================\n");
        printf("you can start the Calculator to write '#Start' ::== ");
        scanf("%s", &Start);
        printf("=====================================================\n");

        
		if (strcmp(Start, "#Start") == 0)
		{
        
            printf("=====================================================\n");
			printf("Select Any Operation\n");
            printf("=====================================================\n");
           
                printf("=====================================================\n");
                printf("1.Addtion\n");
                printf("2.Substraction\n");
                printf("3.Multiplaction\n");
                printf("4.Division\n");
                printf("5.DisplayResult\n");
                printf("6.Maximum\n");
                printf("7.Average\n");
                printf("8.Chake Even Or Odd\n");
                printf("0.Enter Zero to Exit\n");
                printf("=====================================================\n");
			    scanf("%d", &iChoice);
                printf("=====================================================\n");

            switch (iChoice)
			{
			case 1:
				Addition();
				break;

			case 2:
				Substraction();
				break;

			case 3:
				Multiplaction();
				break;

			case 4:
				 Division();
				break;
            case 5:
                DisplayResult();
                break;
            case 6:
                MinimumNumber();
                break;
            case 7:
                Average();
                break;
            case 8:
                ChakeEvenOdd();
                break;

			default:
                printf("=====================================================\n");
				printf("Enter the Invalid Choice\n");
                printf("=====================================================\n");
				break;
			}
        
        }
		
	
	

    return 0;
}