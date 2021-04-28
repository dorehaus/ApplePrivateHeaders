/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCGSWindowOrderingState <NSObject>
@optional
-(void)applyOperations:(id)arg1;

@required
-(void)orderApplicationWindowsFront;
-(void)addWindow:(id)arg1 toOrderingGroupAboveWindow:(id)arg2;
-(void)setLevel:(int)arg1 forWindow:(id)arg2;
-(void)setDesiredSpace:(unsigned long long)arg1 forWindow:(id)arg2;
-(void)disassociateFromSpacesIfOrderedOut:(id)arg1;
-(void)reassociateWithSpacesByGeometry:(id)arg1;
-(void)lockWindow:(id)arg1 toAbsoluteSublevel:(int)arg2;
-(void)unlockWindowSublevel:(id)arg1;
-(void)addWindow:(id)arg1 toOrderingGroupBelowWindow:(id)arg2;
-(void)removeWindowFromOrderingGroup:(id)arg1;
-(void)clearOrderingGroup:(id)arg1;
-(void)orderWindow:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
-(void)orderGroup:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
-(void)conditionallyOrderGroupFront:(id)arg1 withTimestamp:(double)arg2;

@end
