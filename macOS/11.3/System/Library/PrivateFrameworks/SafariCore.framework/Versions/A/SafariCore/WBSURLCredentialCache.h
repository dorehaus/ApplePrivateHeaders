/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface WBSURLCredentialCache : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _credentialCache;
	/*^block*/id _credentialFetchBlock;

}

@property (copy,readonly) NSDictionary * credentials; 
-(void)invalidate;
-(NSDictionary *)credentials;
-(id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(/*^block*/id)arg2 ;
-(void)getCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCredentialFetchBlock:(/*^block*/id)arg1 ;
@end

