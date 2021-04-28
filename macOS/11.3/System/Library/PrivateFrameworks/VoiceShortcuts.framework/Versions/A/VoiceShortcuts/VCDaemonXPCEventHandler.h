/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMapTable, NSObject;

@interface VCDaemonXPCEventHandler : NSObject {

	NSArray* _streams;
	NSMapTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMapTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * streams;                          //@synthesize streams=_streams - In the implementation block
-(void)resume;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMapTable *)observers;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(NSArray *)streams;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(id)initWithStreams:(id)arg1 ;
-(id)initWithStreams:(id)arg1 queue:(id)arg2 ;
-(void)handleEvent:(id)arg1 fromStream:(id)arg2 ;
@end

