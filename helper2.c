////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Off Bit.
// Input:         Integer.
// Output:        Integer.
// Description:   Accept Integer and Postion Check if bit is "ON" or "OFF" at that position  .
// Author:        Shrikant Purushottam Chobi.
// Date:          21-10-2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

//Function prototype.
UINT OffBit(UINT iNo, UINT iPos)
{

 UINT iResult=0;
 iResult = iNo & iPos;
 if (iResult==iPos)
 {
   iResult = iNo ^ iPos;
 }
 else
 {
   printf("%d bit is off returning unprocessed data",iPos);
   iResult =iNo;
 }
 return iResult;
}
