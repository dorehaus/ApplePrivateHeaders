/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <AppKit/NSTableCellView.h>
#import <libobjc.A.dylib/TLKCustomEdgeInsets.h>

@class NSView;

@interface TLKTableCellView : NSTableCellView <TLKCustomEdgeInsets> {

	NSView* _contentView;
	NSEdgeInsets _customEdgeInsets;

}

@property (nonatomic,retain) NSView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) NSEdgeInsets customEdgeInsets;              //@synthesize customEdgeInsets=_customEdgeInsets - In the implementation block
+(double)separatorHeightForWindow:(id)arg1 ;
-(void)layout;
-(void)setFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(id)accessibilityRole;
-(char)isAccessibilityElement;
-(void)setContentView:(NSView *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)setCustomEdgeInsets:(NSEdgeInsets)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(NSEdgeInsets)customEdgeInsets;
@end

