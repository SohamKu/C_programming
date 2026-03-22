#include<stdio.h>

int Addition(int ino1,int ino2)
{
    int iSum = 0;

    iSum = ino1 + ino2;

    return iSum;

}
int Subtraction(int ino1,int ino2)
{
    int iSum = 0;

    iSum = ino1 - ino2;

    return iSum;

}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iAns = 0;
  
  printf("Enter First No:\n");
  scanf("%d",&iValue1);

  printf("Enter Second No:\n");
  scanf("%d",&iValue2);
  
  iAns = Addition(iValue1 , iValue2);
  printf("Addition is :%d\n",iAns);

  iAns = Subtraction(iValue1 , iValue2);
  printf("Addition is :%d\n",iAns);


    return 0;
}