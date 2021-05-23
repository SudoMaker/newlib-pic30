#include <sys/stat.h>
#include "../syscall.h"

int
_read (file, ptr, len)
     int    file;
     char * ptr;
     int    len;
{
  
  
  return;
}

int
_lseek (file, ptr, dir)
     int file;
     int ptr;
     int dir;
{

  
  return;
}

int
_write (file, ptr, len)
     int    file;
     char * ptr;
     int    len;
{

  return;
}

int
_open (path, flags)
     const char * path;
     int flags;
{

  
  return;
}

int
_close (file)
     int file;
{

  return 0;
}

void
_exit (n)
     int n;
{

}

extern void _heap, _eheap;
void *__curbrk;

int
_brk(void *endds)
{
	int rc = 0;

	if (endds == ((void *)0))
	{
		__curbrk = &_heap;
	}
	else if (endds <= &_eheap)
	{
		__curbrk = endds;
	}
	else
	{
		rc = -1;
	}
	return(rc);
}

void * 
_sbrk(int incr)
{
	void *oldbrk;

	if (__curbrk == ((void *)0))
	{
		if (brk(0) < 0)		/* Initialize the break.  */
		{
			return((void *) -1);
		}
	}
	if (incr == 0)
	{
		return(__curbrk);
	}
	oldbrk = __curbrk;
	if (brk(oldbrk + incr) < 0)
	{
		return((void *) -1);
	}
	return(oldbrk);
}

int
_fstat (file, st)
     int file;
     struct stat * st;
{
  st->st_mode = S_IFCHR;
  return 0;
}

int
_unlink ()
{
  return -1;
}

int
_isatty (fd)
     int fd;
{
  return 0;
}

int
_raise ()
{
  return 0;
}

int
_times ()
{
  return 0;
}

int
_kill (pid, sig)
     int pid;
     int sig;
{
  return 0;
}

int
_getpid (void)
{
  return 0;
}
