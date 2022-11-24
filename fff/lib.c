#include "lib.h"
#include "otherlib.h"

void print_title(char *s)
{
    print_line("----------");
    print_line(s);
    print_line("----------");
}

void buff_write(void)
{
    char buff[256];
    buff_write_lines(buff, "%s %s", "foo", "bar");
    printf("%s\n", buff);
}
