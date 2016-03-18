#include "RaspiCam_Still_CVCam.h"

#include <iostream>

#ifndef min
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#endif

raspicam::RaspiCam_Still_CVCam::RaspiCam_Still_CVCam() : raspicam::RaspiCam_Still_Interface()
{
   Capture = nullptr;
}

raspicam::RaspiCam_Still_CVCam::~RaspiCam_Still_CVCam()
{
   release();
}

bool raspicam::RaspiCam_Still_CVCam::open()
{
   Capture = cvCreateCameraCapture(CV_CAP_ANY);
   if (!Capture) {
      std::cerr << "ERROR: capture is NULL" << std::endl;
      return false;
   }

   return true;
}

bool raspicam::RaspiCam_Still_CVCam::grab_retrieve(unsigned char * data, unsigned int length)
{
   IplImage* frame = cvQueryFrame(Capture);
   if (!frame) {
      std::cerr << "ERROR: frame is NULL" << std::endl;
      return false;
   }

   memcpy(data, frame->imageData, min(length, frame->imageSize));

   return true;
}

void raspicam::RaspiCam_Still_CVCam::release()
{
   if (Capture != nullptr)
   {
      cvReleaseCapture(&Capture);
   }
}

size_t raspicam::RaspiCam_Still_CVCam::getImageBufferSize() const
{
   return size_t();
}

void raspicam::RaspiCam_Still_CVCam::commitParameters()
{
}

void raspicam::RaspiCam_Still_CVCam::setWidth(unsigned int width)
{
}

void raspicam::RaspiCam_Still_CVCam::setHeight(unsigned int height)
{
}

void raspicam::RaspiCam_Still_CVCam::setCaptureSize(unsigned int width, unsigned int height)
{
}

void raspicam::RaspiCam_Still_CVCam::setBrightness(unsigned int brightness)
{
}

void raspicam::RaspiCam_Still_CVCam::setQuality(unsigned int quality)
{
}

void raspicam::RaspiCam_Still_CVCam::setRotation(int rotation)
{
}

void raspicam::RaspiCam_Still_CVCam::setISO(int iso)
{
}

void raspicam::RaspiCam_Still_CVCam::setSharpness(int sharpness)
{
}

void raspicam::RaspiCam_Still_CVCam::setContrast(int contrast)
{
}

void raspicam::RaspiCam_Still_CVCam::setSaturation(int saturation)
{
}

void raspicam::RaspiCam_Still_CVCam::setEncoding(RASPICAM_ENCODING encoding)
{
}

void raspicam::RaspiCam_Still_CVCam::setExposure(RASPICAM_EXPOSURE exposure)
{
}

void raspicam::RaspiCam_Still_CVCam::setAWB(RASPICAM_AWB awb)
{
}

void raspicam::RaspiCam_Still_CVCam::setImageEffect(RASPICAM_IMAGE_EFFECT imageEffect)
{
}

void raspicam::RaspiCam_Still_CVCam::setMetering(RASPICAM_METERING metering)
{
}

void raspicam::RaspiCam_Still_CVCam::setHorizontalFlip(bool hFlip)
{
}

void raspicam::RaspiCam_Still_CVCam::setVerticalFlip(bool vFlip)
{
}

unsigned int raspicam::RaspiCam_Still_CVCam::getWidth()
{
   return 0;
}

unsigned int raspicam::RaspiCam_Still_CVCam::getHeight()
{
   return 0;
}

unsigned int raspicam::RaspiCam_Still_CVCam::getBrightness()
{
   return 0;
}

unsigned int raspicam::RaspiCam_Still_CVCam::getRotation()
{
   return 0;
}

unsigned int raspicam::RaspiCam_Still_CVCam::getQuality()
{
   return 0;
}

int raspicam::RaspiCam_Still_CVCam::getISO()
{
   return 0;
}

int raspicam::RaspiCam_Still_CVCam::getSharpness()
{
   return 0;
}

int raspicam::RaspiCam_Still_CVCam::getContrast()
{
   return 0;
}

int raspicam::RaspiCam_Still_CVCam::getSaturation()
{
   return 0;
}

raspicam::RASPICAM_ENCODING raspicam::RaspiCam_Still_CVCam::getEncoding()
{
   return RASPICAM_ENCODING();
}

raspicam::RASPICAM_EXPOSURE raspicam::RaspiCam_Still_CVCam::getExposure()
{
   return RASPICAM_EXPOSURE();
}

raspicam::RASPICAM_AWB raspicam::RaspiCam_Still_CVCam::getAWB()
{
   return RASPICAM_AWB();
}

raspicam::RASPICAM_IMAGE_EFFECT raspicam::RaspiCam_Still_CVCam::getImageEffect()
{
   return RASPICAM_IMAGE_EFFECT();
}

raspicam::RASPICAM_METERING raspicam::RaspiCam_Still_CVCam::getMetering()
{
   return RASPICAM_METERING();
}

bool raspicam::RaspiCam_Still_CVCam::isHorizontallyFlipped()
{
   return false;
}

bool raspicam::RaspiCam_Still_CVCam::isVerticallyFlipped()
{
   return false;
}
