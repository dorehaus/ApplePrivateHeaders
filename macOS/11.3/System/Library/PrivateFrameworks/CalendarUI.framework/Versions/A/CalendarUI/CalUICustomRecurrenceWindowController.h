/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSWindowController.h>

@class NSView, EKCalendarItem, NSWindow, NSPopUpButton, NSTabView, NSTextField, CalUIVoiceOverFriendlyMatrix, NSStackView, NSButton, NSMutableArray, CalUIPopupWindowState;

@interface CalUICustomRecurrenceWindowController : NSWindowController {

	NSView* _parentView;
	NSView* _containerView;
	EKCalendarItem* _calendarItem;
	NSWindow* _customRepeatPanel;
	NSPopUpButton* _recurrenceFrequency;
	NSTabView* _recurrenceTabView;
	NSTextField* _dailyRecurrenceInterval;
	NSTextField* _weeklyRecurrenceInterval;
	CalUIVoiceOverFriendlyMatrix* _weeklyDaySelectionMatrix;
	NSTextField* _monthlyRecurrenceInterval;
	CalUIVoiceOverFriendlyMatrix* _monthlyRuleMatrix;
	CalUIVoiceOverFriendlyMatrix* _monthlyDayMatrix;
	NSPopUpButton* _monthlyWeekNumber;
	NSPopUpButton* _monthlyDayNumber;
	NSStackView* _monthlyWeekDayNumberStackView;
	NSTextField* _yearlyRecurrenceInterval;
	CalUIVoiceOverFriendlyMatrix* _yearlyMonthMatrix;
	NSButton* _yearlyByDaySwitch;
	NSPopUpButton* _yearlyWeekNumber;
	NSPopUpButton* _yearlyDayNumber;
	NSStackView* _yearlyWeekDayNumberStackView;
	NSMutableArray* _tabHeights;
	long long _firstDayOfWeek;
	CalUIPopupWindowState* _windowState;

}

@property (__weak) EKCalendarItem * calendarItem;                                        //@synthesize calendarItem=_calendarItem - In the implementation block
@property (retain) NSWindow * customRepeatPanel;                                         //@synthesize customRepeatPanel=_customRepeatPanel - In the implementation block
@property (__weak) NSPopUpButton * recurrenceFrequency;                                  //@synthesize recurrenceFrequency=_recurrenceFrequency - In the implementation block
@property (__weak) NSTabView * recurrenceTabView;                                        //@synthesize recurrenceTabView=_recurrenceTabView - In the implementation block
@property (__weak) NSTextField * dailyRecurrenceInterval;                                //@synthesize dailyRecurrenceInterval=_dailyRecurrenceInterval - In the implementation block
@property (__weak) NSTextField * weeklyRecurrenceInterval;                               //@synthesize weeklyRecurrenceInterval=_weeklyRecurrenceInterval - In the implementation block
@property (__weak) CalUIVoiceOverFriendlyMatrix * weeklyDaySelectionMatrix;              //@synthesize weeklyDaySelectionMatrix=_weeklyDaySelectionMatrix - In the implementation block
@property (__weak) NSTextField * monthlyRecurrenceInterval;                              //@synthesize monthlyRecurrenceInterval=_monthlyRecurrenceInterval - In the implementation block
@property (__weak) CalUIVoiceOverFriendlyMatrix * monthlyRuleMatrix;                     //@synthesize monthlyRuleMatrix=_monthlyRuleMatrix - In the implementation block
@property (__weak) CalUIVoiceOverFriendlyMatrix * monthlyDayMatrix;                      //@synthesize monthlyDayMatrix=_monthlyDayMatrix - In the implementation block
@property (__weak) NSPopUpButton * monthlyWeekNumber;                                    //@synthesize monthlyWeekNumber=_monthlyWeekNumber - In the implementation block
@property (__weak) NSPopUpButton * monthlyDayNumber;                                     //@synthesize monthlyDayNumber=_monthlyDayNumber - In the implementation block
@property (__weak) NSStackView * monthlyWeekDayNumberStackView;                          //@synthesize monthlyWeekDayNumberStackView=_monthlyWeekDayNumberStackView - In the implementation block
@property (__weak) NSTextField * yearlyRecurrenceInterval;                               //@synthesize yearlyRecurrenceInterval=_yearlyRecurrenceInterval - In the implementation block
@property (__weak) CalUIVoiceOverFriendlyMatrix * yearlyMonthMatrix;                     //@synthesize yearlyMonthMatrix=_yearlyMonthMatrix - In the implementation block
@property (__weak) NSButton * yearlyByDaySwitch;                                         //@synthesize yearlyByDaySwitch=_yearlyByDaySwitch - In the implementation block
@property (__weak) NSPopUpButton * yearlyWeekNumber;                                     //@synthesize yearlyWeekNumber=_yearlyWeekNumber - In the implementation block
@property (__weak) NSPopUpButton * yearlyDayNumber;                                      //@synthesize yearlyDayNumber=_yearlyDayNumber - In the implementation block
@property (__weak) NSStackView * yearlyWeekDayNumberStackView;                           //@synthesize yearlyWeekDayNumberStackView=_yearlyWeekDayNumberStackView - In the implementation block
@property (retain) NSMutableArray * tabHeights;                                          //@synthesize tabHeights=_tabHeights - In the implementation block
@property (assign) long long firstDayOfWeek;                                             //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (retain) CalUIPopupWindowState * windowState;                                  //@synthesize windowState=_windowState - In the implementation block
+(id)sharedInstance;
-(void)mouseDown:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(char)showPopup;
-(EKCalendarItem *)calendarItem;
-(void)setFirstDayOfWeek:(long long)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)okClicked:(id)arg1 ;
-(long long)firstDayOfWeek;
-(void)updateFirstDayOfWeek:(long long)arg1 ;
-(void)prepareToPopupOnView:(id)arg1 ;
-(void)updateWithCalendarItem:(id)arg1 ;
-(id)recurrenceRuleFromShowingPopup;
-(void)_initializeControls;
-(void)setWindowState:(CalUIPopupWindowState *)arg1 ;
-(NSStackView *)monthlyWeekDayNumberStackView;
-(NSPopUpButton *)monthlyDayNumber;
-(NSStackView *)yearlyWeekDayNumberStackView;
-(NSPopUpButton *)yearlyDayNumber;
-(CalUIVoiceOverFriendlyMatrix *)weeklyDaySelectionMatrix;
-(void)updateStateWithCalendarItem:(id)arg1 ;
-(CalUIPopupWindowState *)windowState;
-(void)updateWindowWithState:(id)arg1 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(void)updateStateWithRecurrenceRule:(id)arg1 startDate:(id)arg2 timeZone:(id)arg3 supportsMultipleDaysAndMonths:(char)arg4 supportsYearlyIntervalChange:(char)arg5 ;
-(void)setYearlyByDaySwitch:(NSButton *)arg1 ;
-(void)resetWindow;
-(void)updateDailyPaneWithWindowState:(id)arg1 ;
-(void)updateWeeklyPaneWithWindowState:(id)arg1 ;
-(void)updateMonthlyPaneWithWindowState:(id)arg1 ;
-(void)updateYearlyPaneWithWindowState:(id)arg1 ;
-(NSPopUpButton *)recurrenceFrequency;
-(void)switchToPaneAtIndex:(long long)arg1 ;
-(NSTextField *)dailyRecurrenceInterval;
-(NSTextField *)weeklyRecurrenceInterval;
-(NSTextField *)monthlyRecurrenceInterval;
-(NSTextField *)yearlyRecurrenceInterval;
-(CalUIVoiceOverFriendlyMatrix *)monthlyDayMatrix;
-(CalUIVoiceOverFriendlyMatrix *)monthlyRuleMatrix;
-(NSPopUpButton *)monthlyWeekNumber;
-(CalUIVoiceOverFriendlyMatrix *)yearlyMonthMatrix;
-(NSButton *)yearlyByDaySwitch;
-(NSPopUpButton *)yearlyWeekNumber;
-(long long)_recurrenceFrequencyWithState:(id)arg1 ;
-(id)_selectedDaysOfTheWeekWithState:(id)arg1 ;
-(id)_selectedDaysOfTheMonthWithState:(id)arg1 ;
-(id)_selectedMonthsOfTheYearWithState:(id)arg1 ;
-(id)_setPositionsWithState:(id)arg1 ;
-(long long)_intervalValueWithState:(id)arg1 ;
-(long long)_runAndAttach;
-(void)updateStateFromWindow;
-(id)recurrenceRuleWithWindowState:(id)arg1 ;
-(id)_attach;
-(void)_openWithAnimation:(char)arg1 ;
-(void)_resetFrameFromViews;
-(CGRect)_frameForDeltaHeight:(double)arg1 ;
-(long long)_weekNumberFromSelectedIndex:(long long)arg1 ;
-(NSTabView *)recurrenceTabView;
-(void)setTabHeights:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tabHeights;
-(NSWindow *)customRepeatPanel;
-(id)_byDayArray:(int)arg1 weekItemSelected:(int)arg2 ;
-(char)_cell:(id)arg1 isLastSelectedInMatrix:(id)arg2 ;
-(void)setOptionsEnabling;
-(char)isCustomRecurrenceValid;
-(void)updateStateWithRecurrenceRule:(id)arg1 ;
-(void)frequencyChanged:(id)arg1 ;
-(void)weeklyMatrixClicked:(id)arg1 ;
-(void)monthlyRuleChanged:(id)arg1 ;
-(void)monthlyMatrixClicked:(id)arg1 ;
-(void)yearlyByDayChanged:(id)arg1 ;
-(void)yearlyMatrixClicked:(id)arg1 ;
-(void)setCustomRepeatPanel:(NSWindow *)arg1 ;
-(void)setRecurrenceFrequency:(NSPopUpButton *)arg1 ;
-(void)setRecurrenceTabView:(NSTabView *)arg1 ;
-(void)setDailyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setWeeklyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setWeeklyDaySelectionMatrix:(CalUIVoiceOverFriendlyMatrix *)arg1 ;
-(void)setMonthlyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setMonthlyRuleMatrix:(CalUIVoiceOverFriendlyMatrix *)arg1 ;
-(void)setMonthlyDayMatrix:(CalUIVoiceOverFriendlyMatrix *)arg1 ;
-(void)setMonthlyWeekNumber:(NSPopUpButton *)arg1 ;
-(void)setMonthlyDayNumber:(NSPopUpButton *)arg1 ;
-(void)setMonthlyWeekDayNumberStackView:(NSStackView *)arg1 ;
-(void)setYearlyRecurrenceInterval:(NSTextField *)arg1 ;
-(void)setYearlyMonthMatrix:(CalUIVoiceOverFriendlyMatrix *)arg1 ;
-(void)setYearlyWeekNumber:(NSPopUpButton *)arg1 ;
-(void)setYearlyDayNumber:(NSPopUpButton *)arg1 ;
-(void)setYearlyWeekDayNumberStackView:(NSStackView *)arg1 ;
@end

