/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSColor, NSNumber;

@interface LPCaptionPresentationProperties : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSColor* _color;
	double _textScale;
	NSNumber* _maximumNumberOfLines;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double textScale;                               //@synthesize textScale=_textScale - In the implementation block
@property (nonatomic,retain) NSNumber * maximumNumberOfLines;                //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
-(id)init;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(NSNumber *)maximumNumberOfLines;
-(NSString *)text;
-(void)setMaximumNumberOfLines:(NSNumber *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setText:(NSString *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(double)textScale;
-(void)setTextScale:(double)arg1 ;
@end
