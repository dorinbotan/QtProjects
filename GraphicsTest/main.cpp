#include "tgaimage.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);

void line(int x1, int y1, int x2, int y2, TGAImage &image, TGAColor color)
{
//    for (float t = 0.; t < 1; t += .01)
//    {
//        int x = x1 * (1. - t) + x2 * t;
//        int y = y1 * (1. - t) + y2 * t;
//        image.set(x, y, color);
//    }

    for (int x = x1; x <= x2; x++)
    {
        float t = (x - x2) / (float)(x2 - x1);
        int y = y1 * (1. - t) + y2 * t;
        image.set(x, y, color);
    }
}

int main()
{
    TGAImage image(100, 100, TGAImage::RGB);

    line(13, 20, 80, 40, image, white);
    line(20, 13, 40, 80, image, red);
    line(80, 40, 13, 20, image, red);

    image.set(52, 41, red);
//    image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
    image.write_tga_file("output.tga");
    return 0;
}
