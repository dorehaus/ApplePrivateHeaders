/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVTextView.h>

@interface AXVBrailleTextView : AXVTextView {

	long long _textViewType;
	double _baseFontSize;

}

@property (assign,nonatomic) long long textViewType;              //@synthesize textViewType=_textViewType - In the implementation block
@property (assign,nonatomic) double baseFontSize;                 //@synthesize baseFontSize=_baseFontSize - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateFont;
-(double)baseFontSize;
-(void)setBaseFontSize:(double)arg1 ;
-(long long)textViewType;
-(void)setTextViewType:(long long)arg1 ;
@end

