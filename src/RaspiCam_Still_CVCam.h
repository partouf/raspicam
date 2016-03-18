#pragma once

#include "raspicam_still_interface.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>

namespace raspicam {

   class RaspiCam_Still_CVCam : public RaspiCam_Still_Interface
   {
   private:
      CvCapture* Capture;
   public:
      RaspiCam_Still_CVCam();
      ~RaspiCam_Still_CVCam();

      // Inherited via RaspiCam_Still_Interface
      virtual bool open() override;
      virtual bool grab_retrieve(unsigned char * data, unsigned int length) override;
      virtual void release() override;
      virtual size_t getImageBufferSize() const override;

      virtual void commitParameters() override;

      virtual void setWidth(unsigned int width) override;
      virtual void setHeight(unsigned int height) override;
      virtual void setCaptureSize(unsigned int width, unsigned int height) override;
      virtual void setBrightness(unsigned int brightness) override;
      virtual void setQuality(unsigned int quality) override;
      virtual void setRotation(int rotation) override;
      virtual void setISO(int iso) override;
      virtual void setSharpness(int sharpness) override;
      virtual void setContrast(int contrast) override;
      virtual void setSaturation(int saturation) override;
      virtual void setEncoding(RASPICAM_ENCODING encoding) override;
      virtual void setExposure(RASPICAM_EXPOSURE exposure) override;
      virtual void setAWB(RASPICAM_AWB awb) override;
      virtual void setImageEffect(RASPICAM_IMAGE_EFFECT imageEffect) override;
      virtual void setMetering(RASPICAM_METERING metering) override;
      virtual void setHorizontalFlip(bool hFlip) override;
      virtual void setVerticalFlip(bool vFlip) override;

      virtual unsigned int getWidth() override;
      virtual unsigned int getHeight() override;
      virtual unsigned int getBrightness() override;
      virtual unsigned int getRotation() override;
      virtual unsigned int getQuality() override;
      virtual int getISO() override;
      virtual int getSharpness() override;
      virtual int getContrast() override;
      virtual int getSaturation() override;
      virtual RASPICAM_ENCODING getEncoding() override;
      virtual RASPICAM_EXPOSURE getExposure() override;
      virtual RASPICAM_AWB getAWB() override;
      virtual RASPICAM_IMAGE_EFFECT getImageEffect() override;
      virtual RASPICAM_METERING getMetering() override;
      virtual bool isHorizontallyFlipped() override;
      virtual bool isVerticallyFlipped() override;
   };

}
