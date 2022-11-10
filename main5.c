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
  UINT iRet = 0;
  printf("Enter Number:");
  scanf("%d",&iValue1);
  
  
  
  iRet= ToggleBit(iValue1);
  printf("%d\n",iRet);
  
  
 return 0;

}
