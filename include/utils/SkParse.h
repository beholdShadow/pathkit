
/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */


#ifndef SkParse_DEFINED
#define SkParse_DEFINED

#include "include/core/SkScalar.h"
#include "include/core/SkTypes.h"

#include <cstddef>
#include <cstdint>
namespace pk {
class PK_API SkParse {
public:
    static int Count(const char str[]); // number of scalars or int values
    static int Count(const char str[], char separator);
    static const char* FindHex(const char str[], uint32_t* value);
    static const char* FindS32(const char str[], int32_t* value);
    static const char* FindScalar(const char str[], SkScalar* value);
    static const char* FindScalars(const char str[], SkScalar value[], int count);

    static bool FindBool(const char str[], bool* value);
    // return the index of str in list[], or -1 if not found
    static int  FindList(const char str[], const char list[]);
};
}
#endif
