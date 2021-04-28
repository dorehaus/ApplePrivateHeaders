/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/HMCharacteristicEventProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMNumberRange, HMCharacteristic, NSString;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying> {

	HMNumberRange* _thresholdRange;
	HMCharacteristic* _characteristic;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;                //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy,readonly) HMNumberRange * thresholdRange;              //@synthesize thresholdRange=_thresholdRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(char)isSupportedForHome:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMCharacteristic *)characteristic;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3 ;
-(void)setThresholdRange:(HMNumberRange *)arg1 ;
-(HMNumberRange *)thresholdRange;
-(void)_updateThresholdRange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2 ;
-(void)updateThresholdRange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

