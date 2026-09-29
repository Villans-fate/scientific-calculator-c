#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void add(float n1,float n2);
void subtract(float n1,float n2);
void multiply(float n1,float n2);
void divide(float n1,float n2);
void rem(int n1,int n2);
void power(float n1,float n2);
void squareroot(float n1);
void percentage(float n1,float n2);
void tofindsin(float n1);
void tofindcos(float n1);
void tofindtan(float n1);
void conversion(float n1);
void tofindlog(float n1);


int main()
{
    float n1,n2;
    int ch;
    
    do{
        
        printf("\n");
        printf("  +--------------------------------------------------------+\n");
        printf("  |                 SCIENTIFIC CALCULATOR                  |\n");
        printf("  +--------------------------------------------------------+\n");
        printf("  |                                                        |\n");
        printf("  |   [1]  ADDITION           [8]  SQUARE ROOT             |\n");
        printf("  |   [2]  SUBTRACTION        [9]  SIN                     |\n");
        printf("  |   [3]  MULTIPLICATION     [10] COS                     |\n");
        printf("  |   [4]  DIVISION           [11] TAN                     |\n");
        printf("  |   [5]  REMAINDER          [12] RADIAN TO DEGREE        |\n");
        printf("  |   [6]  POWER (x^y)        [13] LOGARITHM               |\n");
        printf("  |   [7]  PERCENTAGE         [14] EXIT                    |\n");
        printf("  |                                                        |\n");
        printf("  +--------------------------------------------------------+\n");
        printf("\n  >> Enter your choice: ");
        scanf("%d",&ch);
        
        printf("\n");
        
        if(ch>=1 && ch<=7)
        {
            printf("  +--------------------------------------------------------+\n");
            printf("  |  Enter two numbers                                     |\n");
            printf("  +--------------------------------------------------------+\n");
            printf("  >> First number: ");
            scanf("%f",&n1);
            printf("  >> Second number: ");
            scanf("%f",&n2);
            printf("\n");
        }

        switch(ch)
        {
            case 1:
                printf("  [CALCULATING ADDITION...]\n");
                printf("  --------------------------------------------------------\n");
                add(n1,n2);
                break;

            case 2:
                printf("  [CALCULATING SUBTRACTION...]\n");
                printf("  --------------------------------------------------------\n");
                subtract(n1,n2);
                break;

            case 3:
                printf("  [CALCULATING MULTIPLICATION...]\n");
                printf("  --------------------------------------------------------\n");
                multiply(n1,n2);
                break;

            case 4:
                printf("  [CALCULATING DIVISION...]\n");
                printf("  --------------------------------------------------------\n");
                divide(n1,n2);
                break;

            case 5:
                printf("  [CALCULATING REMAINDER...]\n");
                printf("  --------------------------------------------------------\n");
                rem((int)n1,(int)n2);
                break;

            case 6:
                printf("  [CALCULATING POWER...]\n");
                printf("  --------------------------------------------------------\n");
                power(n1,n2);
                break;

            case 7:
                printf("  [CALCULATING PERCENTAGE...]\n");
                printf("  --------------------------------------------------------\n");
                percentage(n1,n2);
                break;
            
            case 8:
                printf("  [CALCULATING SQUARE ROOT...]\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter a number                                        |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Number: ");
                scanf("%f",&n1);
                printf("\n  --------------------------------------------------------\n");
                squareroot(n1);
                break;
                
            case 9:
                printf("  [CALCULATING SINE...]\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter angle in degrees                                |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Angle: ");
                scanf("%f",&n1);
                printf("\n  --------------------------------------------------------\n");
                tofindsin(n1);
                break;
                
            case 10:
                printf("  [CALCULATING COSINE...]\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter angle in degrees                                |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Angle: ");
                scanf("%f",&n1);
                printf("\n  --------------------------------------------------------\n");
                tofindcos(n1);
                break;
                
            case 11:
                printf("  [CALCULATING TANGENT...]\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter angle in degrees                                |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Angle: ");
                scanf("%f",&n1);
                printf("\n  --------------------------------------------------------\n");
                tofindtan(n1);
                break;
                
            case 12:
                printf("  [CONVERTING RADIAN TO DEGREE...]\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter value in radians                                |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Radian: ");
                scanf("%f",&n1);
                printf("\n  --------------------------------------------------------\n");
                conversion(n1);
                break;
            
            case 13:
                printf("  +--------------------------------------------------------+\n");
                printf("  |  Enter a positive number                               |\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  >> Number: ");
                scanf("%f",&n1);
                printf(" \n[CALCULATING LOGARITHM......]\n");
                if(n1<=0)
                {
                    printf("  [ERROR] Logarithm undefined for %.2f (must be positive)\n", n1);
                }
                else {
                    tofindlog(n1);
                }
                break;
                 
            case 14:
                printf("\n");
                printf("  +--------------------------------------------------------+\n");
                printf("  |                                                        |\n");
                printf("  |         THANK YOU FOR USING THE CALCULATOR             |\n");
                printf("  |                                                        |\n");
                printf("  +--------------------------------------------------------+\n\n");
                exit(0);

            default:
                printf("  [ERROR] Invalid Choice!\n");
                printf("  Please enter a number between 1 and 14.\n");
        }
        
        printf("\n");
        printf("  --------------------------------------------------------\n");
        printf("  Press Enter to continue...");
        getchar();
        getchar();
        
    } while(ch!=14); 
    
    return 0;
}

void add(float n1,float n2)
{
    float result=n1+n2;
    printf("  RESULT: %.2f + %.2f = %.2f\n",n1,n2,result);
}

void subtract(float n1,float n2)
{
    float result=n1-n2;
    printf("  RESULT: %.2f - %.2f = %.2f\n",n1,n2,result);
}

void multiply(float n1,float n2)
{
    float result=n1*n2;
    printf("  RESULT: %.2f x %.2f = %.2f\n",n1,n2,result);
}

void divide(float n1,float n2)
{
    if(n2==0)
    {
        printf("  ERROR: Division by zero is undefined!\n");
        return;
    }

    float result=n1/n2;
    printf("  RESULT: %.2f / %.2f = %.2f\n",n1,n2,result);
}

void rem(int n1,int n2)
{
    if(n2==0)
    {
        printf("  ERROR: Remainder by zero is undefined!\n");
        return;
    }

    int result=n1%n2;
    printf("  RESULT: %d %% %d = %d\n",n1,n2,result);
}

void power(float n1,float n2)
{
    float result=pow(n1,n2);
    printf("  RESULT: %.2f ^ %.2f = %.2f\n",n1,n2,result);
}

void squareroot(float n1)
{
    if(n1<0)
        printf("  RESULT: sqrt(%.2f) = %.2fi\n",n1,sqrt(-n1));
    else
        printf("  RESULT: sqrt(%.2f) = %.2f\n",n1,sqrt(n1));
}

void percentage(float n1,float n2)
{
    float result=(n1/100)*n2;
    printf("  RESULT: %.2f%% of %.2f = %.2f\n",n1,n2,result);
}

void tofindsin(float n1)
{
    float result=sin(n1*3.14159265/180);
    printf("  RESULT: sin(%.2f°) = %.4f\n",n1,result);
}

void tofindcos(float n1)
{
    float result=cos(n1*3.14159265/180);
    printf("  RESULT: cos(%.2f°) = %.4f\n",n1,result);
}

void tofindtan(float n1)
{
    float result=tan(n1*3.14159265/180);
    if(fabs(result) > 1000000) {
        printf("  RESULT: tan(%.2f°) = Undefined\n",n1);
    } else {
        printf("  RESULT: tan(%.2f°) = %.4f\n",n1,result);
    }
}

void conversion(float n1)
{
    float result=(n1 * 180 / 3.14159265);
    printf("  RESULT: %.2f radians = %.2f degrees\n",n1,result);
}

void tofindlog(float n1)
{
    float result = log(n1);
    printf("  RESULT: ln(%.2f) = %.4f\n",n1,result);
}