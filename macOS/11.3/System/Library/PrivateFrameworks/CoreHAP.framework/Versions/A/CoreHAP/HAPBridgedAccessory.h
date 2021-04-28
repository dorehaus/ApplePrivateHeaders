/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {

	HAPCharacteristic* _reachabilityCharacteristic;

}

@property (assign,nonatomic,__weak) HAPCharacteristic * reachabilityCharacteristic;              //@synthesize reachabilityCharacteristic=_reachabilityCharacteristic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shortDescription;
-(char)isPrimary;
-(void)setReachable:(char)arg1 ;
-(char)mergeObject:(id)arg1 ;
-(char)shouldMergeObject:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(char)__parseServices;
-(char)__isReachable;
-(HAPCharacteristic *)reachabilityCharacteristic;
-(char)__parseBridgeService:(id)arg1 ;
-(void)setReachabilityCharacteristic:(HAPCharacteristic *)arg1 ;
-(char)mergeWithAccessory:(id)arg1 ;
@end

