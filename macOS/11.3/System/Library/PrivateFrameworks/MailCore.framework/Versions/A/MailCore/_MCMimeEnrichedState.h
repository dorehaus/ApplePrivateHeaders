/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSColor;

@interface _MCMimeEnrichedState : NSObject {

	unsigned char _excerptLevel;
	char _bold;
	char _italic;
	char _fixed;
	char _underline;
	short _fontDelta;
	long long _alignment;
	NSString* _fontFamily;
	NSColor* _color;

}

@property (assign,nonatomic) unsigned char excerptLevel;              //@synthesize excerptLevel=_excerptLevel - In the implementation block
@property (assign,nonatomic) long long alignment;                     //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) char bold;                               //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) char italic;                             //@synthesize italic=_italic - In the implementation block
@property (assign,nonatomic) char fixed;                              //@synthesize fixed=_fixed - In the implementation block
@property (assign,nonatomic) char underline;                          //@synthesize underline=_underline - In the implementation block
@property (assign,nonatomic) short fontDelta;                         //@synthesize fontDelta=_fontDelta - In the implementation block
@property (nonatomic,copy) NSString * fontFamily;                     //@synthesize fontFamily=_fontFamily - In the implementation block
@property (nonatomic,retain) NSColor * color;                         //@synthesize color=_color - In the implementation block
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(NSString *)fontFamily;
-(void)setFontFamily:(NSString *)arg1 ;
-(char)bold;
-(char)italic;
-(char)underline;
-(void)setBold:(char)arg1 ;
-(void)setItalic:(char)arg1 ;
-(void)setUnderline:(char)arg1 ;
-(unsigned char)excerptLevel;
-(void)setExcerptLevel:(unsigned char)arg1 ;
-(char)fixed;
-(void)setFixed:(char)arg1 ;
-(short)fontDelta;
-(void)setFontDelta:(short)arg1 ;
@end
