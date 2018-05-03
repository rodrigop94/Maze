/*
 *  This is the function that elaborates the header of a response, it takes two
 *  arguments: the client's connection and the file requested in the HEAD messa-
 *  ge.
 */

#ifndef HEADFN_H_INCLUDED
#define HEADFN_H_INCLUDED

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <web.h>
#include "auxfns.h"

/* Receives connection's parameters and server a header */
int serve_head(unsigned int conn, struct response res);

#endif

