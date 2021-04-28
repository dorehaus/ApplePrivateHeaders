/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/Versions/A/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <RTTUI/RTTUI-Structs.h>
@class NSObject, NSPointerArray, NSLock, NSIndexPath, RTTUtterance, NSMutableSet, NSMutableArray;

@interface RTTUIConversationControllerCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _utteranceRequestQueue;
	NSPointerArray* _conversationControllers;
	NSLock* _realtimeSendLock;
	NSIndexPath* _inProgressRealTimeIndexPath;
	RTTUtterance* _inProgressRealTimeUtterance;
	CTServerConnectionRef _ctConnection;
	NSMutableSet* _registeredCalls;
	char _processingUtteranceBuffer;
	NSMutableArray* _utteranceBuffer;

}

@property (nonatomic,retain) NSMutableArray * utteranceBuffer;                          //@synthesize utteranceBuffer=_utteranceBuffer - In the implementation block
@property (assign,nonatomic) char processingUtteranceBuffer;                            //@synthesize processingUtteranceBuffer=_processingUtteranceBuffer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * inProgressRealTimeIndexPath;               //@synthesize inProgressRealTimeIndexPath=_inProgressRealTimeIndexPath - In the implementation block
@property (nonatomic,readonly) RTTUtterance * inProgressRealTimeUtterance;              //@synthesize inProgressRealTimeUtterance=_inProgressRealTimeUtterance - In the implementation block
+(id)coordinator;
-(id)init;
-(void)setUtteranceBuffer:(NSMutableArray *)arg1 ;
-(void)setProcessingUtteranceBuffer:(char)arg1 ;
-(NSMutableArray *)utteranceBuffer;
-(void)processUtteranceQueue;
-(char)processingUtteranceBuffer;
-(id)conversationControllers;
-(void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4 ;
-(id)viewControllerForCallUUID:(id)arg1 ;
-(char)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3 ;
-(void)_updateCallActiveStatus:(char)arg1 ;
-(void)addConversationController:(id)arg1 ;
-(void)sendNewUtteranceString:(id)arg1 controller:(id)arg2 ;
-(void)registerForCallUpdates:(id)arg1 ;
-(NSIndexPath *)inProgressRealTimeIndexPath;
-(RTTUtterance *)inProgressRealTimeUtterance;
@end

