/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (retain) NSMutableDictionary * queues;                            //@synthesize queues=_queues - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(NSMutableDictionary *)queues;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)advance:(id)arg1 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
@end
