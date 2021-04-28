/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHResizeHandleView : ACSHView {

	long long _resizeType;

}

@property (nonatomic,readonly) long long resizeType;              //@synthesize resizeType=_resizeType - In the implementation block
+(void)initialize;
+(double)handleSize;
-(char)isFlipped;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(int)_cursor;
-(void)updateTrackingAreas;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)initWithSuperFrame:(CGRect)arg1 resizeType:(long long)arg2 ;
-(long long)resizeType;
@end
