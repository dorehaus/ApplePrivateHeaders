/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTextFieldCell.h>

@protocol NSContentStyle;
@interface NSSegmentItemLabelCell : NSTextFieldCell {

	id<NSContentStyle> _contentStyleOverride;

}

@property (setter=_setContentStyleOverride:,nonatomic,copy) id<NSContentStyle> _contentStyleOverride;              //@synthesize contentStyleOverride=_contentStyleOverride - In the implementation block
+(id)_getParentSegmentedControlViewFromView:(id)arg1 ;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(long long)interiorBackgroundStyle;
-(id)_effectiveContentStyleForTextInView:(id)arg1 ;
-(id)_textAttributes;
-(char)_shouldUseStyledTextInView:(id)arg1 ;
-(int)_vibrancyBlendModeForControlView:(id)arg1 ;
-(id<NSContentStyle>)_contentStyleOverride;
-(void)_setContentStyleOverride:(id)arg1 ;
@end

