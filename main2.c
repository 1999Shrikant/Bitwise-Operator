///////////////////////////////////////////////////////////////////////////////////////
//
//   Accept Integer and Postion Check if bit is "ON" or "OFF" at that position .
//
///////////////////////////////////////////////////////////////////////////////////////
#include "header.h"

//Entery point Function.
int main()
{
 
  UINT iValue1 = 0, iValue2 = 0;
  UINT iRet = false;
  printf("Enter Number:");
  scanf("%d",&iValue1);
  
  printf("Enter the position:");
  scanf("%d",&iValue2);
  
  iRet= OffBit(iValue1,iValue2);
  printf("%d\n",iRet);
  
  
 return 0;

}
