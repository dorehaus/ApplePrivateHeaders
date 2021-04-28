/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUDispatchLock : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> underlyingQueue;              //@synthesize underlyingQueue=_underlyingQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(id)initWithLabel:(id)arg1 ;
-(void)performSynchronousRead:(/*^block*/id)arg1 ;
-(void)performAsynchronousRead:(/*^block*/id)arg1 ;
-(void)performSynchronousWrite:(/*^block*/id)arg1 ;
-(void)performAsynchronousWrite:(/*^block*/id)arg1 ;
-(void)assertHasReadLock;
-(void)assertHasWriteLock;
@end
