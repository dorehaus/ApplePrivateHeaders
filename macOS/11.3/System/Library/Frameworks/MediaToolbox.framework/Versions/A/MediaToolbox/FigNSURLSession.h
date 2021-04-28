/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate, OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSURLSessionConfiguration, NSURLSession, NSOperationQueue, NSObject, NSString;

@interface FigNSURLSession : NSObject {

	NSURLSessionConfiguration* _configuration;
	NSURLSession* _session;
	id<NSURLSessionDataDelegate> _dataDelegate;
	NSOperationQueue* _opQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _clientBundleIdentifier;
	OpaqueFigCFWeakReferenceHolderRef _weakAssertion;
	long long _doomTime;
	char _doomCheckScheduled;
	int _assertionCount;

}

@property (nonatomic,readonly) NSURLSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<NSURLSessionDataDelegate> dataDelegate;               //@synthesize dataDelegate=_dataDelegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * opQueue;                              //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier;                       //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long doomTime;                                        //@synthesize doomTime=_doomTime - In the implementation block
@property (assign,nonatomic) char doomCheckScheduled;                                   //@synthesize doomCheckScheduled=_doomCheckScheduled - In the implementation block
@property (assign,nonatomic) int assertionCount;                                        //@synthesize assertionCount=_assertionCount - In the implementation block
-(void)setDoomTime:(long long)arg1 ;
-(id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(long long)doomTime;
-(char)doomCheckScheduled;
-(void)setDoomCheckScheduled:(char)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSURLSession *)session;
-(void)debug;
-(id<NSURLSessionDataDelegate>)dataDelegate;
-(NSString *)clientBundleIdentifier;
-(NSOperationQueue *)opQueue;
-(int)assertionCount;
-(void)setAssertionCount:(int)arg1 ;
-(FigOpaqueAssertionRef)acquireAssertion;
@end

