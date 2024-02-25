#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {

    int scull;
    char buf[128];
	
    scull = open("/dev/scull", O_RDONLY);
    if (scull < 0)
        return 1;

    lseek(scull, 3999, SEEK_SET);
    read(scull, buf, 128);

    close(scull);
    return 0;
}
