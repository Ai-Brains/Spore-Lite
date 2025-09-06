// Decompiled pseudocode converted from IDA/Hex-Rays
// Function: sub_402530
// Signature: signed __int32 __usercall sub_402530@<eax>(volatile signed __int32 *a1@<eax>, signed __int32 a2@<edx>)

#include <windows.h> // For _InterlockedCompareExchange

signed __int32 __usercall sub_402530(volatile signed __int32 *a1, signed __int32 a2)
{
    signed __int32 result; // eax
    signed __int32 v4;     // temp variable

    result = *a1;
    do
    {
        v4 = result;
        result = _InterlockedCompareExchange(const_cast<volatile long *>(a1), a2, result);
    }
    while (v4 != result);
    return result;
}