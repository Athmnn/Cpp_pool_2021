/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-auguste.thomann
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bitmap.h"

// not checking your return values is naugthy naughty naughty
void write_bmp_header(int fd)
{
    bmp_header_t header;
    make_bmp_header(&header, 32);
    write(fd, &header, sizeof(header));
}
void write_bmp_info_header(int fd)
{
    bmp_info_header_t info;
    make_bmp_info_header(&info, 32);
    write(fd, &info, sizeof(info));
}
void write_32bits(int fd, uint32_t pixel)
{
    for (size_t i = 0; i < 32 * 32; ++i)
        write(fd, &pixel, sizeof(pixel));
}
int main(void)
{
    int fd = open("32px.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
    write_bmp_header(fd);
    write_bmp_info_header(fd);
    write_32bits(fd, 0x00FFFFFF);
    close(fd);
    return EXIT_SUCCESS;
}