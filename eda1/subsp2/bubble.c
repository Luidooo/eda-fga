#include <stdio.h>
#include <stdlin.h>
#include <string.h>
#include <math.h>

typedef int Item;

#define key(A) (A)
#define less(A, B)  (Key(A) < Key(B))
#define exch(A, B)  { Item t=A; A=B; B=t; }
#define compexh(A,B)  if(less(B, A))  exch (A, B)

#define bitsvyte 8
#define bytesword 4




