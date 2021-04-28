/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSandboxExtension.h>

@class NSString;

@interface WBSSandboxGenericExtension : WBSSandboxExtension {

	Optional<long long> _handle;
	NSString* _extensionToken;

}

@property (nonatomic,copy,readonly) NSString * extensionToken;              //@synthesize extensionToken=_extensionToken - In the implementation block
-(char)consumeResource;
-(void)releaseResource;
-(id)initWithURL:(id)arg1 extensionToken:(id)arg2 ;
-(NSString *)extensionToken;
@end

