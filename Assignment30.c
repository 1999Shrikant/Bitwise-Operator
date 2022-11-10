#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
UINT CountOne(UINT iNo)
{
  UINT iMask=0X00000001;
  int iCnt=0,i=0;
  for(i=1;i<32;i++,iMask=iMask<<1)
  {
     if((iNo&iMask)==iMask)
     {
        iCnt++;
     }
  }
  return iCnt;
}

void CommonBits(UINT iNo1,UINT iNo2)
{
  UINT iMask=0X00000001;
  int i=0;
  for(i=0;i<32;i++,iMask=iMask<<1)
  {
     if(((iNo1&iMask)==iMask)&&((iNo2&iMask)==iMask))
     {
        printf("Common on bit is at following position:%d\n",i+1);
     }
     
  }
}

bool ChkBit(UINT iNo)
{
  UINT iMask=0x00009000;
  
  if(iNo&iMask==iMask)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

bool ChkBits(UINT iNo,int iPos1,int iPos2)
{
  UINT iMask1=0x000000001,iMask2=0X00000001,iResult=0;
  iMask1=iMask1<<(iPos1-1);
  iMask2=iMask2<<(iPos2-1);
  if((iNo&iMask1==iMask1)||(iNo&iMask2==iMask2))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
  return ( iNo ^ ( (0XFFFFFFFF << (iStart-1))  &  (0XFFFFFFFF >> (32-iEnd)) )  );
}

int main()
{
 
  UINT iValue1 = 0, iRet = 0,iValue2=0;
  int iChoice=1,ipos1=0,ipos2=0;
  bool bRet=0;
  while(iChoice!=0)
  {
      printf("\n----------------------------------------------------------------------\n");
      printf("Enter operation to perform                                              \n");
      printf("1:Count number of on bits in input data                                 \n");
      printf("2:Display position of common ON bits from that two numbers              \n");
      printf("3:check whether bit is on or off at '9' and '12' position               \n");
      printf("4:check whether bit is on or off at '2' desired position                \n");
      printf("5:Toggle desired range                                                  \n");
      printf("0:Application Temination                                                \n");
      scanf("%d",&iChoice                                                                );
      printf("\n----------------------------------------------------------------------\n");
      
      switch(iChoice)
      {
          case 1:
                 printf("Enter data\n");
                 scanf("%d",&iValue1);
                 iRet= CountOne(iValue1);
                 printf("Number of One's in input are : %d\n",iRet);
                 break;
          
          case 2:
                 printf("Enter first number:\n");
                 scanf("%d",&iValue1);
                 printf("Enter second number:\n");
                 scanf("%d",&iValue2);
                 CommonBits(iValue1,iValue2);
                 break;
          
          case 3:
                 printf("Enter data:\n");
                 scanf("%d",&iValue1);
                 bRet=ChkBit(iValue1);
                 if(bRet==0)
                 {
                    printf("Bits are OFF at given position\n");
                 }
                 else
                 {
                    printf("Bits are ON at given position\n");
                 }
                 break;
                 
          case 4:
                 printf("Enter data:\n");
                 scanf("%d",&iValue1);
                 
                 printf("Enter first position:\n");
                 scanf("%d",&ipos1);
                 printf("Enter second position:\n");
                 scanf("%d",&ipos2);
                 
                 bRet=ChkBits(iValue1,ipos1,ipos2);
                 if(bRet==0)
                 {
                    printf("Bits are OFF at given position\n");
                 }
                 else
                 {
                    printf("Bits are ON at given position\n");
                 }
                 break;
          
          case 5:
                 printf("Enter data:\n");
                 scanf("%d",&iValue1);
                 
                 printf("Enter start point of range:\n");
                 scanf("%d",&ipos1);
                 printf("Enter end point of range:\n");
                 scanf("%d",&ipos2);
                 
                 iRet=ToggleRange(iValue1,ipos1,ipos2);
                 printf("Data after toogled range is:%d\n",iRet);
                 break;
                 
          case 0:
                 printf("Application Terminated\n");
                 break;
          
         default:
                 printf("Enter Valid Choice\n");
      }
  
  }
 return 0;
}
