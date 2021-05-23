#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H

#include <machine/_default_types.h>

#define __INTPTR_TYPE__ 2

#define wint_t int
typedef va_list __gnuc_va_list;

#define __machine_ssize_t_defined
typedef long signed int _ssize_t;

#endif /* _MACHINE__TYPES_H */
