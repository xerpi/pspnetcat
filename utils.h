#ifndef UTILS_H
#define UTILS_H

#include <pspkernel.h>

#define printf pspDebugScreenPrintf

int run;

int select_netconfig();
int connect_ap(int conn_n);

int ExitCallback(int arg1, int arg2, void *common);
int CallbackThread(SceSize args, void *argp);
int SetupExitCallback();

#endif
