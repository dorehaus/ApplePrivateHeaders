/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AAAvailabilityResponse : AAResponse {

	NSString* _status;
	NSString* _eta;
	NSString* _feature;

}

@property (nonatomic,readonly) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * eta;                  //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
-(NSString *)status;
-(NSString *)feature;
-(NSString *)eta;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end
