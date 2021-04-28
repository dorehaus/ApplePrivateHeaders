/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface HMDNaturalLightingCurve : HMFObject <HMFLogging, NSSecureCoding, NSCopying> {

	unsigned long long _version;
	NSArray* _transitionPoints;
	long long _minimumBrightness;
	long long _maximumBrightness;
	long long _minimumColorTemperature;
	long long _maximumColorTemperature;
	unsigned long long _colorTemperatureNotifyValueChangeThreshold;
	unsigned long long _colorTemperatureNotifyIntervalThresholdInMilliseconds;
	unsigned long long _colorTemperatureUpdateIntervalInMilliseconds;

}

@property (assign) unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;              //@synthesize colorTemperatureNotifyIntervalThresholdInMilliseconds=_colorTemperatureNotifyIntervalThresholdInMilliseconds - In the implementation block
@property (assign) unsigned long long colorTemperatureUpdateIntervalInMilliseconds;                       //@synthesize colorTemperatureUpdateIntervalInMilliseconds=_colorTemperatureUpdateIntervalInMilliseconds - In the implementation block
@property (assign) unsigned long long colorTemperatureNotifyValueChangeThreshold;                         //@synthesize colorTemperatureNotifyValueChangeThreshold=_colorTemperatureNotifyValueChangeThreshold - In the implementation block
@property (readonly) unsigned long long version;                                                          //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSArray * transitionPoints;                                                     //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (readonly) long long minimumBrightness;                                                         //@synthesize minimumBrightness=_minimumBrightness - In the implementation block
@property (readonly) long long maximumBrightness;                                                         //@synthesize maximumBrightness=_maximumBrightness - In the implementation block
@property (readonly) long long minimumColorTemperature;                                                   //@synthesize minimumColorTemperature=_minimumColorTemperature - In the implementation block
@property (readonly) long long maximumColorTemperature;                                                   //@synthesize maximumColorTemperature=_maximumColorTemperature - In the implementation block
@property (readonly) unsigned long long checksum; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)logCategory;
+(long long)colorTemperatureMiredsFromKelvins:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(unsigned long long)checksum;
-(id)attributeDescriptions;
-(NSArray *)transitionPoints;
-(long long)minimumBrightness;
-(long long)maximumBrightness;
-(id)initWithVersion:(unsigned long long)arg1 transitionPoints:(id)arg2 minimumBrightness:(long long)arg3 maximumBrightness:(long long)arg4 minimumColorTemperature:(long long)arg5 maximumColorTemperature:(long long)arg6 ;
-(unsigned long long)colorTemperatureNotifyIntervalThresholdInMilliseconds;
-(void)setColorTemperatureNotifyIntervalThresholdInMilliseconds:(unsigned long long)arg1 ;
-(unsigned long long)colorTemperatureNotifyValueChangeThreshold;
-(void)setColorTemperatureNotifyValueChangeThreshold:(unsigned long long)arg1 ;
-(unsigned long long)colorTemperatureUpdateIntervalInMilliseconds;
-(void)setColorTemperatureUpdateIntervalInMilliseconds:(unsigned long long)arg1 ;
-(long long)minimumColorTemperature;
-(long long)maximumColorTemperature;
-(id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)arg1 ;
-(id)initWithCurve:(id)arg1 minimumColorTemperature:(long long)arg2 maximumColorTemperature:(long long)arg3 ;
-(id)colorTemperatureForBrightness:(long long)arg1 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg2 ;
@end

