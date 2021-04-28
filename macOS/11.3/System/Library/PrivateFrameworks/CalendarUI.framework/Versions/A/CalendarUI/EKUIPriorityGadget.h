/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>

@class EKUIPopUpButton;

@interface EKUIPriorityGadget : EKUILabeledGadget {

	EKUIPopUpButton* _priorityPicker;

}

@property (retain) EKUIPopUpButton * priorityPicker;              //@synthesize priorityPicker=_priorityPicker - In the implementation block
+(id)interestedChangeKeys;
-(id)control;
-(id)labelString;
-(id)initWithViewController:(id)arg1 ;
-(char)shouldDisplay;
-(void)updateWithChanges:(id)arg1 ;
-(double)pixelsBetweenLabelAndControl;
-(void)setPriorityPicker:(EKUIPopUpButton *)arg1 ;
-(void)addMenuItemForPriority:(unsigned long long)arg1 withTitle:(id)arg2 ;
-(EKUIPopUpButton *)priorityPicker;
-(void)priorityChanged:(id)arg1 ;
@end
