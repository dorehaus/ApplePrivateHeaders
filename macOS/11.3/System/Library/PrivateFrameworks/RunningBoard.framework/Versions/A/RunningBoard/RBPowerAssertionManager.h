/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBPowerAssertionManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, RBPowerAssertionManagerDelegate;
@class NSString, RBProcessMap, RBSystemPowerAssertion, NSObject;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing> {

	RBProcessMap* _stateMap;
	RBProcessMap* _assertionMap;
	RBSystemPowerAssertion* _systemAssertion;
	unsigned long long _assertionCount;
	NSObject*<OS_dispatch_queue> _queue;
	id<RBPowerAssertionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RBPowerAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(void)applySystemState:(id)arg1 ;
-(char)_unitTest_hasSystemPowerAssertion;
-(char)_unitTest_hasPowerAssertionForProcess:(id)arg1 ;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)init;
-(id<RBPowerAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<RBPowerAssertionManagerDelegate>)arg1 ;
-(id)captureState;
-(void)addProcess:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
@end

