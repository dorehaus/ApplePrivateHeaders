/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>

@class NSColor, NSAppearance, NSString;

@interface NSColorPanelFavoriteSwatchView : NSView <NSCollectionViewElement> {

	NSColor* _color;
	NSAppearance* _appearanceForRenderingColor;

}

@property (copy) NSColor * color;                                           //@synthesize color=_color - In the implementation block
@property (retain) NSAppearance * appearanceForRenderingColor;              //@synthesize appearanceForRenderingColor=_appearanceForRenderingColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
+(CGSize)intrinsicContentSize;
+(id)keyPathsForValuesInvalidatingDisplay;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)needsPanelToBecomeKey;
-(void)drawFocusRingMask;
-(NSAppearance *)appearanceForRenderingColor;
-(void)setAppearanceForRenderingColor:(NSAppearance *)arg1 ;
-(CGRect)focusRingMaskBounds;
@end
