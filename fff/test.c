#include <assert.h>

#include "lib.h"
#include "otherlib.h"

#include "fff.h"

DEFINE_FFF_GLOBALS;

FAKE_VOID_FUNC(print_line, char *);
FAKE_VOID_FUNC_VARARG(buff_write_lines, char *, char *, ...);

void custom_buff_write_lines(char *buff, char *fmt, va_list argp)
{
    char *foo = va_arg(argp, char *);
    char *bar = va_arg(argp, char *);
    printf("%s %s", foo, bar);
}

int main(void)
{
    char *msg = "Hello, World!";
    print_title(msg);
    print_title(msg);
    print_title(msg);

    assert(print_line_fake.call_count ==  9);

    buff_write_lines_fake.custom_fake = custom_buff_write_lines;
    buff_write();

    printf("Success\n");
}
