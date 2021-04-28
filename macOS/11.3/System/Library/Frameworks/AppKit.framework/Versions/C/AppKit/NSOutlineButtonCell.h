/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSOutlineView;

@interface NSOutlineButtonCell : NSButtonCell {

	char _isSourceList;
	char _isGroupRow;
	NSOutlineView* _outlineView;

}

@property (assign,nonatomic) char isSourceList;                        //@synthesize isSourceList=_isSourceList - In the implementation block
@property (assign,nonatomic) char isGroupRow;                          //@synthesize isGroupRow=_isGroupRow - In the implementation block
@property (assign,nonatomic) NSOutlineView * outlineView;              //@synthesize outlineView=_outlineView - In the implementation block
-(void)setState:(long long)arg1 ;
-(id)accessibilityAttributeNames;
-(void)setHighlighted:(char)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(char)isSourceList;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)_textAttributes;
-(id)_interiorBackgroundFillColor;
-(char)_shouldUseStyledTextInView:(id)arg1 ;
-(char)_hasRolloverContentArt;
-(id)_buttonCellAccessibilityRoleAttribute;
-(char)isGroupRow;
-(NSOutlineView *)outlineView;
-(void)_addSourceListAttributes:(id)arg1 emphasizedBackground:(char)arg2 ;
-(void)_addLegacySourceListAttributes:(id)arg1 emphasizedBackground:(char)arg2 ;
-(id)_titleString;
-(void)_updateTitle;
-(void)setIsSourceList:(char)arg1 ;
-(void)setIsGroupRow:(char)arg1 ;
-(void)setOutlineView:(NSOutlineView *)arg1 ;
@end
