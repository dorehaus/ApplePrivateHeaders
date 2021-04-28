/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSProtocolCondition.h>

@class NSString, NSNumber;

@interface SSApplicationVersionCondition : SSProtocolCondition {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersion;

}
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(char)evaluateWithContext:(id)arg1 ;
@end

