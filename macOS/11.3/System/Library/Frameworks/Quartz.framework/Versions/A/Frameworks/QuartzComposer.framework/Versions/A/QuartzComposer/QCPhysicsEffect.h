/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCBooleanPort, NSMutableArray, QCArray;

@interface QCPhysicsEffect : QCPatch {

	QCBooleanPort* inputSampling;
	NSMutableArray* _inputValues;
	NSMutableArray* _outputValues;
	QCArray* _times;
	QCArray* _value;
	QCArray* _savedOutputValues;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
+(id)stateArrays;
-(void)dealloc;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(unsigned long long)numberOfInputs;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setNumberOfInputs:(unsigned long long)arg1 ;
@end
