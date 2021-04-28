/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <AppKit/NSTextField.h>

@class TLKRichText, NSTextField, NSFont, TLKMultilineText, TLKFormattedText, NSString, NSAttributedString;

@interface TLKLabel : NSTextField {

	char _supportsColorGlyphs;
	char _adjustsFontSizeToFitWidth;
	char _middleTruncation;
	char _hasCustomTextColor;
	char _attributedTextExplicitelySet;
	char _attributedTextUpdateDisabled;
	char _attributedTextUpdateSkipped;
	unsigned long long _prominence;
	TLKRichText* _richText;
	NSTextField* _overlayLabelForNonColoredGlyphs;
	NSFont* _originalFont;
	unsigned long long _adjustedProminence;

}

@property (nonatomic,retain) NSTextField * overlayLabelForNonColoredGlyphs;              //@synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs - In the implementation block
@property (retain) NSFont * originalFont;                                                //@synthesize originalFont=_originalFont - In the implementation block
@property (assign) char hasCustomTextColor;                                              //@synthesize hasCustomTextColor=_hasCustomTextColor - In the implementation block
@property (assign) char attributedTextExplicitelySet;                                    //@synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet - In the implementation block
@property (assign) char attributedTextUpdateDisabled;                                    //@synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled - In the implementation block
@property (assign) char attributedTextUpdateSkipped;                                     //@synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped - In the implementation block
@property (assign) unsigned long long adjustedProminence;                                //@synthesize adjustedProminence=_adjustedProminence - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                              //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,retain) TLKMultilineText * multilineText; 
@property (nonatomic,retain) TLKRichText * richText;                                     //@synthesize richText=_richText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * formattedText; 
@property (assign,nonatomic) char supportsColorGlyphs;                                   //@synthesize supportsColorGlyphs=_supportsColorGlyphs - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) char adjustsFontSizeToFitWidth;                             //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) char middleTruncation;                                      //@synthesize middleTruncation=_middleTruncation - In the implementation block
+(id)secondaryLabel;
+(id)tertiaryLabel;
+(id)primaryLabel;
+(id)genericLabel;
-(id)init;
-(void)setAlignment:(long long)arg1 ;
-(void)layout;
-(void)setLineBreakMode:(unsigned long long)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setRichText:(TLKRichText *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(TLKRichText *)richText;
-(NSAttributedString *)attributedText;
-(TLKFormattedText *)formattedText;
-(void)setText:(NSString *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(long long)numberOfLines;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(char)adjustsFontSizeToFitWidth;
-(unsigned long long)prominence;
-(void)setSupportsColorGlyphs:(char)arg1 ;
-(void)setFormattedText:(TLKFormattedText *)arg1 ;
-(void)setProminence:(unsigned long long)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setMiddleTruncation:(char)arg1 ;
-(void)setMultilineText:(TLKMultilineText *)arg1 ;
-(void)adjustFontSizeIfNecessaryForSize:(CGSize)arg1 ;
-(NSTextField *)overlayLabelForNonColoredGlyphs;
-(void)setFont:(id)arg1 keepOriginal:(char)arg2 ;
-(void)updateAttributedText;
-(void)updateWithString:(id)arg1 ;
-(void)updateWithAttributedString:(id)arg1 ;
-(unsigned long long)adjustedProminence;
-(void)updateAdjustedProminence;
-(char)hasCustomTextColor;
-(char)attributedTextExplicitelySet;
-(char)hasEmphasizedFormattingInRichText;
-(void)setAdjustedProminence:(unsigned long long)arg1 ;
-(void)setHasCustomTextColor:(char)arg1 ;
-(void)setAttributedTextUpdateDisabled:(char)arg1 ;
-(char)attributedTextUpdateSkipped;
-(void)setAttributedTextUpdateSkipped:(char)arg1 ;
-(char)attributedTextUpdateDisabled;
-(void)updateLineBreakMode;
-(void)setOverlayLabelForNonColoredGlyphs:(NSTextField *)arg1 ;
-(void)setAttributedTextExplicitelySet:(char)arg1 ;
-(char)middleTruncation;
-(NSFont *)originalFont;
-(void)setOriginalFont:(NSFont *)arg1 ;
-(id)fontThatFitsCurrentTextWidthForOriginalFont:(id)arg1 forWidth:(double)arg2 ;
-(id)fontForSize:(double)arg1 ;
-(TLKMultilineText *)multilineText;
-(char)supportsColorGlyphs;
@end

