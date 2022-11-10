////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: On Bit.
// Input:         Integer.
// Output:        Integer.
// Description:   Accept Integer and Postion and turn 'ON' the position bit  .
// Author:        Shrikant Purushottam Chobi.
// Date:          21-10-2021.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

//Function prototype.
UINT OnBit(UINT iNo, int iPos)
{

 UINT iResult=0;
 UINT iMask =1;
 iMask=iMask<<iPos-1;
 iResult = iNo & iMask;
 
 if (iResult==iMask)
 {
   printf("%d bit is on returning unprocessed data",iPos);
   iResult = iNo;
 }
 else
 {
   iResult = iNo | iMask;
 }
 return iResult;
}
