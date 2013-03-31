/*******************************************************************************
 * Copyright (c) 2013, Esoteric Software
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ******************************************************************************/

#ifndef SPINE_UTIL_H_
#define SPINE_UTIL_H_

#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
namespace spine {
extern "C" {
#endif

/* Used to cast away const on an lvalue. */
#define CAST(TYPE,VALUE) *(TYPE*)&VALUE

#define CALLOC(TYPE,COUNT) (TYPE*)calloc(1, sizeof(TYPE) * COUNT);
#define MALLOC(TYPE,COUNT) (TYPE*)malloc(sizeof(TYPE) * COUNT);

#define MALLOC_STR(TO,FROM) strcpy(CAST(char*, TO) = (char*)malloc(strlen(FROM)), FROM);

#define FREE(E) free((void*)E);

const char* readFile (const char* path);

#ifdef __cplusplus
}
}
#endif

#endif /* SPINE_UTIL_H_ */