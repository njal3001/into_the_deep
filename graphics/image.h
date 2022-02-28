#pragma once
#include <string>
#include "color.h"

namespace Uboat
{
    class Image
    {
    private:
        Color* m_pixels;
        size_t m_width;
        size_t m_height;

    public:
        Image(const std::string& filename);
        ~Image();

        Image(const Image& other) = delete;
        Image& operator=(const Image& other) = delete;

        const Color* pixels() const;
        size_t width() const;
        size_t height() const;
    };
}
