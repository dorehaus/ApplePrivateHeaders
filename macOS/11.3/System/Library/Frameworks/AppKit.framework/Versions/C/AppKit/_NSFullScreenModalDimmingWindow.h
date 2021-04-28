/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class _NSFullScreenModalStackController, CALayer;

@interface _NSFullScreenModalDimmingWindow : NSPanel {

	_NSFullScreenModalStackController* _stackController;
	CALayer* _rootLayer;
	CALayer* _dimLayer;
	CALayer* _windowSnapshotLayer;
	char _isShowingDimmingLayer;

}

@property (assign) id<_NSFullScreenModalDimmingWindowDelegate> delegate; 
-(void)dealloc;
-(id<_NSFullScreenModalDimmingWindowDelegate>)delegate;
-(void)setDelegate:(id<_NSFullScreenModalDimmingWindowDelegate>)arg1 ;
-(void)_createDimLayerIfNeeded;
-(id)initWithStackController:(id)arg1 ;
-(char)_shouldSnapWindowsClientSide;
-(char)_allowsSnapping;
-(char)_canBeSnappingTarget;
-(char)_allowsExteriorResizing;
-(char)isMovable;
-(char)_canMiniaturize;
-(char)canBecomeKeyWindow;
-(char)canBecomeMainWindow;
-(char)_ignoreForFullScreenTransition;
-(void)_setWindowTag;
-(void)beginPresentationWithIncomingWindowSnapshot:(id)arg1 targetFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)endPresentationWithIncomingWindowSnapshot:(id)arg1 startingFrame:(CGRect)arg2 forSendDocument:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)moveToSpace;
@end
