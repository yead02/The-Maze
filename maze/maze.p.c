#include<stdio.h>
#include<conio.h>
const int n = 6;

void print(int arr[][n], int m)
{
    system ("cls");
    printf("Enter W to go up\nEnter S to go down\nEnter A to go left\nEnter D to go right\n\n\n");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(arr[i][j]=='X')
            {
                printf("%c\t",arr[i][j]);
            }
            else
            {
                printf("%d\t", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

void fini()
{
    system ("cls");
    printf("\n\n\t\tcongratulations you won the game\n\n");

}

int main()
{
    int arr[5][6];
    int i,j;
    for (i = 0; i < 5; i++)
      for (j = 0; j < 6; j++)
        arr[i][j]=0;

    arr[0][1]=1;
    arr[0][2]=1;
    arr[1][4]=1;
    arr[2][0]=1;
    arr[2][2]=1;
    arr[2][3]=1;
    arr[2][4]=1;
    arr[3][2]=1;
    arr[3][3]=1;
    arr[3][4]=1;
    arr[3][5]=1;
    arr[4][0]=1;
    arr[4][5]=100;
    arr[0][0]='X';

    print(arr, 5);

    int l=0,m=0,z;
    char c;


    while(z!=1)
    {

        scanf("%c",&c);

        if(c=='w'||c=='W')
        {
            if(arr[l-1][m]==0)
            {
                l--;
                arr[l][m]='X';
                arr[l+1][m]=0;
                print(arr, 5);
            }
            else
            {
                print(arr, 5);
                printf("\n\nYou have entered the wrong path\n\n");
            }

        }


        else if(c=='s'||c=='S')
        {
            if(arr[l+1][m]==0)
            {
                l++;
                arr[l][m]='X';
                arr[l-1][m]=0;
                print(arr, 5);
            }
            else
            {
                print(arr, 5);
                printf("\n\nYou have entered the wrong path\n\n");
            }
        }

        else if(c=='a'||c=='A')
        {
            if(arr[l][m-1]==0)
            {
                m--;
                arr[l][m]='X';
                arr[l][m+1]=0;
                print(arr, 5);
            }
            else
            {
                print(arr, 5);
                printf("\n\nYou have entered the wrong path\n\n");
            }
        }


        else if(c=='d'||c=='D')
        {
            if(arr[l][m+1]==100)
            {
                z=1;
            }
            if(arr[l][m+1]==0)
            {
                m++;
                arr[l][m]='X';
                arr[l][m-1]=0;
                print(arr, 5);
            }
            else
            {
                print(arr, 5);
                printf("\n\nYou have entered the wrong path\n\n");
            }
        }
    }

    fini();
}
