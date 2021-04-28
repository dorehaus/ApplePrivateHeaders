/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSToolbarFlexibleSpaceItem;

@interface _NSToolbarFlexibleSpace : NSView {

	NSToolbarFlexibleSpaceItem* _spaceItem;
	char _inPalette;

}

@property (assign) NSToolbarFlexibleSpaceItem * spaceItem;              //@synthesize spaceItem=_spaceItem - In the implementation block
-(char)allowsVibrancy;
-(void)updateLayer;
-(void)drawRect:(CGRect)arg1 ;
-(Class)_classToCheckForWantsUpdateLayer;
-(char)preservesContentDuringLiveResize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)_drawsNothing;
-(char)inPalette;
-(CFStringRef)_currentCoreUIWidget;
-(char)_shouldDrawFlexibleSpaceOutline;
-(void)_drawToolbarFlexibleSpaceInRect:(CGRect)arg1 ;
-(id)initWithSize:(CGSize)arg1 forSpaceItem:(id)arg2 ;
-(void)setInPalette:(char)arg1 ;
-(NSToolbarFlexibleSpaceItem *)spaceItem;
-(void)setSpaceItem:(NSToolbarFlexibleSpaceItem *)arg1 ;
@end

