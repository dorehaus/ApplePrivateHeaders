/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <AssistiveControlSupport/ACSHPanelElementView.h>

@class ACSHHoverTextView, NSFont, ACSHPanelHoverTextGroup, NSColor;

@interface ACSHPanelHoverTextView : ACSHPanelElementView {

	ACSHHoverTextView* __textView;

}

@property (nonatomic,retain) ACSHHoverTextView * _textView;                            //@synthesize _textView=__textView - In the implementation block
@property (nonatomic,readonly) NSFont * _scaledFont; 
@property (nonatomic,readonly) ACSHPanelHoverTextGroup * _hoverTextGroup; 
@property (nonatomic,readonly) NSColor * _textColor; 
+(id)_createLayoutManager;
+(CGSize)_textContainerInsetForBounds:(CGRect)arg1 scaledFontSize:(double)arg2 ;
+(double)defaultUnscaledFontSize;
+(double)desiredHeightForScaledFontSize:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateLayer;
-(NSColor *)_textColor;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(ACSHHoverTextView *)_textView;
-(NSFont *)_scaledFont;
-(void)initView;
-(void)setPanelElement:(id)arg1 animated:(char)arg2 ;
-(void)_updateLayoutForTextView:(id)arg1 scaledFont:(id)arg2 ;
-(id)_createTextViewWithScaledFontSize:(double)arg1 ;
-(void)set_textView:(ACSHHoverTextView *)arg1 ;
-(void)_fontSizeUpdated;
-(void)_colorsUpdated;
-(void)_updateTextViewLayout;
-(void)_modelUpdated;
-(ACSHPanelHoverTextGroup *)_hoverTextGroup;
@end
