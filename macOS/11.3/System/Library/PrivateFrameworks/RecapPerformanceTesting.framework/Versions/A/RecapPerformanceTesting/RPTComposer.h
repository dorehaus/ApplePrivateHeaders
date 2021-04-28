/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RPTInteractionOptions;


@protocol RPTComposer <NSObject,RCPEventStreamComposer,RPTPointerAndFingerInteroppingComposer>
@property (nonatomic,readonly) RPTInteractionOptions * interactionOptions; 
@required
+(id)composerWrapping:(id)arg1 withInteractionOptions:(id)arg2;
-(RPTInteractionOptions *)interactionOptions;
-(void)pointerSetAbsolutePosition:(CGPoint)arg1;
-(void)pointerMoveToPoint:(CGPoint)arg1 duration:(double)arg2;
-(void)overrideInteractionOptions:(id)arg1 withEventActionsBlock:(/*^block*/id)arg2;

@end

