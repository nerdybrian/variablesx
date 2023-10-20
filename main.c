#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myage = 19;
    char mybloodgroup = 'o';
    float myheight = 5.5;
    const mygender = 'M';

    printf("my name is Brian and the following are my details:\n");
    printf("my height in inches; :%f\n" , myheight);
    printf("my age in years; :%d\n", myage);
    printf("my blood type; : %C\n" , mybloodgroup);
    printf("i am a : ; %c \n" , mygender);

    float myheight1 = myheight;
    myheight1 = 6.0;

    printf("sorry my height is; :%f", myheight1 );
    return 0 ;
}
