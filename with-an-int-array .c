#include <stdlib.h>
#include <stdio.h>



void mat_check (int arr [3][3]);
int power(int base , int expo);




int main ()
{
    int arr [3][3];

printf("Enter the elements of the matrix colums : \n");

for(int i = 0; i < 3; i++)
	{
        for(int j = 0; j < 3; j++)
		{
            scanf(" %d", &arr[i][j]);
        }
    }



   

power(0,0);
printf("power = %d\n",power(3,3));
printf("power = %d\n",power(2,0));


mat_check(arr);

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







void mat_check (int arr [3][3])
{
if(arr[1][0]==power(arr[2][0],arr[0][0]) && arr[1][1]==power(arr[2][1],arr[0][1])&&arr[1][2]==power(arr[2][2],arr[0][2]))
{
    printf("Embedia matrix\n");
}
else
    {printf("Not Embedia matrix\n");}
}
