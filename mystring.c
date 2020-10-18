#include <stdio.h>

int mystrlen(char *s) {
  int sum = 0;
  while (*s) {
    sum++;
    s++;
  }
  return sum;
}

char *mystrncpy(char *dest, char *source, int size) {
  int i;
  for (i=0; *(source+i) && i<size; i++) {
    *(dest+i) = *(source+i);
  }
  return dest;
}

char *mystrcat(char *dest, char *source) {
  int n = 0;
  while (*dest) {
    dest++;
    n++;
  }
  while (*source) {
    *dest=*source;
    dest++;
    source++;
    n++;
  }
  return dest-n;
}

char *mystrchr(char *s, char c) {
  while(*s!=0) {
    if(*s==c) return s;
    s++;
  }
  return s;
}

int mystrcmp(char *s1, char *s2) {
  while(*s1!=0 && *s2!=0) {
    if (*s1 > *s2) return 1;
    if (*s1 < *s2) return -1;
    s1++;
    s2++;
  }
  if (*s1!=0) return 1;
  if (*s2!=0) return -1;
  return 0;
}
