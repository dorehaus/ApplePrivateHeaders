/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSRemoteViewDelegate
@property (readonly) char shouldRetainExportedObject; 
@optional
-(id)exportedObject;
-(id)exportedInterface;
-(char)shouldRetainExportedObject;
-(id)serviceViewControllerInterface;
-(void)viewWillInvalidate:(id)arg1;
-(void)viewDidInvalidate:(id)arg1;
-(void)accessoryWindowOfViewWillUpdateConstraintsIfNeeded:(id)arg1;
-(void)viewDidAdvanceToRunPhase:(id)arg1;
-(id)viewHasServiceViewControllerInterface:(id)arg1;
-(void)view:(id)arg1 encounteredError:(id)arg2;
-(void)viewDidAdvanceToConfigPhase:(id)arg1;
-(void)viewDidRetreatToConfigPhase:(id)arg1;
-(id)view:(id)arg1 willHaveServiceFontSmoothingBackgroundColor:(id)arg2;
-(char)view:(id)arg1 shouldResize:(CGSize)arg2;
-(char)viewShouldDragOldestAncestorWindow:(id)arg1;
-(char)windowOfViewShouldBecomeKey:(id)arg1;
-(char)windowOfViewShouldResignKey:(id)arg1;
-(void)constraintsDidChangeInFrameOfAccessoryWindowOfView:(id)arg1;

@end

