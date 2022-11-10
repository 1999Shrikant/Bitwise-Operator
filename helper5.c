////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Toggle Bit.
// Input:         Integer.
// Output:        Integer.
// Description:   Accept Integer and  Toggle first and last nible   .
// Author:        Shrikant Purushottam Chobi.
// Date:          21-10-2021.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

//Function prototype.
UINT ToggleBit(UINT iNo)
{

 UINT iMask=0X0000000F;
 UINT iMask2=0XF0000000;
 UINT iResult=0;
 UINT iResult2=0;
/* iResult = iNo & iMask;
 if (iResult==iMask)
 {
   printf("First 4th bit is on in Input returning orignal value\n");
   iResult = iNo;
 }
 else
 {
   iResult = iNo | iMask;
 }
 iResult2 = iResult;*/ 
 iResult = iNo & iMask2;
 if (iResult==iMask2)
 {
   printf("Last 4th bit is on in Input returning orignal value\n");
   iResult = iNo;
 }
 else
 {
   iResult = iNo | iMask2;
 }
 iResult = iResult | iResult2;
 return iResult;
}
