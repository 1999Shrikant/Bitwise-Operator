///////////////////////////////////////////////////////////////////////////////////////
//
//   Accept Integer and Postion and Toggle the position bit  .
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
  
  iRet= ToggleBit(iValue1,iValue2);
  printf("%d\n",iRet);
  
  
 return 0;

}
