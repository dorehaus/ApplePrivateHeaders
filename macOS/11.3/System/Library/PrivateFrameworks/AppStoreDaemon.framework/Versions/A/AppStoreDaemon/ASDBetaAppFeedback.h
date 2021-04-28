/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface ASDBetaAppFeedback : NSObject <NSSecureCoding> {

	unsigned _batteryPercentage;
	unsigned _screenHeight;
	unsigned _screenWidth;
	NSString* _comments;
	NSString* _email;
	NSArray* _imagesData;
	NSString* _incidentID;
	unsigned long long _timestamp;
	unsigned long long _appUptime;
	NSString* _bundleID;
	NSString* _pairedWatchModel;
	NSString* _pairedWatchOSVersion;
	NSString* _architecture;
	NSString* _carrier;
	NSString* _cellularNetworkType;
	NSString* _deviceType;
	unsigned long long _diskAvailable;
	unsigned long long _diskTotal;
	NSString* _locale;
	NSString* _networkConnectionType;
	NSString* _osVersion;
	NSString* _timeZone;

}

@property (copy) NSString * comments;                             //@synthesize comments=_comments - In the implementation block
@property (copy) NSString * email;                                //@synthesize email=_email - In the implementation block
@property (copy) NSArray * imagesData;                            //@synthesize imagesData=_imagesData - In the implementation block
@property (copy) NSString * incidentID;                           //@synthesize incidentID=_incidentID - In the implementation block
@property (assign) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long appUptime;                  //@synthesize appUptime=_appUptime - In the implementation block
@property (copy) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * pairedWatchModel;                     //@synthesize pairedWatchModel=_pairedWatchModel - In the implementation block
@property (copy) NSString * pairedWatchOSVersion;                 //@synthesize pairedWatchOSVersion=_pairedWatchOSVersion - In the implementation block
@property (copy) NSString * architecture;                         //@synthesize architecture=_architecture - In the implementation block
@property (assign) unsigned batteryPercentage;                    //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (copy) NSString * carrier;                              //@synthesize carrier=_carrier - In the implementation block
@property (copy) NSString * cellularNetworkType;                  //@synthesize cellularNetworkType=_cellularNetworkType - In the implementation block
@property (copy) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (assign) unsigned long long diskAvailable;              //@synthesize diskAvailable=_diskAvailable - In the implementation block
@property (assign) unsigned long long diskTotal;                  //@synthesize diskTotal=_diskTotal - In the implementation block
@property (copy) NSString * locale;                               //@synthesize locale=_locale - In the implementation block
@property (copy) NSString * networkConnectionType;                //@synthesize networkConnectionType=_networkConnectionType - In the implementation block
@property (copy) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (assign) unsigned screenHeight;                         //@synthesize screenHeight=_screenHeight - In the implementation block
@property (assign) unsigned screenWidth;                          //@synthesize screenWidth=_screenWidth - In the implementation block
@property (copy) NSString * timeZone;                             //@synthesize timeZone=_timeZone - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)timestamp;
-(NSString *)deviceType;
-(NSString *)architecture;
-(void)setArchitecture:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)email;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(unsigned)screenHeight;
-(unsigned)screenWidth;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(unsigned)batteryPercentage;
-(NSArray *)imagesData;
-(void)setImagesData:(NSArray *)arg1 ;
-(NSString *)incidentID;
-(void)setIncidentID:(NSString *)arg1 ;
-(unsigned long long)appUptime;
-(void)setAppUptime:(unsigned long long)arg1 ;
-(NSString *)pairedWatchModel;
-(void)setPairedWatchModel:(NSString *)arg1 ;
-(NSString *)pairedWatchOSVersion;
-(void)setPairedWatchOSVersion:(NSString *)arg1 ;
-(NSString *)carrier;
-(void)setCarrier:(NSString *)arg1 ;
-(NSString *)cellularNetworkType;
-(void)setCellularNetworkType:(NSString *)arg1 ;
-(unsigned long long)diskAvailable;
-(void)setDiskAvailable:(unsigned long long)arg1 ;
-(unsigned long long)diskTotal;
-(void)setDiskTotal:(unsigned long long)arg1 ;
-(NSString *)networkConnectionType;
-(void)setNetworkConnectionType:(NSString *)arg1 ;
-(void)setScreenHeight:(unsigned)arg1 ;
-(void)setScreenWidth:(unsigned)arg1 ;
@end

