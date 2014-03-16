// g++ -Wall -Wextra -Wpedantic -o sd1{,.cpp} $(pkg-config --cflags --libs libsystemd-journal

#include <systemd/sd-journal.h>

int
main()
{
        sd_journal_print (LOG_NOTICE, "Hello World");
        return 0;
}

