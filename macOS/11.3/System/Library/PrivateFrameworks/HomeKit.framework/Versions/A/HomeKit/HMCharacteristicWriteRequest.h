/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCharacteristicRequest.h>
#import <libobjc.A.dylib/HMWriteOperation.h>

@protocol NSCopyingNSObject;
@class NSString;

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest <HMWriteOperation> {

	id<NSCopying><NSObject> _value;

}

@property (nonatomic,readonly) id<NSCopying><NSObject> value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSCopying><NSObject>)value;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 ;
@end

