#include <stdlib.h>
#include <stdio.h>


void convert(char arr [3][3]);
void mat_check (int arr [3][3]);
int power(int base , int expo);

int *converted_arr [3][3];


int main ()
{
    char arr [3][3];

printf("Enter the elements of the matrix colums : \n");

for(int i = 0; i < 3; i++)
	{
        for(int j = 0; j < 3; j++)
		{
            scanf(" %s", &arr[i][j]);
        }
    }

     convert(arr);

    printf("The converted arr \n");

    for(int i = 0; i < 3; i++)
	{
        for(int j = 0; j < 3; j++)
		{
            printf(" %d",converted_arr[i][j]);
        }
         printf("\n");
    }

power(0,0);
printf("power = %d\n",power(3,3));
printf("power = %d\n",power(2,0));


mat_check(converted_arr);

return 0 ;
}


int power(int base , int expo)
{
int power =1 ;
if (expo ==0 && base!=0)
{
   return 1;
}

else if (expo==0 && base==0)
{ printf("Error\n");
return 0 ;
}
else
{
    for(int i=0;i<expo;i++)
    {
        power=base*power;
    }
    return power ;
}

{

}
}


 void convert(char arr [3][3])
 {


 for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            converted_arr [i][j]=(arr [i][j] - '0');

        }
    }


 }


void mat_check (int arr [3][3])
{
if(arr[1][0]==power(arr[2][0],arr[0][0]) && arr[1][1]==power(arr[2][1],arr[0][1])&&arr[1][2]==power(arr[2][2],arr[0][2]))
{
    printf("Embedia matrix\n");
}
else
    {printf("Not Embedia matrix\n");}
}
