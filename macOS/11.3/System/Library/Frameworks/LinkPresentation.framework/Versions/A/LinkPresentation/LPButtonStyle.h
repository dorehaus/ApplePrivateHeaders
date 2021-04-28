/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSColor, NSFont, LPPadding;

@interface LPButtonStyle : NSObject {

	NSColor* _foregroundColor;
	NSColor* _backgroundColor;
	NSFont* _font;
	LPPadding* _padding;
	LPPadding* _margin;

}

@property (nonatomic,retain) NSColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) LPPadding * padding;                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) LPPadding * margin;                     //@synthesize margin=_margin - In the implementation block
+(id)systemPillButtonStyleForPlatform:(long long)arg1 ;
-(id)init;
-(LPPadding *)padding;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(LPPadding *)margin;
-(void)setMargin:(LPPadding *)arg1 ;
-(NSColor *)foregroundColor;
-(void)setForegroundColor:(NSColor *)arg1 ;
-(void)setPadding:(LPPadding *)arg1 ;
@end

