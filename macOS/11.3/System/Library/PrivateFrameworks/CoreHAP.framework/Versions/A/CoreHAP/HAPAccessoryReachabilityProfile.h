/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPAccessoryReachabilityProfile.h>
@class HAPCharacteristic;


@protocol HAPAccessoryReachabilityProfile <NSObject,NSCopying>
@property (assign,nonatomic) double sleepInterval; 
@property (nonatomic,readonly) HAPCharacteristic * sleepIntervalCharacteristic; 
@property (nonatomic,readonly) HAPCharacteristic * pollCharacteristic; 
@required
-(double)sleepInterval;
-(void)setSleepInterval:(double)arg1;
-(HAPCharacteristic *)pollCharacteristic;
-(HAPCharacteristic *)sleepIntervalCharacteristic;

@end


@class HAPCharacteristic, NSString;

@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile> {

	double _sleepInterval;
	HAPCharacteristic* _sleepIntervalCharacteristic;
	HAPCharacteristic* _pollCharacteristic;

}

@property (nonatomic,retain) HAPCharacteristic * sleepIntervalCharacteristic;              //@synthesize sleepIntervalCharacteristic=_sleepIntervalCharacteristic - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * pollCharacteristic;                       //@synthesize pollCharacteristic=_pollCharacteristic - In the implementation block
@property (assign,nonatomic) double sleepInterval;                                         //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(double)timeIntervalFromMillisecondNumberValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(id)attributeDescriptions;
-(double)sleepInterval;
-(void)setSleepInterval:(double)arg1 ;
-(HAPCharacteristic *)pollCharacteristic;
-(HAPCharacteristic *)sleepIntervalCharacteristic;
-(void)setSleepIntervalCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPollCharacteristic:(HAPCharacteristic *)arg1 ;
-(id)initWithDiscoveredServices:(id)arg1 ;
@end

