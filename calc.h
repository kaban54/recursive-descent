#ifndef _CALC_H_
#define _CALC_H_

#include <stdio.h>
#include <stdlib.h>

extern const char *s;

const size_t BUFSIZE = 512;

int Calculate ();

int GetNum ();

int GetExp ();

int GetProd ();

int GetBrackets ();

#endif