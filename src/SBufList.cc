/*
 * Copyright (C) 1996-2014 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#include "squid.h"
#include "SBufAlgos.h"
#include "SBufList.h"

bool
IsMember(const SBufList & sl, const SBuf &S, const SBufCaseSensitive case_sensitive)
{
    return std::find_if(sl.begin(), sl.end(), SBufEqual(S,case_sensitive)) != sl.end();
}

