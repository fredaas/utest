#include "otherlib.h"

void print_line(char *s)
{
    printf("%s\n", s);
}

void buff_write_lines(char *buff, char *fmt, ...)
{
    va_list argp;
    va_start(argp, fmt);
    vsprintf(buff, fmt, argp);
    va_end(argp);
}
