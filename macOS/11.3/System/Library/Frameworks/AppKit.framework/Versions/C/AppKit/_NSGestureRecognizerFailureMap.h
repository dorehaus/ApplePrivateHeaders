/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _NSGestureRecognizerFailureMap : NSObject {

	NSMutableArray* _gestureRecognizers;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;

}

@property (readonly) char hasUnmetFailureRequirementsOrDependents; 
+(void)buildFailureMapForGestureRecognizers:(id)arg1 ;
+(void)buildFailureMapForGestureRecognizer:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reloadFailureMap;
-(void)_gestureRecognizerFinished:(id)arg1 ;
-(void)_queueRecognizersForResetIfFinished;
-(char)hasUnmetFailureRequirementsOrDependents;
-(id)initWithRelatedGestures:(id)arg1 ;
-(void)rebuildFailureMap;
-(void)gestureRecognizerDeallocated:(id)arg1 ;
-(void)gestureRecognizerBecameDirty:(id)arg1 ;
-(void)gestureRecognizerFinished:(id)arg1 ;
-(char)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1 ;
@end

