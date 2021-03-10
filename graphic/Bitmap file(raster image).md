Bitmap file(raster image)
===========
2x2 = 6 byte of data for every row + 2 bytes of padding 

identifier for any bitmap file = 42 4d (2 bytes)
header (14 bytes)
dip header (40 bytes)
size of the file in bytes (4 bytes)
reserved bytes (4 bytes)
(42 4d) (5a 00 00 00) (00 00 00 00) 


the simplest way to represent an image data
monochrome image 1 bit for every pixel(01 or binary)
color image 8 bit for every pixel => 2^8 = 256 possible value for any pixel


color depth

256 = 16x16

