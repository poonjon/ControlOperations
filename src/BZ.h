#ifndef BZ_H
#define BZ_H

#define WREG  0xfe8
#define BSR   0xfe0
#define STKPTR 0xffc
#define TOSU 0xfff
#define TOSH 0xffe
#define TOSL 0xffd

unsigned extern char FSR[];
unsigned extern int PIC18Stack[];

int bz(Bytecode *code);

#endif // BZ_H
