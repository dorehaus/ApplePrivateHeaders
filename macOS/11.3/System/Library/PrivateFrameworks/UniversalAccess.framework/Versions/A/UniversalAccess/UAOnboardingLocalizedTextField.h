/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/UniversalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccess/UniversalAccess-Structs.h>
#import <AppKit/NSTextField.h>

@class NSString, NSColor;

@interface UAOnboardingLocalizedTextField : NSTextField {

	NSString* _text;
	NSColor* _color;
	long long _fontSize;
	CGPoint _origin;

}

@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint origin;                  //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSColor * color;                 //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long fontSize;              //@synthesize fontSize=_fontSize - In the implementation block
-(id)init;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(NSString *)text;
-(long long)fontSize;
-(void)setFontSize:(long long)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 origin:(CGPoint)arg2 color:(id)arg3 fontSize:(long long)arg4 ;
-(void)setTextMaxWidth:(double)arg1 lineBreakMode:(unsigned long long)arg2 ;
@end

