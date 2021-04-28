/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBThrottleBestEffortNetworkingManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue;
@class NSObject, RBProcessIndex, RBProcessMap, NSString;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _queue;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	char _throttleBestEffortNetworking;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)didUpdateProcessStates:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(char)isThrottleBestEffortNetworkingEnabled;
-(NSString *)debugDescription;
-(id)init;
-(id)captureState;
-(void)addProcess:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
@end

