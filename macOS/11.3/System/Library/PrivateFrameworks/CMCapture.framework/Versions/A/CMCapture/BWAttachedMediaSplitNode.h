/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {

	NSArray* _attachedMediaKeys;
	NSMutableDictionary* _attachedMediaFormatDescriptions;
	NSArray* _attachedMediaToPropagateToPrimaryOutput;
	NSMutableSet* _disabledAttachedMediaKeys;
	int _numOutputs;
	char _emitsNodeErrorsForMissingAttachedMedia;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 attachedMediaToPropagateToPrimaryOutput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 ;
-(void)setOutputRenderingEnabled:(char)arg1 forAttachedMediaKey:(id)arg2 ;
-(char)isOutputRenderingEnabledForAttachedMediaKey:(id)arg1 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(char)arg1 ;
-(char)emitsNodeErrorsForMissingAttachedMedia;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
@end

