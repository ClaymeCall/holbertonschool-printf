## NAME :
_printf

## LIBRARY :
Standard C library (libc, -lc)

## SYNOPSIS :
#include <stdio.h>  

	int _printf(const char *restrict format, ...);

## DESCRIPTION
	The function _printf() write output to stdout, the standard output stream.  
	It write the output under the control of a format string that specifies how subsequent arguments  
	(or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

### Format of the format string
	The format string is a character string, beginning and ending in  
	its initial shift state, if any.  The format string is composed  
	of zero or more directives: ordinary characters (not %), which  
	are copied unchanged to the output stream; and conversion  
	specifications, each of which results in fetching zero or more  
	subsequent arguments.  Each conversion specification is  
	introduced by the character %, and ends with a conversion  
	specifier.  In between there may be (in this order) zero or more  
	flags, an optional minimum field width, an optional precision and  
	an optional length modifier.

	The overall syntax of a conversion specification is:

	%[$][flags][width][.precision][length modifier]conversion

The arguments must correspond properly (after type promotion)  
	with the conversion specifier.  By default, the arguments are  
	used in the order given, where each '*' (see Field width and  
			Precision below) and each conversion specifier asks for the next  
	argument (and it is an error if insufficiently many arguments are  
			given).  One can also specify explicitly which argument is taken,  
	at each place where an argument is required, by writing "%m$"  
	instead of '%' and "*m$" instead of '*', where the decimal  
	integer m denotes the position in the argument list of the  
	desired argument, indexed starting from 1.  Thus,

	_printf("%*d", width, num);

	and

	_printf("%2$*1$d", width, num);

	are equivalent.  The second style allows repeated references to  
	the same argument.  The C99 standard does not include the style  
	using '$', which comes from the Single UNIX Specification.  If  
	the style using '$' is used, it must be used throughout for all  
	conversions taking an argument and all width and precision  
	arguments, but it may be mixed with "%%" formats, which do not  
	consume an argument.  There may be no gaps in the numbers of  
	arguments specified using '$'; for example, if arguments 1 and 3  
	are specified, argument 2 must also be specified somewhere in the  
	format string.

	For some numeric conversions a radix character ("decimal point")  
	or thousands' grouping character is used.  The actual character  
	used depends on the LC_NUMERIC part of the locale.  (See  
			setlocale(3).)  The POSIX locale uses '.' as radix character, and
	does not have a grouping character.  Thus,  

	_printf("%'.2f", 1234567.89);

	results in "1234567.89" in the POSIX locale, in "1234567,89" in  
	the nl_NL locale, and in "1.234.567,89" in the da_DK locale.
