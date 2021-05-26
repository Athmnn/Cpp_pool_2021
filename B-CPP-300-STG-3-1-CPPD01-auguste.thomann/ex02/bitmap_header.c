/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-auguste.thomann
** File description:
** bitmap_header
*/

#include <sys/types.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    header->size = (size * size * 4) + sizeof(bmp_header_t) +
                sizeof(bmp_info_header_t);
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
    header->magic = 0x4D42;
    header->_app1 = 0;
    header->_app2 = 0;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = sizeof(bmp_info_header_t);
    header->raw_data_size = size * size * 4;
    header->important_colors = 0;
    header->v_resolution = 0;
    header->h_resolution = 0;
    header->palette_size = 0;
    header->compression = 0;
    header->height = size;
    header->width = size;
    header->planes = 1;
    header->bpp = 32;
}