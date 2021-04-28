/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDHAPMetrics : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _category;

}

@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * category;                     //@synthesize category=_category - In the implementation block
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(id)eventName;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(id)serializedEvent;
-(id)initWithHMDAccessory:(id)arg1 ;
@end

