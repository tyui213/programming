#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int make_rgb(unsigned char red, unsigned char green, unsigned char blue) {
    return (red << 16) | (green << 8) | blue;
}

unsigned char get_red(unsigned int rgb) {
    return (rgb >> 16) & 0xFF;
}
unsigned char get_green(unsigned int rgb) {
    return (rgb >> 8) & 0xFF;
}
unsigned char get_blue(unsigned int rgb) {
    return rgb & 0xFF;
}

void print_rgb_complement() {
    unsigned int rgb;
    printf("RGB »ö»ó? ");
    scanf("%x", &rgb);

    unsigned char r = get_red(rgb);
    unsigned char g = get_green(rgb);
    unsigned char b = get_blue(rgb);

    unsigned char cr = ~r & 0xFF;
    unsigned char cg = ~g & 0xFF;
    unsigned char cb = ~b & 0xFF;

    unsigned int complement = make_rgb(cr, cg, cb);

    printf("RGB %06XÀÇ º¸»ö: %06X\n", rgb, complement);
}

int main() {
    print_rgb_complement();
    return 0;
}