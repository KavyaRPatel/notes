---

id: zBvfNdmboFFBnKDFDpGz3
title: Ugrp
desc: ''
updated: 1635240088450
created: 1635237721517
---
## Truck number plate verification: 
The System consists of  two major components:
1. A Video  capturing source.  
2. The application that is developed using MATLAB.
Assumption: Single entry gate and single lane traffic. 
### Steps: 

1. Selection of the required frame.
2. The selected  image is pre-processed  by passing  it over grayscale filter and edge detection is applied to isolate the region of  interest.
3. The obtained gray image is then binarized, that is, it is converted to a logical matrix  by  giving the  pixel  values of  1  for white shade and  0 for  black shade.
4. The  gray  level  plate  images  are enhanced by applying contrast extension and median filtering techniques. 
 
#### Contrast Extension: 
It sharpens the image. 
#### Median Filtering:
Used for removing unwanted noisy regions.

## Gray Scale
A  gray  scale digital  image is  an  image in  which each  pixel  is quantized exclusively the shades of neutral gray, varying from black at the weakest intensity  to white  at the  strongest intensity.

The  gray  level  plate  images  are enhanced by applying contrast extension and median filtering techniques . So,  the  contrast differences  between images and the  noises such  as dirty regions  in white  background of the plate can be eliminated.

## Contrast differences: 
The gray-level histogram  of  an  image is  the  distribution  of the  gray  level values in  an image.  The histogram equalization  is a  popular technique  to  improve  the  appearance  of  a  poor  contrasted image. The process  of equalizing  the histogram  of an  image consists of 4 steps: 
(i) Find the sum of the histogram values. 
(ii)  Normalize  these values  dividing by  the total  number of pixels. 
(iii) Multiply these normalized values by the maximum gray-level value. 
(iv) Map the new gray level values.

## Median Filtering:
In  this filtering  method, the  3x3 matrices is  passed around  the image.  The  dimension of  these  matrices can  be adjusted according to the noise level. The process of working is 
(i) one pixel is chosen as centre pixel of the 3x3 matrices 
(ii)  the  surrounding  pixels  are  assigned  as  neighborhood pixels  
(iii) the  sorting process  are employed  between these nine pixels from smaller to the bigger
(iv) the fifth element is assigned  as  median  element
(v)  these  procedures  are implemented to the all pixels in plate image.

## Regionprops: 
Regionprops function  returns  the  smallest  bounding  box  that contains  a character. This method is  used to obtain  the bounding boxes of all characters in the number plate.
![](/assets/images/2021-10-26-14-31-51.png)

## OCR using Templet Matching: 
For  recognition  to  occur,  the  current  input  character  is compared to  each template  to find  either an  exact match, or the  template  with  the  closest  representation  of  the  input character. It can capture the best position where the character is by  moving standard  template, thereby  carry out  the exact match.  Moving  template  matching  method  is  based  on  the template  of target  character,  using the  template  of standard character to match the target character from eight directions of up, down, left, right, upper left, lower left, upper right, lower right. 