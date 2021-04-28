/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSError, NSNumber, NSDate;

@interface HMDCharacteristicResponse : HMFObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)responsesWithRequests:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HMDCharacteristicRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(id)attributeDescriptions;
-(NSDate *)valueUpdatedTime;
-(NSNumber *)stateNumber;
-(void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
@end

