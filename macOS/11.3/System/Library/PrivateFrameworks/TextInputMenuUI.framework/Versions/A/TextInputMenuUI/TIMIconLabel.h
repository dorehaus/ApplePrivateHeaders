/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSColor;

@interface TIMIconLabel : NSObject {

	NSString* _text;
	NSString* _language;
	NSColor* _color;
	NSString* _fontFamilyName;
	double _fontWeight;

}

@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                    //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSColor * color;                        //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontFamilyName;              //@synthesize fontFamilyName=_fontFamilyName - In the implementation block
@property (nonatomic,readonly) double fontWeight;                           //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,readonly) char isASCII; 
+(id)iconLabelWithText:(id)arg1 language:(id)arg2 color:(id)arg3 ;
+(id)iconLabelWithText:(id)arg1 language:(id)arg2 color:(id)arg3 fontFamilyName:(id)arg4 fontWeight:(double)arg5 ;
+(id)iconLabelWithText:(id)arg1 language:(id)arg2 ;
-(id)iconLabelWithColor:(id)arg1 ;
-(id)initWithText:(id)arg1 language:(id)arg2 color:(id)arg3 fontFamilyName:(id)arg4 fontWeight:(double)arg5 ;
-(NSString *)fontFamilyName;
-(char)isASCII;
-(id)iconLabelWithFontWeight:(double)arg1 ;
-(void)dealloc;
-(NSString *)language;
-(NSColor *)color;
-(NSString *)text;
-(double)fontWeight;
@end

