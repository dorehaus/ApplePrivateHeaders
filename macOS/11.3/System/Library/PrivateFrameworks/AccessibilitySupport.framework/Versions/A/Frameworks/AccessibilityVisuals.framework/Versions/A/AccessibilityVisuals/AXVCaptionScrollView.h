/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AppKit/NSScrollView.h>

@class AXVCaptionTextView;

@interface AXVCaptionScrollView : NSScrollView {

	AXVCaptionTextView* __captionTextView;

}

@property (setter=_setCaptionTextView:,nonatomic,retain) AXVCaptionTextView * _captionTextView;              //@synthesize _captionTextView=__captionTextView - In the implementation block
+(Class)_verticalScrollerClass;
+(Class)_horizontalScrollerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(AXVCaptionTextView *)_captionTextView;
-(void)_setCaptionTextView:(id)arg1 ;
@end
