/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget {

	EKUIPopUpButton* _repeatPicker;

}

@property (retain) EKUIPopUpButton * repeatPicker;              //@synthesize repeatPicker=_repeatPicker - In the implementation block
-(id)control;
-(id)labelString;
-(id)initWithViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(void)setRepeatPicker:(EKUIPopUpButton *)arg1 ;
-(EKUIPopUpButton *)repeatPicker;
-(id)addMenuItemForRecurrenceFrequency:(long long)arg1 withTitle:(id)arg2 ;
-(void)repeatChanged:(id)arg1 ;
@end
