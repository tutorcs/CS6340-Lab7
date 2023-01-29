https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* 
 * Simple path exploration KLEE example
 *
 * From:
 *   https://gitlab.com/Manouchehri/Matryoshka-Stage-2/blob/master/stage2.md
 *   by David Manouchehri
 *
 * Modified by: Michael D. Brown
 * Purpose: This code is a modified version of a KLEE tutorial adapted for academic use.
 */ 

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <klee/klee.h>

int main(int a1, char **a2, char **a3)
{
  int v4; 
  signed int v5; 

  if ( a1 == 2 )
  {
    if ( 42 * (strlen(a2[1]) + 1) != 504 )
      goto LABEL_31;
    v5 = 1;
    if ( *a2[1] != 80 )
      v5 = 0;
    if ( 2 * a2[1][3] != 200 )
      v5 = 0;
    if ( *a2[1] + 16 != a2[1][6] - 16 )
      v5 = 0;
    v4 = a2[1][5];
    if ( v4 != 9 * strlen(a2[1]) - 4 )
      v5 = 0;
    if ( a2[1][1] != a2[1][7] )
      v5 = 0;
    if ( a2[1][1] != a2[1][10] )
      v5 = 0;
    if ( a2[1][1] - 17 != *a2[1] )
      v5 = 0;
    if ( a2[1][3] != a2[1][9] )
      v5 = 0;
    if ( a2[1][4] != 105 )
      v5 = 0;
    if ( a2[1][2] - a2[1][1] != 13 )
      v5 = 0;
    if ( a2[1][8] - a2[1][7] != 13 )
      v5 = 0;
    if ( v5 ) {
      printf("Successful Login!\n");
      klee_assert(0);
    }
    else
LABEL_31:
      printf("Try again...\n");
  }
  else
  {
    printf("Usage: %s <pass>\n", *a2);
  }
}

