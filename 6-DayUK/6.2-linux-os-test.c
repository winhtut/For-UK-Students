#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>

int main() {
    int serial_port;
    char *portname = "/dev/ttyUSB0"; // Change this to your serial port

    serial_port = open(portname, O_RDWR);
    if (serial_port < 0) {
        perror("Error opening serial port");
        return 1;
    }

    struct termios tty;
    if(tcgetattr(serial_port, &tty) != 0) {
        perror("Error from tcgetattr");
        return 1;
    }

    // Set Baud Rate
    cfsetospeed(&tty, B9600);
    cfsetispeed(&tty, B9600);

    // Setting other Port Stuff
    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;
    tty.c_cflag &= ~CRTSCTS;
    tty.c_cflag |= CREAD | CLOCAL;
    tty.c_lflag &= ~ICANON;
    tty.c_lflag &= ~ECHO;
    tty.c_lflag &= ~ECHOE;
    tty.c_lflag &= ~ECHONL;
    tty.c_lflag &= ~ISIG;
    tty.c_iflag &= ~(IXON | IXOFF | IXANY);
    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL);
    tty.c_oflag &= ~OPOST;
    tty.c_oflag &= ~ONLCR;
    tty.c_cc[VTIME] = 10;
    tty.c_cc[VMIN] = 0;

    tcsetattr(serial_port, TCSANOW, &tty);

    // Read data from serial port
    char read_buf[256];
    int num_bytes;

    while(1) {
        num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
        if (num_bytes > 0) {
            printf("Received data: %s\n", read_buf);
        }
    }

    close(serial_port);
    return 0;
}
