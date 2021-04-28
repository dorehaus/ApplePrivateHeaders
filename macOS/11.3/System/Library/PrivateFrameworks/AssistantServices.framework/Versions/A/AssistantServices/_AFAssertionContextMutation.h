/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAssertionContextMutating.h>

@class AFAssertionContext, NSString, NSDate, NSDictionary;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating> {

	AFAssertionContext* _baseModel;
	unsigned long long _timestamp;
	NSString* _reason;
	NSDate* _effectiveDate;
	double _expirationDuration;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasReason : 1;
		unsigned hasEffectiveDate : 1;
		unsigned hasExpirationDuration : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setEffectiveDate:(id)arg1 ;
-(void)setExpirationDuration:(double)arg1 ;
@end

