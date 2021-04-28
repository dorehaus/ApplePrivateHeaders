/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUILayerBackedView.h>

@protocol CalUIDayViewGadgetDataSource, CalUIBoxOccurrenceContentDelegate, CalUIDayViewGadgetAppearanceDelegate;
@class CalUIDayViewGadgetController, NSArray, NSTextField, NSLayoutConstraint;

@interface CalUIDayViewAllDayView : CalUILayerBackedView {

	char _hasNewOccurrenceViews;
	id<CalUIDayViewGadgetDataSource> _dataSource;
	CalUIDayViewGadgetController* _controller;
	id<CalUIBoxOccurrenceContentDelegate> _boxOccurrenceContentDelegate;
	NSArray* _occurrenceViews;
	NSTextField* _allDayLabel;
	NSLayoutConstraint* _noEventsConstraint;
	id<CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;
	NSLayoutConstraint* _labelVerticalAlignmentConstraint;

}

@property (nonatomic,retain) NSArray * occurrenceViews;                                                              //@synthesize occurrenceViews=_occurrenceViews - In the implementation block
@property (readonly) NSTextField * allDayLabel;                                                                      //@synthesize allDayLabel=_allDayLabel - In the implementation block
@property (retain) NSLayoutConstraint * noEventsConstraint;                                                          //@synthesize noEventsConstraint=_noEventsConstraint - In the implementation block
@property (assign) char hasNewOccurrenceViews;                                                                       //@synthesize hasNewOccurrenceViews=_hasNewOccurrenceViews - In the implementation block
@property (assign,nonatomic,__weak) id<CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate;                     //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelVerticalAlignmentConstraint;                                  //@synthesize labelVerticalAlignmentConstraint=_labelVerticalAlignmentConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CalUIDayViewGadgetDataSource> dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) CalUIDayViewGadgetController * controller;                                       //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<CalUIBoxOccurrenceContentDelegate> boxOccurrenceContentDelegate;              //@synthesize boxOccurrenceContentDelegate=_boxOccurrenceContentDelegate - In the implementation block
-(char)allowsVibrancy;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CalUIDayViewGadgetDataSource>)dataSource;
-(void)setDataSource:(id<CalUIDayViewGadgetDataSource>)arg1 ;
-(CalUIDayViewGadgetController *)controller;
-(void)setController:(CalUIDayViewGadgetController *)arg1 ;
-(void)dataChanged;
-(double)topInset;
-(double)bottomInset;
-(id)initWithFrame:(CGRect)arg1 appearanceDelegate:(id)arg2 ;
-(void)setBoxOccurrenceContentDelegate:(id<CalUIBoxOccurrenceContentDelegate>)arg1 ;
-(void)alignAllDayLabelToFirstOccurrence;
-(id<CalUIDayViewGadgetAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<CalUIDayViewGadgetAppearanceDelegate>)arg1 ;
-(double)horizontalInset;
-(NSTextField *)allDayLabel;
-(void)setHasNewOccurrenceViews:(char)arg1 ;
-(void)setNoEventsConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)noEventsConstraint;
-(NSArray *)occurrenceViews;
-(id<CalUIBoxOccurrenceContentDelegate>)boxOccurrenceContentDelegate;
-(void)setOccurrenceViews:(NSArray *)arg1 ;
-(char)hasNewOccurrenceViews;
-(double)insetBetweenEvents;
-(double)eventHeight;
-(NSLayoutConstraint *)labelVerticalAlignmentConstraint;
-(void)setLabelVerticalAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
@end
