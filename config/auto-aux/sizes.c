/***********************************************************************/
/*                                                                     */
/*                                OCaml                                */
/*                                                                     */
/*            Xavier Leroy, projet Cristal, INRIA Rocquencourt         */
/*                                                                     */
/*  Copyright 1996 Institut National de Recherche en Informatique et   */
/*  en Automatique.  All rights reserved.  This file is distributed    */
/*  under the terms of the GNU Library General Public License, with    */
/*  the special exception on linking described in file ../../LICENSE.  */
/*                                                                     */
/***********************************************************************/

#include <stdio.h>

int main(int argc, char **argv)
{
  printf("%d %d %d %d %d\n",
         (int) sizeof(int),
         (int) sizeof(long),
         (int) sizeof(long *),
         (int) sizeof(short),
         (int) sizeof(long long));
  return 0;
}
