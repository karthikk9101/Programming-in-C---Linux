#ifndef EUCLID_H
#define EUCLID_H

int gcd(int a, int b);

void ext_euclid(int a, int b, int *gcd, int *x, int *y);

extern int gcd_result;
extern int x_result;
extern int y_result;

#endif