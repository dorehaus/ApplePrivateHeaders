/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAAccountManagementUIResponse : AAResponse {

	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)responseData;
@end

