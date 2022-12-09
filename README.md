# RGBCombiner
by guiza
#------------
# About
RGBCombiner is a simple and efficient tool that Takes 3 one-channel images 
corresponding to red, green, and blue channels and combines them into one RGB 
image. Very useful when combining filtered astronomical images into a color 
image. This script was created using the CImg library (https://cimg.eu)

# Usage
For simplicity, please use any of the natively supported file formats by CImg
as input files:
- RAW : consists in a very simple header (in ascii), then the image data.
- ASC (Ascii)
- HDR (Analyze 7.5)
- INR (Inrimage)
- PPM/PGM (Portable Pixmap)
- BMP (uncompressed)
- PAN (Pandore-5)
- DLM (Matlab ASCII)

Then, run main.cpp in a local directory with your input files where you will see
the following prompt:
```
  % Please enter three image files corresponding to red, green, and blue channels:
```
Enter the three corresponding files and the output will be saved locally as 
`rgb_result.bmp`.

# Example
![red.ppm](https://i.imgur.com/KoQDuAo.jpg)
![green.ppm](https://i.imgur.com/SJ7m3k4.jpg)
![blue.ppm](https://i.imgur.com/mQnUqBr.jpg)

The previous three images (`red.ppm, green.ppm, blue.ppm`) were the input files and 
the following image (`rgb_result.bmp`) was the output.

![rgb_result.bmp](https://i.imgur.com/hdQfUsk.png)

# Changelog
### Version 1.0 (12/9/22)
```diff
+ Added basic functionality
```
