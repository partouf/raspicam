/**********************************************************
 Software developed by AVA ( Ava Group of the University of Cordoba, ava  at uco dot es)
 Main author Rafael Munoz Salinas (rmsalinas at uco dot es)
 This software is released under BSD license as expressed below
-------------------------------------------------------------------
Copyright (c) 2013, AVA ( Ava Group University of Cordoba, ava  at uco dot es)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:

   This product includes software developed by the Ava group of the University of Cordoba.

4. Neither the name of the University nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY AVA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AVA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
****************************************************************/
#ifndef _RaspiCam_STILL_H
#define _RaspiCam_STILL_H

#include "raspicam_still_interface.h"

#include "raspicamtypes.h"
#include <cstdio>
namespace raspicam {

   namespace _private {
      class Private_Impl_Still;
   };


   /**Raspicam API for still camera
    */
   class RaspiCam_Still : public RaspiCam_Still_Interface {
   private:
      //the implementation of the camera
      _private::Private_Impl_Still *_impl;

   public:
      //Constructor
      RaspiCam_Still();
      //Destructor
      ~RaspiCam_Still();
      // Opens camera connection
      virtual bool open() override;
      //Grabs and set the data into the data buffer which has the indicated length. It is your responsability
      // to alloc the buffer. You can use getImageBufferSize for that matter.
      virtual bool grab_retrieve(unsigned char * data, unsigned int length) override;
      //Releases the camera
      virtual void release() override;//not working
      // Returns the size of the images captured with the current parameters
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
};
#endif

