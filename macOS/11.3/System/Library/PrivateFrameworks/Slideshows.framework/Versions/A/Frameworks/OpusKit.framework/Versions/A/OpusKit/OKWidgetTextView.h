/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetTextViewProxy.h>
#import <libobjc.A.dylib/NSTextViewDelegate.h>

@class NSScrollView, OKWidgetTextViewNSTextView, NSAttributedString, NSString, NSColor;

@interface OKWidgetTextView : OKWidgetTextViewProxy <NSTextViewDelegate> {

	NSScrollView* _scrollView;
	OKWidgetTextViewNSTextView* _textView;
	char _scrollEnabled;
	char _highlighted;
	char _usingAttributedText;
	NSAttributedString* _originalText;
	CGRect _settingBounds;
	CGRect _settingFrame;
	double _highlightBorderWidth;
	char _isUppercase;
	char _isEditable;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _fontName;
	double _fontSize;
	NSColor* _textColor;
	NSColor* _textBackgroundColor;
	long long _alignment;
	long long _textGravity;
	long long _textVerticalAlignment;
	double _strokeWidth;
	NSColor* _strokeColor;

}

@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,retain) NSColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) NSColor * strokeColor;                            //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) NSColor * textBackgroundColor;                    //@synthesize textBackgroundColor=_textBackgroundColor - In the implementation block
@property (assign,nonatomic) long long alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) char isUppercase;                                 //@synthesize isUppercase=_isUppercase - In the implementation block
@property (assign,nonatomic) char isEditable;                                  //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) long long textVerticalAlignment;                  //@synthesize textVerticalAlignment=_textVerticalAlignment - In the implementation block
@property (assign,nonatomic) long long textGravity;                            //@synthesize textGravity=_textGravity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(void)setHighlighted:(char)arg1 ;
-(NSColor *)textColor;
-(char)isEditable;
-(NSString *)fontName;
-(void)setTextColor:(NSColor *)arg1 ;
-(double)strokeWidth;
-(NSColor *)strokeColor;
-(void)setStrokeColor:(NSColor *)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(NSColor *)textBackgroundColor;
-(NSString *)text;
-(char)textShouldBeginEditing:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)textViewDidChangeTypingAttributes:(id)arg1 ;
-(NSAttributedString *)attributedText;
-(void)_layoutViews;
-(double)fontSize;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setIsEditable:(char)arg1 ;
-(void)layoutSubviews;
-(char)isUppercase;
-(id)initWithWidget:(id)arg1 ;
-(id)layoutSettingsKeys;
-(CGRect)textViewFrame;
-(void)setSettingFrame:(CGRect)arg1 ;
-(void)setSettingBorderWidth:(double)arg1 ;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(float)settingFontSize;
-(void)setSettingFontSize:(float)arg1 ;
-(id)settingTextColor;
-(void)setSettingTextColor:(id)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(CGRect)_boundingRectOfText:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_updateSettingsFromAttributes:(id)arg1 andText:(id)arg2 ;
-(void)_applyTextSettings;
-(void)setTextBackgroundColor:(NSColor *)arg1 ;
-(void)_setupScrolledViews;
-(id)_composeColor:(id)arg1 withDestinationColor:(id)arg2 ;
-(id)settingTextBackgroundColor;
-(id)settingAttributedText;
-(void)setSettingAttributedText:(id)arg1 ;
-(char)settingUppercase;
-(void)setSettingUppercase:(char)arg1 ;
-(double)settingStrokeWidth;
-(void)setSettingStrokeWidth:(float)arg1 ;
-(id)settingStrokeColor;
-(void)setSettingStrokeColor:(id)arg1 ;
-(long long)settingTextVerticalAlignment;
-(void)setSettingTextVerticalAlignment:(long long)arg1 ;
-(char)settingEditable;
-(void)setSettingEditable:(char)arg1 ;
-(char)settingScrollEnabled;
-(void)setSettingScrollEnabled:(char)arg1 ;
-(void)setIsUppercase:(char)arg1 ;
-(long long)textGravity;
-(void)setTextGravity:(long long)arg1 ;
-(long long)textVerticalAlignment;
-(void)setTextVerticalAlignment:(long long)arg1 ;
@end

