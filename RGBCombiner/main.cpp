//
//  main.cpp
//  RGBCombiner v1.0
//
//  Created by guiza on 12/9/22.
//
//  Takes 3 grayscale images corresponding to red, green, and blue channels
//  And combines them into one RGB channel. Very useful when combining
//  filtered astronomical images into a color image. Created using the CImg
//  library (https://cimg.eu)
//

#include <iostream>
#include <string>
#include <filesystem>

#define cimg_display 0
#include "CImg.h"

using namespace cimg_library;
using namespace std;

int main(int argc, const char * argv[]) {
  string red_channel_path;
  string green_channel_path;
  string blue_channel_path;
  
  cout << "=====================\nRGBCombiner by guiza\n=====================\n\n";
  
  cout << "% Please enter three image files corresponding to red, green, and blue channels:\n% ";
  cin >> red_channel_path >> blue_channel_path >> green_channel_path;
  
  CImg<unsigned char> red_channel(red_channel_path.c_str());
  CImg<unsigned char> green_channel(green_channel_path.c_str());
  CImg<unsigned char> blue_channel(blue_channel_path.c_str());
  
  uint32_t width = red_channel.width();
  uint32_t height = red_channel.height();
  
  CImg<unsigned char> rgb_img(width, height, 1, 3);
  
  for (uint32_t w = 0; w < width; ++w) {
    for (uint32_t h = 0; h < height; ++h) {
      rgb_img(w,h,0) = red_channel(w,h,0);
      rgb_img(w,h,1) = green_channel(w,h,1);
      rgb_img(w,h,2) = blue_channel(w,h,2);
    }
  }
  
  rgb_img.save("rgb_result.bmp");
  std::cout << "% File rgb_result.bmp saved!\n";
  return 0;
}
