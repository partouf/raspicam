#pragma once

#include "raspicamtypes.h"

namespace raspicam {
    /**Raspicam API for still camera
     */
    class RaspiCam_Still_Interface{
    public:
        //Constructor
        RaspiCam_Still_Interface();
        //Destructor
        ~RaspiCam_Still_Interface();
        
        // Opens camera connection
        virtual bool open() = 0;
        
        //Grabs and set the data into the data buffer which has the indicated length. It is your responsability
        // to alloc the buffer. You can use getImageBufferSize for that matter.
        virtual bool grab_retrieve ( unsigned char * data, unsigned int length ) = 0;
        
        //Releases the camera
        virtual void release() = 0;
        
        // Returns the size of the images captured with the current parameters
        virtual size_t getImageBufferSize() const = 0;

	
	
        virtual void commitParameters() = 0;
        virtual void setWidth ( unsigned int width ) = 0;
        virtual void setHeight ( unsigned int height ) = 0;
        virtual void setCaptureSize ( unsigned int width, unsigned int height ) = 0;
        virtual void setBrightness ( unsigned int brightness ) = 0;
        virtual void setQuality ( unsigned int quality );
        virtual void setRotation ( int rotation ) = 0;
        virtual void setISO ( int iso ) = 0;
        virtual void setSharpness ( int sharpness ) = 0;
        virtual void setContrast ( int contrast ) = 0;
        virtual void setSaturation ( int saturation ) = 0;
        virtual void setEncoding ( RASPICAM_ENCODING encoding ) = 0;
        virtual void setExposure ( RASPICAM_EXPOSURE exposure ) = 0;
        virtual void setAWB ( RASPICAM_AWB awb ) = 0;
        virtual void setImageEffect ( RASPICAM_IMAGE_EFFECT imageEffect ) = 0;
        virtual void setMetering ( RASPICAM_METERING metering ) = 0;
        virtual void setHorizontalFlip ( bool hFlip ) = 0;
        virtual void setVerticalFlip ( bool vFlip ) = 0;

        virtual unsigned int getWidth() = 0;
        virtual unsigned int getHeight() = 0;
        virtual unsigned int getBrightness() = 0;
        virtual unsigned int getRotation() = 0;
        virtual unsigned int getQuality() = 0;
        virtual int getISO() = 0;
        virtual int getSharpness() = 0;
        virtual int getContrast() = 0;
        virtual int getSaturation() = 0;
        virtual RASPICAM_ENCODING getEncoding() = 0;
        virtual RASPICAM_EXPOSURE getExposure() = 0;
        virtual RASPICAM_AWB getAWB() = 0;
        virtual RASPICAM_IMAGE_EFFECT getImageEffect() = 0;
        virtual RASPICAM_METERING getMetering() = 0;
        virtual bool isHorizontallyFlipped() = 0;
        virtual bool isVerticallyFlipped() = 0;
    };
}
