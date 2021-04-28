/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalUILayerBackedView.h>

@class NSImageView, CalUIAXTextField, CalUILayerBackedView, NSColor, NSDictionary, NSLayoutConstraint;

@interface CalUIBoxOccurrenceTravelTimeView : CalUILayerBackedView {

	char _isWalking;
	char _isTransit;
	NSImageView* _icon;
	CalUIAXTextField* _text;
	CalUILayerBackedView* _divider;
	NSColor* _fontSmoothingColor;
	NSDictionary* _attributes;
	NSLayoutConstraint* _iconTextAlignmentConstraint;
	NSLayoutConstraint* _iconWidthConstraint;
	CalUILayerBackedView* _colorBar;

}

@property (retain) NSImageView * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (retain) CalUIAXTextField * text;                                       //@synthesize text=_text - In the implementation block
@property (retain) CalUILayerBackedView * divider;                                //@synthesize divider=_divider - In the implementation block
@property (retain) NSColor * fontSmoothingColor;                                  //@synthesize fontSmoothingColor=_fontSmoothingColor - In the implementation block
@property (retain) NSDictionary * attributes;                                     //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSLayoutConstraint * iconTextAlignmentConstraint;              //@synthesize iconTextAlignmentConstraint=_iconTextAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * iconWidthConstraint;                      //@synthesize iconWidthConstraint=_iconWidthConstraint - In the implementation block
@property (retain) CalUILayerBackedView * colorBar;                               //@synthesize colorBar=_colorBar - In the implementation block
@property (assign) char isWalking;                                                //@synthesize isWalking=_isWalking - In the implementation block
@property (assign) char isTransit;                                                //@synthesize isTransit=_isTransit - In the implementation block
-(id)init;
-(void)layout;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setIcon:(NSImageView *)arg1 ;
-(NSImageView *)icon;
-(CalUIAXTextField *)text;
-(char)isTransit;
-(void)setTravelDuration:(double)arg1 ;
-(void)setText:(CalUIAXTextField *)arg1 ;
-(char)isWalking;
-(void)updateText;
-(void)setStringAttributes:(id)arg1 ;
-(void)setTravelType:(id)arg1 ;
-(void)setDividerColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 ;
-(void)setColorBar:(CalUILayerBackedView *)arg1 ;
-(id)_imageForRouteType:(id)arg1 ;
-(void)setDivider:(CalUILayerBackedView *)arg1 ;
-(CalUILayerBackedView *)divider;
-(CalUILayerBackedView *)colorBar;
-(void)setIconTextAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconTextAlignmentConstraint;
-(void)setIconWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconWidthConstraint;
-(void)setIsWalking:(char)arg1 ;
-(void)setIsTransit:(char)arg1 ;
-(NSColor *)fontSmoothingColor;
-(void)setFontSmoothingColor:(NSColor *)arg1 ;
@end

