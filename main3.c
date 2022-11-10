///////////////////////////////////////////////////////////////////////////////////////
//
//   Accept Integer and Postion and turn 'ON' the position bit  .
//
///////////////////////////////////////////////////////////////////////////////////////
#include "header.h"

//Entery point Function.
int main()
{
 
  UINT iValue1 = 0; 
  int  iValue2 = 0;
  UINT iRet = false;
  printf("Enter Number:");
  scanf("%d",&iValue1);
  
  printf("Enter the position:");
  scanf("%d",&iValue2);
  
  iRet= OnBit(iValue1,iValue2);
  printf("%d\n",iRet);
  
  
 return 0;

}
