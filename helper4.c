////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Toggle Bit.
// Input:         Integer.
// Output:        Integer.
// Description:   Accept Integer and Postion and Toggle the position bit  .
// Author:        Shrikant Purushottam Chobi.
// Date:          21-10-2021.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

//Function prototype.
UINT ToggleBit(UINT iNo, int iPos)
{

 UINT iResult=0;
 UINT iMask =1;
 iMask=iMask<<iPos-1;
 iResult = iNo & iMask;
 
 if (iResult==iMask)
 {
   iResult = iNo ^ iMask;
 }
 else
 {
   iResult = iNo | iMask;
 }
 return iResult;
}
