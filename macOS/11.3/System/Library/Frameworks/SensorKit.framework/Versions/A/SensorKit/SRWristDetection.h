/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/SRSampleExporting.h>

@class NSString;

@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting> {

	unsigned char _wristDetectionRawValue;

}

@property (assign,nonatomic) unsigned char wristDetectionRawValue;              //@synthesize wristDetectionRawValue=_wristDetectionRawValue - In the implementation block
@property (readonly) char onWrist; 
@property (readonly) long long wristLocation; 
@property (readonly) long long crownOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)sr_dictionaryRepresentation;
-(unsigned char)wristDetectionRawValue;
-(char)onWrist;
-(long long)wristLocation;
-(long long)crownOrientation;
-(void)setWristDetectionRawValue:(unsigned char)arg1 ;
@end

