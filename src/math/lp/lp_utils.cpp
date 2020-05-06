/*++
Copyright (c) 2017 Microsoft Corporation

Module Name:

    <name>

Abstract:

    <abstract>

Author:

    Lev Nachmanson (levnach)

Revision History:


--*/
#include "math/lp/lp_utils.h"
#ifdef lp_for_z3
namespace lp {
double numeric_traits<double>::g_zero = 0.0;
double numeric_traits<double>::g_one = 1.0;
rational numeric_traits<rational>::g_minus_one = rational(-1);
}
#endif

