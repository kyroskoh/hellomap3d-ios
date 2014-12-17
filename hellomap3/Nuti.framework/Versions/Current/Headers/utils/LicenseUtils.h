/*
 * Copyright 2014 Nutiteq Llc. All rights reserved.
 * Copying and using this code is allowed only according
 * to license terms, as given in https://www.nutiteq.com/license/
 */

#ifndef _NUTI_LICENSEUTILS_H_
#define _NUTI_LICENSEUTILS_H_

#include <string>

namespace Nuti {
    
    namespace PlatformType {
        enum PlatformType {
            PLATFORM_TYPE_ANDROID,
            PLATFORM_TYPE_IOS,
            PLATFORM_TYPE_MAC_OS,
            PLATFORM_TYPE_WINDOWS,
            PLATFORM_TYPE_WINDOWS_PHONE
        };
    };
        
    namespace WatermarkType {
        enum WatermarkType {
            WATERMARK_TYPE_EVALUATION,
            WATERMARK_TYPE_EXPIRED,
            WATERMARK_TYPE_NUTITEQ,
            WATERMARK_TYPE_CUSTOM
        };
    };
    
    class LicenseUtils {
    public:
        static WatermarkType::WatermarkType CheckLicense(const std::string& licenseString,
                                                         PlatformType::PlatformType platformType,
                                                         const std::string& appIdentifier);
        
    private:
        static const std::string LICENSE_PREFIX;
        
        static const std::string PUBLIC_KEY;
        
        static const std::string PRODUCT_VERSION;
    };
    
}

#endif
