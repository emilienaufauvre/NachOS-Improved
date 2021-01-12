#ifndef USERTHREAD_H
#define USERTHREAD_H

int do_UserThreadCreate(int f, int arg) ;

void do_UserThreadExit() ;

int do_UserThreadJoin(int t) ;

// Class to pass the arguments to the "Fork" function.
class ThreadParams
{
	private :

		int fun ;
		int arg ;

	public :
		
		ThreadParams(int fun, int arg) ;
		void SetFun(int fun) ;
		void SetArg(int arg) ;
		int GetFun() ;
		int GetArg() ;
} ;

#endif
