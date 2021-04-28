/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class CALayer, NSArray;

@interface _NSFullScreenTileOverlayWindow : NSPanel {

	char _ignoreEvents;
	char _applyBlur;
	char _useLiveTileRect;
	CALayer* _rootLayer;
	NSArray* _tileLayers;
	char _beginningPresentation;
	char _endingPresentation;
	char _presented;
	id _target;
	SEL _action;

}

@property (assign) id target;                         //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                        //@synthesize action=_action - In the implementation block
@property (assign) char applyBlur; 
@property (assign) char useLiveTileRect;              //@synthesize useLiveTileRect=_useLiveTileRect - In the implementation block
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)disableAutomaticTermination;
-(void)enableAutomaticTermination;
-(void)sendEvent:(id)arg1 ;
-(char)_ignoreForFullScreenTransition;
-(void)_setWindowTag;
-(CGRect)constrainFrameRect:(CGRect)arg1 toScreen:(id)arg2 ;
-(void)_updateManagedDisplay;
-(char)useLiveTileRect;
-(void)applyPresentationFiltersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithActiveTileID:(unsigned long long)arg1 coverTileID:(unsigned long long)arg2 coveredWindowTileFrame:(CGRect)arg3 parentSpaceID:(unsigned long long)arg4 ignoreEvents:(char)arg5 screen:(id)arg6 joinTileID:(unsigned long long)arg7 ;
-(void)addAuxiliaryView:(id)arg1 alignedTileID:(unsigned long long)arg2 ;
-(void)beginPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateOverlay;
-(char)applyBlur;
-(void)setApplyBlur:(char)arg1 ;
-(void)setUseLiveTileRect:(char)arg1 ;
@end

