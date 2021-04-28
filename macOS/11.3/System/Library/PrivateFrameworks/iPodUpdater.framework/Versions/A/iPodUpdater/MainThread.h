/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iPodUpdater.framework/Versions/A/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMachPort, NSMutableArray;

@interface MainThread : NSObject {

	NSMachPort* _ticklePort;
	NSMutableArray* _requests;

}
+(void)initialize;
+(id)mainThread;
+(void)setupMainThreadObject;
+(char)runningOnMainThread;
-(id)init;
-(void)handlePortMessage:(id)arg1 ;
-(void)performOneway:(char)arg1 result:(void*)arg2 withTarget:(id)arg3 selector:(SEL)arg4 ;
-(void)_postNotificationInMainThread:(id)arg1 ;
-(char)_runningOnMainThread;
-(void)_threadWillDie:(id)arg1 ;
@end

