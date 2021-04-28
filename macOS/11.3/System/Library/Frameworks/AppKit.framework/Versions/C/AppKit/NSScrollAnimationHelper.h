/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAnimationHelper.h>

@interface NSScrollAnimationHelper : NSAnimationHelper {

	id _delegate;
	CGPoint _startPoint;
	CGPoint _endPoint;
	CGPoint _totalDelta;
	/*^block*/id _completionHandler;
	struct {
		unsigned logPerformanceAnalysis : 1;
		unsigned logPerformanceAnalysisInProgress : 1;
		unsigned isScrollDueToUserAction : 1;
		unsigned delegateRespondsTo_setIsScrollDueToUserAction;
		unsigned RESERVED : 28;
	}  _sahFlags;

}

@property (copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(void)_doFinalAnimationStep;
-(void)_doAnimationStepWithProgress:(double)arg1 ;
-(void)_doAnimationStep;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLogPerformanceAnalysis:(char)arg1 ;
-(void)setIsScrollDueToUserAction:(char)arg1 ;
-(CGPoint)targetOrigin;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)changeDestinationToPoint:(CGPoint)arg1 ;
-(CGPoint)_currentPoint;
@end
