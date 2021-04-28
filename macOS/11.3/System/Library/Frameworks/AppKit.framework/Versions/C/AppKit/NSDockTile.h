/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSString;

@interface NSDockTile : NSObject {

	id _owner;
	void* _dockContextRef;
	NSView* _contentView;
	NSView* _frameView;
	NSView* _backstopView;
	NSString* _badgeLabel;
	SCD_Struct_NS36 _dFlags;
	CGSize _dockTileSize;
	id _miniViewController;

}

@property (retain) NSView * miniView; 
@property (readonly) CGSize size; 
@property (retain) NSView * contentView; 
@property (assign) char showsApplicationBadge; 
@property (copy) NSString * badgeLabel; 
@property (__weak,readonly) id owner; 
-(CGSize)size;
-(void)dealloc;
-(id)owner;
-(id)initWithOwner:(id)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)display;
-(void)_dockIsAlive:(char)arg1 ;
-(id)_backstopView;
-(char)showsApplicationBadge;
-(void)_updateDockWindowIDAndDisplayIfNeeded:(char)arg1 ;
-(void)invalidateOwner;
-(void)_setMiniViewShown:(char)arg1 ;
-(char)_hasCustomContent;
-(void)_registerForDockScaleChangeNotification;
-(void)_dockTileScaleFactorChanged:(id)arg1 ;
-(void)_releaseDockContext;
-(void)_unregisterForDockScaleChangeNotification;
-(char)_getDockContext:(CGContext*)arg1 andSize:(CGSize*)arg2 ;
-(void)_createFrameViewIfNeeded;
-(char)_releaseContextIfEmpty;
-(void)_reenableAppNap:(id)arg1 ;
-(void)_temporarilyDisableAppNap;
-(id)_tileImage;
-(void)_setMiniView:(long long)arg1 contextid:(unsigned)arg2 ;
-(CGSize)_getSizeFromDock;
-(void)setShowsApplicationBadge:(char)arg1 ;
-(void)setBadgeLabel:(NSString *)arg1 ;
-(NSString *)badgeLabel;
-(void)frameChanged:(id)arg1 ;
-(void)_miniViewResized;
-(NSView *)miniView;
-(void)setMiniView:(NSView *)arg1 ;
-(void)_setMiniViewWindowLevel:(long long)arg1 ;
@end

