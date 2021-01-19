#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include "shared.h"

#define _CRT_SECURE_NO_WARNINGS
VM_INT T_I;
VM_FLOAT ITERS;
VM_FLOAT XRANGE;
VM_FLOAT YRANGE;
VM_FLOAT COLS;
VM_INT MAXX_I;
VM_INT MAXY_I;
VM_INT Iter_I;
VM_INT Y_I;
VM_INT X_I;
VM_FLOAT CR;
VM_FLOAT CI;
VM_FLOAT ZM;
VM_FLOAT ZR;
VM_FLOAT ZI;
VM_FLOAT ZR2;
VM_FLOAT ZI2;
VM_FLOAT IT;
VM_FLOAT Z1;
VM_FLOAT Z2;
VM_INT c_I;
int main(int argc, char *argv[]) {
graphics_init();

T_I=get_clock();
ITERS=16;
XRANGE=-2.5;
YRANGE=-1.5;
COLS=256;
MAXX_I=640;
MAXY_I=480;
auto __fs0=0;auto __fe0=9;auto __fst0=1;auto __fd0 = 0;if (__fs0 < __fe0) __fd0 = 1; else __fd0 = -1;
for (Iter_I= __fs0;Iter_I!=__fe0+__fd0;Iter_I+=__fst0) {
auto __fs1=0;auto __fe1=MAXY_I;auto __fst1=1;auto __fd1 = 0;if (__fs1 < __fe1) __fd1 = 1; else __fd1 = -1;
for (Y_I= __fs1;Y_I!=__fe1+__fd1;Y_I+=__fst1) {
auto __fs2=0;auto __fe2=MAXX_I;auto __fst2=1;auto __fd2 = 0;if (__fs2 < __fe2) __fd2 = 1; else __fd2 = -1;
for (X_I= __fs2;X_I!=__fe2+__fd2;X_I+=__fst2) {
CR=(XRANGE + ((X_I * 4) / MAXX_I));
CI=(YRANGE + ((Y_I * 3) / MAXY_I));
ZM=0;
ZR=0;
ZI=0;
ZR2=0;
ZI2=0;
IT=0;
do {
Z1=((ZR2 - ZI2) + CR);
Z2=(((2 * ZR) * ZI) + CI);
ZR=Z1;
ZI=Z2;
ZR2=(ZR * ZR);
ZI2=(ZI * ZI);
ZM=(ZR2 + ZI2);
IT=(IT + 1);
} while (!(((IT == ITERS)|(ZM >= 4))));
c_I=((COLS - 1) - static_cast<VM_INT>((IT / ((ITERS / ((COLS - 1)))))));
}
}
}
std::cout <<(get_clock() - T_I)<< std::endl;
std::cout <<VM_STRING("Complete")<< std::endl;
exit(0);
graphics_shutdown();
return 0;
}
