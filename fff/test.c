#include <assert.h>

#include "mylib.h"
#include "fff.h"

DEFINE_FFF_GLOBALS;

FAKE_VOID_FUNC(print_line, char *);

int main(void)
{
    RESET_FAKE(print_line)
    char *msg = "Hello, World!";
    print_title(msg);
    print_title(msg);
    print_title(msg);

    assert(print_line_fake.call_count ==  9);

    printf("Success\n");
}
