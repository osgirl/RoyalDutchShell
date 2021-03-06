/* stuff.c - Very Simple RPC Server, vr. 01

   Copyright 2014  Monaco F. J.   <monaco@icmc.usp.br>

   This file is part of POSIXeg. 

    POSIXeg is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    POSIXeg is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with .  If not, see <http://www.gnu.org/licenses/>. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <stuff.h>

/* Return the value of PI. */

float pi(void)
{
  return 3.14;
}

/* Return the value of Phi. */

float phi (void)
{
  return 1.618;
}

/* Return n+1. */

int plusone (int n)
{
  return n+1;
}

/* Increment n. */

void increment (int *n)
{
  *n = *n+1;
}

