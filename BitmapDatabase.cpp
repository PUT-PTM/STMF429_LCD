// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern const unsigned char _black[]; 
extern const unsigned char _blue[]; 
extern const unsigned char _blueq[]; 
extern const unsigned char _green[]; 
extern const unsigned char _red[]; 
extern const unsigned char _redq[]; 
extern const unsigned char _white[]; 

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { _black, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _blue, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _blueq, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _green, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _red, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _redq, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 },
    { _white, 0, 30, 30, 0, 0, 30, 30, touchgfx::Bitmap::RGB565 }
};

namespace BitmapDatabase
{
  const touchgfx::Bitmap::BitmapData* getInstance()
  {
    return bitmap_database;
  }
  uint16_t getInstanceSize()
  {
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
  }
}

