#ifndef USERPROCESS_H
#define USERPROCESS_H


int do_UserProcessCreate(char *exec) ;

void do_UserProcessHalt() ;

void do_UserProcessExit() ;

void do_WaitPid(int pid);

#endif
