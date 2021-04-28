/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(char)isRunningInGeod;
+(void)setIsRunningInGeod:(char)arg1 ;
-(id)init;
-(id)productName;
-(char)isInternalInstall;
-(id)buildVersion;
-(id)osVersion;
-(char)supportsNavigation;
-(id)clientCapabilities;
-(id)hardwareIdentifier;
-(id)hardwareModel;
-(id)osAndBuildVersion;
-(id)_systemInfoDictionary;
-(char)_deviceSupportsNavigation;
-(char)mapsFeatureFreedomEnabled;
-(char)supportsRealisticTiles;
-(char)supportsForceTouch;
-(char)isCellDataPossible;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(double)deviceScreenScale;
@end

