#include <unistd.h>

int main(void) {
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1;
    ssize_t ret = write(STDERR_FILENO, msg, len);
    if (ret != len) {
        return (1);
    }
    return (1);
}
