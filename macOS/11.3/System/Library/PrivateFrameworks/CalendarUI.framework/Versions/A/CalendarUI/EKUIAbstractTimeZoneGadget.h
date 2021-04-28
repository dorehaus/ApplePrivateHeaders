/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>
#import <CalendarUI/CalUITimeZonePickerDelegate.h>

@class CalUITimeZonePicker, NSString;

@interface EKUIAbstractTimeZoneGadget : EKUILabeledGadget <CalUITimeZonePickerDelegate> {

	CalUITimeZonePicker* _timeZonePicker;

}

@property (retain) CalUITimeZonePicker * timeZonePicker;              //@synthesize timeZonePicker=_timeZonePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(void)dealloc;
-(id)control;
-(id)initWithViewController:(id)arg1 ;
-(char)shouldDisplay;
-(void)updateWithChanges:(id)arg1 ;
-(double)pixelsBetweenLabelAndControl;
-(char)shouldDisplayWhenNotEditable;
-(char)shouldShowBothTimeZones;
-(CalUITimeZonePicker *)timeZonePicker;
-(void)timeZoneSelected:(id)arg1 ;
-(void)setTimeZonePicker:(CalUITimeZonePicker *)arg1 ;
-(void)timeZoneEnabledPrefChanged;
-(void)otherSelected:(/*^block*/id)arg1 ;
@end

