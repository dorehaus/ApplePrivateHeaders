/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSURL;

@interface CLSSocialService : NSObject {

	NSMutableDictionary* _proxy;
	unsigned long long _intent;
	NSURL* _proxyURL;

}

@property (readonly) unsigned long long intent;              //@synthesize intent=_intent - In the implementation block
@property (copy) NSURL * proxyURL;                           //@synthesize proxyURL=_proxyURL - In the implementation block
+(id)defaultFileName;
+(id)socialService;
-(id)init;
-(unsigned long long)intent;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(void)invalidateMemoryCaches;
-(id)proxiedValueForKey:(id)arg1 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(char)flushProxy;
-(void)updateProxy;
-(void)setProxyURL:(NSURL *)arg1 ;
-(NSURL *)proxyURL;
@end

