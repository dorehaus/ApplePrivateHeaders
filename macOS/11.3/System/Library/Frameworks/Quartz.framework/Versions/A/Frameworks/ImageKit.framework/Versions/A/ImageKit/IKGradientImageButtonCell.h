/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSShadow;

@interface IKGradientImageButtonCell : NSButtonCell {

	NSShadow* _imageShadow;
	int _gradientStyle;
	int _borderSides;
	int _highlightSides;
	char _showsState;
	char _suppressLeftBorderForTabStyles;
	char _enableGradientStylBorderSuppression;
	char _useButtonImageCenteringHack;
	char _usedAsRadioButton;
	char _drawBackground;

}

@property (assign,nonatomic) int gradientStyle;                           //@synthesize gradientStyle=_gradientStyle - In the implementation block
@property (assign) int borderSides;                                       //@synthesize borderSides=_borderSides - In the implementation block
@property (assign) int highlightSides;                                    //@synthesize highlightSides=_highlightSides - In the implementation block
@property (copy) NSShadow * imageShadow;                                  //@synthesize imageShadow=_imageShadow - In the implementation block
@property (assign,nonatomic) char showsState;                             //@synthesize showsState=_showsState - In the implementation block
@property (assign) char suppressLeftBorderForTabStyles;                   //@synthesize suppressLeftBorderForTabStyles=_suppressLeftBorderForTabStyles - In the implementation block
@property (assign) char enableGradientStylBorderSuppression;              //@synthesize enableGradientStylBorderSuppression=_enableGradientStylBorderSuppression - In the implementation block
@property (assign) char useButtonImageCenteringHack;                      //@synthesize useButtonImageCenteringHack=_useButtonImageCenteringHack - In the implementation block
@property (assign) char usedAsRadioButton;                                //@synthesize usedAsRadioButton=_usedAsRadioButton - In the implementation block
@property (assign) char drawBackground;                                   //@synthesize drawBackground=_drawBackground - In the implementation block
-(char)showsState;
-(void)setShowsState:(char)arg1 ;
-(int)borderSides;
-(void)setBorderSides:(int)arg1 ;
-(int)highlightSides;
-(void)setHighlightSides:(int)arg1 ;
-(void)_setGradientStyle:(int)arg1 ;
-(void)setSuppressLeftBorderForTabStyles:(char)arg1 ;
-(void)IK_commonInitWithGradientStyle:(int)arg1 borderSides:(int)arg2 ;
-(NSShadow *)imageShadow;
-(char)suppressLeftBorderForTabStyles;
-(id)initWithGradientStyle:(int)arg1 borderSides:(int)arg2 ;
-(void)setImageShadow:(NSShadow *)arg1 ;
-(char)enableGradientStylBorderSuppression;
-(void)setEnableGradientStylBorderSuppression:(char)arg1 ;
-(char)useButtonImageCenteringHack;
-(void)setUseButtonImageCenteringHack:(char)arg1 ;
-(char)usedAsRadioButton;
-(void)setUsedAsRadioButton:(char)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)initImageCell:(id)arg1 ;
-(void)drawImage:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(int)gradientStyle;
-(char)drawBackground;
-(void)setDrawBackground:(char)arg1 ;
-(void)setGradientStyle:(int)arg1 ;
@end

