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
  bool bRet = false;
  printf("Enter Number:");
  scanf("%d",&iValue1);
  
  printf("Enter the position:");
  scanf("%d",&iValue2);
  
  bRet= ChkBit(iValue1,iValue2);
  
  if (bRet==1)
  {
    printf("TRUE :%dth Bit is on\n",iValue2);
  }
  else
  {
    printf("False :%dth Bit is off\n",iValue2);
  }
  
 return 0;

}
