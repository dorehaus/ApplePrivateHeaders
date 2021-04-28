/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _CATArbitratorRegistrationEntry : NSObject {

	id mResource;
	unsigned long long mMaxConcurrentCount;
	NSMutableArray* mPendingWaits;
	NSObject*<OS_dispatch_source> mPendingWaitsSource;
	NSObject*<OS_dispatch_queue> mPendingWaitsQueue;
	unsigned long long _currentCount;

}

@property (nonatomic,readonly) unsigned long long currentCount;              //@synthesize currentCount=_currentCount - In the implementation block
-(void)invalidate;
-(unsigned long long)currentCount;
-(id)makeResourceProxyIfPossible:(char)arg1 ;
-(id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2 ;
-(void)servicePendingWaitTokens;
-(id)makeResourceProxyIfPossibleWithoutLocking:(char)arg1 ;
-(void)pendingWaitsNeedServicing;
-(id)waitForResourceWithExclusive:(char)arg1 group:(id)arg2 ;
-(void)resourceProxyDidInvalidate:(id)arg1 ;
@end

