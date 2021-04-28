/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSTextField, NSImageView, NSLayoutConstraint;

@interface LUIBatteryView : NSView {

	NSTextField* _batteryTextField;
	NSImageView* _batteryImageView;
	NSLayoutConstraint* _imageToTextConstraint;

}
-(id)batteryTextField;
-(void)setBatteryTextField:(id)arg1 ;
-(void)_updateImageToTextConstraint;
-(double)firstBaselineOffsetFromTop;
-(double)baselineOffsetFromBottom;
-(double)lastBaselineOffsetFromBottom;
-(id)batteryImageView;
-(void)setBatteryImageView:(id)arg1 ;
@end

