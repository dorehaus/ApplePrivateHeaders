/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, CBColorSample, NSString;

@interface CBColorFilter : CBModule <CBHIDServiceProtocol> {

	NSMutableArray* _services;
	NSMutableArray* _validServices;
	unsigned long long _sensorPolicy;
	unsigned long long _mode;
	CBColorSample* _sample;

}

@property (assign,nonatomic) unsigned long long sensorPolicy;              //@synthesize sensorPolicy=_sensorPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (readonly) CBColorSample * sample;                               //@synthesize sample=_sample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)calculateCCTForChromaticity:(SCD_Struct_CB37)arg1 ;
+(double)calculateCCTForTristimulus:(SCD_Struct_CB38)arg1 ;
+(SCD_Struct_CB38)calculateTristimulusForChromaticity:(SCD_Struct_CB37)arg1 andLux:(double)arg2 ;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)mode;
-(CBColorSample *)sample;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)setSensorPolicy:(unsigned long long)arg1 ;
-(unsigned long long)sensorPolicy;
-(char)forceSampleUpdate;
-(void)updateSample;
-(void)updateValidServices;
-(char)hasExtRearSensor;
-(char)hasExtFrontSensor;
-(id)newColorSampleLinearWeightedForServices:(id)arg1 ;
-(id)newColorSampleLinearWeightedForSamples:(id)arg1 ;
-(id)newColorSampleLogWeightedForSamples:(id)arg1 ;
-(unsigned long long)evaluatedFilterMode;
-(id)newColorSampleLogWeighted;
-(id)newColorSampleWinnerTakesAll;
-(id)newColorSampleConditionWeighted;
-(void)reportSampleUpdate;
-(char)ALSServiceConformsToPolicy:(id)arg1 ;
@end

