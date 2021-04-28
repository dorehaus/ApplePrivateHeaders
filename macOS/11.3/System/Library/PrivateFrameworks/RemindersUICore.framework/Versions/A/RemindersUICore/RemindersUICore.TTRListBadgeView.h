/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/Versions/A/RemindersUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <AppKit/NSView.h>

@interface RemindersUICore.TTRListBadgeView : NSView {

	 listColor;
	 emoji;
	 emojiFontSize;
	 imageColor;
	 selected;
	 useEmojiColors;
	 shadowParams;
	 selectionBorderSpacing;
	 tintColor;
	 backgroundView;
	 selectedLayer;
	 shadowLayer;
	 imageView;
	 emojiView;
	 nonEmojiBackgroundViewGradientSettings;
	 emojiBackgroundViewGradientSettings;
	 ttrAccessibilityName;
	 ttrAccessibilityShouldIgnoreAccessibilityName;
	 ttrAccessibilityShouldIgnoreTintColorValue;

}

@property (readonly,nonatomic) char wantsUpdateLayer; 
@property (readonly,nonatomic) char flipped; 
@property (readonly,nonatomic) char wantsDefaultClipping; 
@property (assign,nonatomic) char ttrAccessibilityShouldIgnoreAccessibilityName; 
@property (assign,nonatomic) char ttrAccessibilityShouldIgnoreTintColorValue; 
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)wantsDefaultClipping;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
-(char)ttrAccessibilityShouldIgnoreAccessibilityName;
-(void)setTtrAccessibilityShouldIgnoreAccessibilityName:(char)arg1 ;
-(char)ttrAccessibilityShouldIgnoreTintColorValue;
-(void)setTtrAccessibilityShouldIgnoreTintColorValue:(char)arg1 ;
@end
