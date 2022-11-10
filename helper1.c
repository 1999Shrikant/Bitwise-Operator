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
bool ChkBit(UINT iNo, UINT iPos)
{

 UINT iResult=0;
 iResult = iNo & iPos;
 if (iResult==iPos)
 {
   return true;
 }
 else
 {
   return false;
 }
 
}
