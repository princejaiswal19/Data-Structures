#include<stdio.h>
int main(){
    int i;
    int truequestionCounter=0;
    int falsequestionCounter=0;
    
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point=0;
    
    printf("\n This is a Quiz in which there is 10 questions you will be awarded 5 points for every correct answer and 0 points for every incorrect answers.");

    printf("Welcome to the game \n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to end the game\n");

    scanf("%d",&i);
    if(i==7){

        printf("Game has started\n\n");
    }
    else if(i==0){

        printf("Game has ended\n");

    }
    else{
        printf("Invalid");
    }
    if(i==7){
        printf("\n1.Which of the following is the first calculating device ?\n");
        printf("(1)Abacus\n");
        printf("(2)Calculator\n");
        printf("(3)Turing Machine\n");
        printf("(4)Pascaline\n");
        printf("Enter the answer :\n");
        scanf("%d",&ans1);
        if(ans1==1)
        {
            printf("correct answer\n");
            point=point+5;
            truequestionCounter++;
            printf("You have been awarded: 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
            point=point-2;        
            falsequestionCounter++;

            printf("you have awarded: -2 \n");
        }
        printf("points obtained is:%d \n",point);

        printf("2. In which decade was the American Institute of Electrical Engineers (AIEE) founded ?\n");
        printf("(1)1850s\n");
        printf("(2)1880s\n");
        printf("(3)1930s\n");
        printf("(4)1950s\n");
        printf("Enter the answer :");
        scanf("%d",&ans2);
        if(ans2==2)
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
            point=point-2;      
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("3.Who Invented the mechanical calculator called Pascaline  ?\n");
        printf("(1)Charles Babbage\n");
        printf("(2)Blaise Pascal\n");
        printf("(3)Alan Turing\n");
        printf("(4)Lee De Forest\n");
        printf("Enter the answer :");
        scanf("%d",&ans3);
        if(ans3==2)
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
            point=point-2;     
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("4.Who among the following is considerd as the 'Father of Artificial Intelligence' ?\n");
        printf("(1)Charles Babbage\n");
        printf("(2)Lee de Forest\n");
        printf("(3)John McCharty\n");
        printf("(4)JP Eckert\n");
        printf("Enter the answer :");
        scanf("%d",&ans4);
        if(ans4==3)
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
           point=point-2;        
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("5.Which was the world's first successful electronic computer ?\n");
        printf("(1)PARAM\n");
        printf("(2)CRAY 1\n");
        printf("(3)Pascaline\n");
        printf("(4)ENIAC electronic Numerical Integrator and computer\n");
        printf("Enter the answer :");
        scanf("%d",&ans5);
        if(ans5==4)
        {
            printf("correct answer\n");
              point=point+5; 
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
          point=point-2;      
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("6.Who among the following used the term computer worm for the first time ?\n");
        printf("(1)John Burner\n");
        printf("(2)Alan Turing\n");
        printf("(3)John McCarthy\n");
        printf("(4)JP Eckart\n");
        printf("Enter the answer :");
        scanf("%d",&ans6);
        if(ans6==1)
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
           point=point-2;      
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("7.Which was the first virus detected on APARNET the forerunner of the internet in the early 1970s ?\n");
        printf("(1)Exe File\n");
        printf("(2)Creeper Virus\n");
        printf("(3)peeper Virus\n");
        printf("(4)Trozen horse\n");
        printf("Enter the answer :");
        scanf("%d",&ans7);
        if(ans7==2)
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
           point=point-2;      
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("8.Select the example of application software of computer ?\n");
        printf("(1)Ms word\n");
        printf("(2)Ms excel\n");
        printf("(3)Both A and B\n");
        printf("(4)MS-DOS\n");
        printf("Enter the answer :");
        scanf("%d",&ans8);
        if(ans8==4)
        {
            printf("correct answer\n");
            point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
            point=point-2;      
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("9.How the quality of printer is measured ?\n");
        printf("(1)Alphabet per minutes\n");
        printf("(2)Words Per Inch\n");
        printf("(3)Strike per Inch\n");
        printf("(4)Dots per Inch\n");
        printf("Enter the answer :");
        scanf("%d",&ans9);
        if(ans9==4) 
        {
            printf("correct answer\n");
              point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
          point=point-2;     
            falsequestionCounter++;

            printf("you have awarded -2 \n");
        }
        printf("points obtained is:%d\n",point);

        printf("10.Which of the following is also called translator ?\n");
        printf("(1)Data Representation\n");
        printf("(2)MS-DOS\n");
        printf("(3)Operating System\n");
        printf("(4)Language Processor\n");
        printf("Enter the answer :");
        scanf("%d",&ans10);
        if(ans10==4)
        {
            printf("correct answer\n");
            point=point+5;
            truequestionCounter++;
            printf("You have been awarded 5 points \n ");
        }
        else{
            printf("Incorrect answer\n");
            point=point-2;    
            falsequestionCounter++;

            printf("you have awarded -2\n");
        }
        
        
        printf("Total Corect question is: %d \n",truequestionCounter);

        printf("Total Incorect question is: %d \n",falsequestionCounter);
       
        
        printf("Total marks is: %d \n",point);
        
        printf("\n");
        printf("\n");
        printf("\n");
        printf("THANK YOU\n");


    }
    return 0;
}