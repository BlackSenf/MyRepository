/*-----------------------------------------
Project: 033_IOW_Blink_function.h
Klasse: 3CHELI
Datum: 19.03.2012
Autor: Lukas �hlinger
Copyright by Lukas �hlinger
-------------------------------------------*/
#ifndef _IO_FUNCS_
#define _IO_FUNCS_

IOWKIT_HANDLE iow;

int init();
void write (WORD value);
void write2 (WORD , WORD );

#endif // _IO_FUNCS_
