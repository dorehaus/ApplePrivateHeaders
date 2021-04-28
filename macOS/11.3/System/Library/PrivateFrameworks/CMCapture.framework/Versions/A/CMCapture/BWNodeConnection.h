/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSMutableArray, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;
	char _stillImagePipelineStageInputHandlesMessages;
	os_unfair_lock_s _suspensionLock;
	char _suspended;
	char _resuming;
	char _wantsMessageCachingWhileSuspended;
	char _messageCachingEnabled;
	char _resumedForEventsOnly;
	NSMutableArray* _messagesToPropagate;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (assign,nonatomic) char wantsMessageCachingWhileSuspended;              //@synthesize wantsMessageCachingWhileSuspended=_wantsMessageCachingWhileSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 firstOptionalPassthroughInputOut:(id*)arg3 firstOptionalPassthroughInputAttachedMediaKeyOut:(id*)arg4 ;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)dealloc;
-(char)detach;
-(BWNodeInput *)input;
-(char)attach;
-(id)_inputDescription;
-(id)_outputDescription;
-(BWNodeOutput *)output;
-(void)setWantsMessageCachingWhileSuspended:(char)arg1 ;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(void)resumeForEventsOnly:(char)arg1 ;
-(char)resolveCommonBufferFormat;
-(BWPipelineStage *)pipelineStage;
-(void)suspendWithMessageCachingAllowed:(char)arg1 ;
-(char)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1 ;
-(id)_connectionDescription;
-(char)wantsMessageCachingWhileSuspended;
@end

