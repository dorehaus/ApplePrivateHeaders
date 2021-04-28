/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRLearningSession.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface CoreIRLearningSessionProvider : CoreIRLearningSession {

	unsigned long long _capturedCommands[128];
	unsigned long long _capturedCount;
	unsigned char _capturedProtocolID;
	unsigned char _capturedProtocolOptions;
	unsigned long long _captureDoneTicks;
	unsigned long long _captureStartTicks;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _captureNoSignalTimer;
	NSObject*<OS_dispatch_source> _captureIdleTimer;
	NSObject*<OS_dispatch_source> _captureDoneTimer;
	int _captureState;
	unsigned long long _currentCommand;
	NSMutableArray* _mappings;

}

@property (nonatomic,readonly) unsigned long long currentCommand;              //@synthesize currentCommand=_currentCommand - In the implementation block
@property (nonatomic,copy) NSMutableArray * mappings;                          //@synthesize mappings=_mappings - In the implementation block
-(void)dealloc;
-(Class)classForCoder;
-(void)cleanup;
-(unsigned long long)currentCommand;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
-(void)updateProgress;
-(void)handleDone;
-(char)addMappingWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2 commandToMap:(unsigned long long)arg3 commands:(unsigned long long*)arg4 commandCount:(unsigned long long)arg5 repeats:(unsigned long long*)arg6 repeatCount:(unsigned long long)arg7 ;
-(char)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
-(void)enumerateMappingUsingBlock:(/*^block*/id)arg1 ;
-(void)_removeMappingForCommand:(unsigned long long)arg1 ;
-(void)processIRCommand:(id)arg1 ;
-(void)disableAllTimers;
-(void)handleNoSignal;
-(void)initTimer:(id*)arg1 withTimeout:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setCaptureState:(int)arg1 ;
-(int)initTimers;
-(void)captureIRCommand:(id)arg1 ;
-(void)waitForIdle;
-(void)handleIdle;
-(id)_newMappingWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2 commandToMap:(unsigned long long)arg3 commands:(unsigned long long*)arg4 commandCount:(unsigned long long)arg5 repeats:(unsigned long long*)arg6 repeatCount:(unsigned long long)arg7 ;
-(unsigned long long)_findDuplicateIRCommand:(id)arg1 forCommand:(unsigned long long)arg2 device:(id*)arg3 ;
-(char)_addMapping:(id)arg1 ;
-(void)processCapturedPattern;
@end

