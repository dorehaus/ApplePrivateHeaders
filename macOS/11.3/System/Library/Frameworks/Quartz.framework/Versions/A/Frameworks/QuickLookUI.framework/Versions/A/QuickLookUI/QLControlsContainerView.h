/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class QLControlsController, NSMutableArray;

@interface QLControlsContainerView : NSView {

	QLControlsController* _controlsController;
	NSMutableArray* _containerViewConstraints;

}

@property (__weak) QLControlsController * controlsController;              //@synthesize controlsController=_controlsController - In the implementation block
@property (retain) NSMutableArray * containerViewConstraints;              //@synthesize containerViewConstraints=_containerViewConstraints - In the implementation block
-(void)setControlsController:(QLControlsController *)arg1 ;
-(QLControlsController *)controlsController;
-(void)setContainerViewConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)containerViewConstraints;
-(void)_updateGlassyButtonStyleConstraints;
-(void)_updateNormalButtonStyleConstraints;
-(void)dealloc;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
@end

