/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>

@class NSButton;

@interface EKUILabeledCheckboxGadget : EKUILabeledGadget {

	NSButton* _checkbox;

}

@property (retain) NSButton * checkbox;              //@synthesize checkbox=_checkbox - In the implementation block
-(double)baselineOffset;
-(char)isChecked;
-(id)control;
-(id)labelString;
-(id)initWithViewController:(id)arg1 ;
-(NSButton *)checkbox;
-(void)setCheckbox:(NSButton *)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(double)pixelsBetweenLabelAndControl;
-(void)updateEvent;
-(char)canBeChecked;
-(void)checkboxToggled;
-(double)centerlineOffset;
@end

