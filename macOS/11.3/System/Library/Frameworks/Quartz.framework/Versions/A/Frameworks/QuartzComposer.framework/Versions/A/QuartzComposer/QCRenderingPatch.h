/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@protocol QCInteractionPatch;
@class QCInteractionPort, QCArray;

@interface QCRenderingPatch : QCPatch {

	QCInteractionPort* _inputInteraction;
	QCArray* _dod;
	QCArray* _previousDod;
	QCArray* _dodNeedsUpdate;
	id<QCInteractionPatch> _savedInteractionPatch;

}

@property (readonly) QCDodRef dod; 
@property (assign) CGPoint position; 
@property (assign) double rotation; 
@property (assign) double scaleX; 
@property (assign) double scaleY; 
@property (readonly) double depth; 
@property (readonly) double renderingDepth; 
+(char)allowsInteraction;
-(void)finalize;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(double)depth;
-(id)nodeActorForView:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)_renderAtTime:(double)arg1 arguments:(id)arg2 ;
-(char)__execute:(double)arg1 arguments:(id)arg2 ;
-(void)_invalidateDod;
-(char)allowsScissors:(id)arg1 ;
-(QCDodRef)dod;
-(QCDodRef)createDodForContext:(id)arg1 ;
-(char)automaticStateSet:(id)arg1 ;
-(double)renderingDepth;
-(void)finalize_QCRenderingPatch;
@end
