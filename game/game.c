#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int snakeWaterGun(char you,char comp)
{
    // returns 1 if you win ,-1 if you lose and 0 if draw
    // draw conditions
    // ss,ww,gg 
    if (you == comp)
    {
        return 0;
    }
        /* not draw condition
        all cases : sg,sw,ws,wg,gs,gw,,,,, only 3 cases are there 
        sg,ws,gw */  





    // 1case
    if (you== 's' && comp == 'w')
    {
        return 1;
    }
    else if (you=='w' && comp =='s')
    {
        return -1;
    }
    // 2case

    if (you== 's' && comp == 'g')
    {
        return -1;
    }
    else if (you=='g' && comp =='s'){
        return 1;
    }
    // 3 cases

    if (you== 'g' && comp == 'w')
    {
        return 1;
    }
    else if (you=='w' && comp =='g'){
        return -1;
    }

}

int main()
{
    char you,comp;
    srand(time(0));
    int number = (rand()%100 + 1);
    if (number <33)
    {
        comp ='s';
    }
    else if (number > 33 && number < 66){
        comp = 'w';
    }
    else {
        comp = 'g';
    }
    // comp = 's';
    printf("enter 's' for snake,'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("you choose %c and computer choose %c. " , you,comp);

    if(result==0){
        printf("game draw\n");
    }
    else if(result == 1)
    {
        printf("yup!! you won boi...\n");
    }   
    else{
        printf("you lose \n");
    }
     return 0;
}




    // if (you== 'w' && comp == 's')
    // {
    //     return -1;
    // }
    // else if (you=='s' && comp =='w'){
    //     return 1;
    // }

    // if (you== 'w' && comp == 'g')
    // {
    //     return -1;
    // }
    // else if (you=='g' && comp =='w'){
    //     return 1;
    // }


    // if (you== 'g' && comp == 's')
    // {
    //     return 1;
    // }
    // else if (you=='s' && comp =='g'){
    //     return -1;
    // }

    
    


