#include <QImage>
#include "lcms2.h"

int main()
{
    QImage image(":data/redflower.jpg");
    image.save("redflower.png");

    cmsHPROFILE profile = cmsCreate_sRGBProfile();
}
