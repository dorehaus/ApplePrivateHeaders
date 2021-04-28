/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MMDeviceInfo : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;

}

@property (nonatomic,readonly) NSString * udid;                      //@synthesize udid=_udid - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                 //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) long long osTheme; 
+(id)deviceInfo;
-(id)init;
-(NSString *)deviceName;
-(NSString *)buildVersion;
-(NSString *)udid;
-(NSString *)osVersion;
-(long long)osTheme;
-(long long)aquaInterface;
@end

