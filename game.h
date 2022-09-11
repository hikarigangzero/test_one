#pragma once

#define q 9
#define w 9

#define e q+2
#define r w+2

//初始化
void g(char f[e][r], int qw, int er, char ty);

//打印布局
void h(char f[e][r], int ui, int op);

//设置
void k(char c[e][r], int as, int df);

//猹
void n(char c[e][r], char d[e][r], int as, int df);