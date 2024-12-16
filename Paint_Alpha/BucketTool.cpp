#include "BucketTool.h"

System::Void BucketTool::DrawPreview(System::Drawing::Graphics^ g)
{
    return System::Void();
}

System::Void BucketTool::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
    System::Drawing::Bitmap^ bmp = Paint::layersController->ActiveLayer->bitmap;
    
    if (e->X < 0 || e->X >= bmp->Width || e->Y < 0 || e->Y >= bmp->Height) return;

    System::Drawing::Imaging::BitmapData^ data = bmp->LockBits(System::Drawing::Rectangle(0, 0, bmp->Width, bmp->Height), System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
    unsigned char* scan0 = (unsigned char*)data->Scan0.ToPointer();

    int bitsPerPixel = System::Drawing::Image::GetPixelFormatSize(bmp->PixelFormat) / 8;

    std::queue<std::pair<int, int>> remainingPoints;
    remainingPoints.push(std::pair<int, int>(e->X, e->Y));

    unsigned char* originalPixel = scan0 + (e->Y - 1) * data->Stride + e->X * bitsPerPixel;
    unsigned char color[4] = { originalPixel[0], originalPixel[1], originalPixel[2], originalPixel[3] };
    unsigned char newColor[4] = { 
        Paint::colorController->ActiveColor.B,
        Paint::colorController->ActiveColor.G, 
        Paint::colorController->ActiveColor.R,
        Paint::colorController->ActiveColor.A 
    };

    if (color[0] == newColor[0] && color[1] == newColor[1] && color[2] == newColor[2]) return;
    memcpy(originalPixel, newColor, bitsPerPixel);

    while (!remainingPoints.empty()) {
        std::pair<int, int> point = remainingPoints.front();
        remainingPoints.pop();
        if (point.second > 0) {
            unsigned char* pixel = scan0 + (point.second - 1) * data->Stride + point.first * bitsPerPixel;
            if (pixel[0] == color[0] && pixel[1] == color[1] && pixel[2] == color[2]) {
                memcpy(pixel, newColor, bitsPerPixel);
                remainingPoints.push(std::pair<int, int>(point.first, point.second - 1));
            }
        }
        if (point.second < bmp->Height - 1) {
            unsigned char* pixel = scan0 + (point.second + 1) * data->Stride + point.first * bitsPerPixel;
            if (pixel[0] == color[0] && pixel[1] == color[1] && pixel[2] == color[2]) {
                memcpy(pixel, newColor, bitsPerPixel);
                remainingPoints.push(std::pair<int, int>(point.first, point.second + 1));
            }
        }
        if (point.first > 0) {
            unsigned char* pixel = scan0 + point.second * data->Stride + (point.first - 1) * bitsPerPixel;
            if (pixel[0] == color[0] && pixel[1] == color[1] && pixel[2] == color[2]) {
                memcpy(pixel, newColor, bitsPerPixel);
                remainingPoints.push(std::pair<int, int>(point.first - 1, point.second));
            }
        }
        if (point.first < bmp->Width - 1) {
            unsigned char* pixel = scan0 + point.second * data->Stride + (point.first + 1) * bitsPerPixel;
            if (pixel[0] == color[0] && pixel[1] == color[1] && pixel[2] == color[2]) {
                memcpy(pixel, newColor, bitsPerPixel);
                remainingPoints.push(std::pair<int, int>(point.first + 1, point.second));
            }
        }
    }

    bmp->UnlockBits(data);
}

System::Void BucketTool::OnMouseUp(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Void();
}

System::Void BucketTool::OnTick()
{
    return System::Void();
}

System::Void BucketTool::OnMouseMove(System::Windows::Forms::MouseEventArgs^ e)
{
    return System::Void();
}
