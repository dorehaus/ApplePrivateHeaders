/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSControl.h>

@protocol CNUIColorPaletteDelegate;
@class NSArray, NSScrollView, NSStackView;

@interface CNUIColorPalette : NSControl {

	id<CNUIColorPaletteDelegate> _delegate;
	NSArray* _colors;
	unsigned long long _indexForSelectedColor;
	NSScrollView* _scrollView;
	NSStackView* _stackView;
	NSArray* _colorButtons;
	double _swatchSize;
	double _swatchSpacing;

}

@property (retain) NSScrollView * scrollView;                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (retain) NSStackView * stackView;                                         //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSArray * colorButtons;                                          //@synthesize colorButtons=_colorButtons - In the implementation block
@property (assign) double swatchSize;                                               //@synthesize swatchSize=_swatchSize - In the implementation block
@property (assign) double swatchSpacing;                                            //@synthesize swatchSpacing=_swatchSpacing - In the implementation block
@property (__weak) id<CNUIColorPaletteDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * colors;                                        //@synthesize colors=_colors - In the implementation block
@property (assign,nonatomic) unsigned long long indexForSelectedColor;              //@synthesize indexForSelectedColor=_indexForSelectedColor - In the implementation block
-(id)init;
-(id<CNUIColorPaletteDelegate>)delegate;
-(void)setDelegate:(id<CNUIColorPaletteDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSScrollView *)scrollView;
-(void)setColors:(NSArray *)arg1 ;
-(void)setSwatchSize:(double)arg1 ;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(NSArray *)colors;
-(id)initWithColors:(id)arg1 ;
-(double)swatchSize;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)_commonInitWithSwatchSize:(double)arg1 swatchSpacing:(double)arg2 colors:(id)arg3 ;
-(id)initWithColors:(id)arg1 swatchSize:(double)arg2 swatchSpacing:(double)arg3 ;
-(void)setIndexForSelectedColor:(unsigned long long)arg1 ;
-(void)setSwatchSpacing:(double)arg1 ;
-(double)swatchSpacing;
-(NSArray *)colorButtons;
-(void)selectColor:(id)arg1 ;
-(void)setColorButtons:(NSArray *)arg1 ;
-(unsigned long long)indexForSelectedColor;
@end
