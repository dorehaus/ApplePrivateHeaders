/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSTextField.h>

@class NSFont;

@interface SiriUIContentLabel : NSTextField {

	char _willAppearDirectlyOverUltraDarkBackground;
	NSFont* _superScriptFont;

}

@property (assign,nonatomic) char willAppearDirectlyOverUltraDarkBackground;              //@synthesize willAppearDirectlyOverUltraDarkBackground=_willAppearDirectlyOverUltraDarkBackground - In the implementation block
@property (retain) NSFont * superScriptFont;                                              //@synthesize superScriptFont=_superScriptFont - In the implementation block
+(id)label;
+(id)labelWithHeaderFont;
+(id)labelWithLightWeightRegularFont;
+(id)labelWithThinWeightRegularFont;
+(id)labelWithMediumWeightRegularFont;
+(id)labelWithThinWeightSubtextFont;
+(id)labelWithLightWeightSubtextFont;
+(id)labelWithMediumWeightSubtextFont;
+(id)labelWithSubtitleFont;
+(id)labelWithBodyFont;
-(id)initWithCoder:(id)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedStringValue:(id)arg1 ;
-(id)fontSmoothingBackgroundColor;
-(char)shouldSetFontSmoothingBackgroundColor;
-(void)commonInit;
-(void)setWillAppearDirectlyOverUltraDarkBackground:(char)arg1 ;
-(char)willAppearDirectlyOverUltraDarkBackground;
-(NSFont *)superScriptFont;
-(void)setSuperScriptFont:(NSFont *)arg1 ;
@end

