/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {

	_PASCoalescingTimer* _timer;

}
-(void)cancelPendingOperations;
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 operation:(/*^block*/id)arg2 ;
-(void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2 ;
-(void)runImmediately;
-(void)runAfterStrictDelaySeconds:(double)arg1 ;
@end

