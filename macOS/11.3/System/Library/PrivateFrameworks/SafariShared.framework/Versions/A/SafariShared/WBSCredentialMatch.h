/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem {

	NSURLCredential* _credential;
	NSURLProtectionSpace* _protectionSpace;

}

@property (nonatomic,readonly) NSURLCredential * credential;                        //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
-(NSURLCredential *)credential;
-(id)completion;
-(NSURLProtectionSpace *)protectionSpace;
-(id)initWithCredential:(id)arg1 ;
-(id)initWithCredential:(id)arg1 protectionSpace:(id)arg2 ;
@end

