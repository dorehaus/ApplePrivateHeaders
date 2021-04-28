/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKViewController.h>
#import <CalendarUI/CalUIEventViewTouchBarDelegate.h>

@class EKDiff, EKUIGadgetContainer, EKUITitleCalendarCompositeGadget, EKUILocationGadget, EKUIProposedTimeCompositeGadget, EKUIStartTimeGadget, EKUIGadget, EKUIAttendeesGadget, EKUIThreeButtonGadget, CalUIEventViewTouchBar, EKEvent, NSString;

@interface EKEventViewController : EKViewController <CalUIEventViewTouchBarDelegate> {

	char _footerVisible;
	char _isProposedEvent;
	EKDiff* _diffFromCommitted;
	EKUIGadgetContainer* _titleLocationContainer;
	EKUITitleCalendarCompositeGadget* _titleGadget;
	EKUILocationGadget* _locationGadget;
	EKUIProposedTimeCompositeGadget* _proposedTimeCompositeGadget;
	EKUIGadgetContainer* _dateTimeContainer;
	EKUIStartTimeGadget* _startTimeGadget;
	EKUIGadget* _attachmentGadget;
	EKUIGadget* _urlGadget;
	EKUIAttendeesGadget* _attendeesGadget;
	EKUIGadget* _notesGadget;
	EKUIThreeButtonGadget* _sendRevertGadget;
	EKUIThreeButtonGadget* _addIgnoreGadget;
	CalUIEventViewTouchBar* _eventViewTouchBar;
	long long _numOccurrencesSelected;

}

@property (retain) EKUIGadgetContainer * titleLocationContainer;                               //@synthesize titleLocationContainer=_titleLocationContainer - In the implementation block
@property (retain) EKUITitleCalendarCompositeGadget * titleGadget;                             //@synthesize titleGadget=_titleGadget - In the implementation block
@property (retain) EKUILocationGadget * locationGadget;                                        //@synthesize locationGadget=_locationGadget - In the implementation block
@property (retain) EKUIProposedTimeCompositeGadget * proposedTimeCompositeGadget;              //@synthesize proposedTimeCompositeGadget=_proposedTimeCompositeGadget - In the implementation block
@property (retain) EKUIGadgetContainer * dateTimeContainer;                                    //@synthesize dateTimeContainer=_dateTimeContainer - In the implementation block
@property (retain) EKUIStartTimeGadget * startTimeGadget;                                      //@synthesize startTimeGadget=_startTimeGadget - In the implementation block
@property (retain) EKUIGadget * attachmentGadget;                                              //@synthesize attachmentGadget=_attachmentGadget - In the implementation block
@property (retain) EKUIGadget * urlGadget;                                                     //@synthesize urlGadget=_urlGadget - In the implementation block
@property (retain) EKUIAttendeesGadget * attendeesGadget;                                      //@synthesize attendeesGadget=_attendeesGadget - In the implementation block
@property (retain) EKUIGadget * notesGadget;                                                   //@synthesize notesGadget=_notesGadget - In the implementation block
@property (retain) EKUIThreeButtonGadget * sendRevertGadget;                                   //@synthesize sendRevertGadget=_sendRevertGadget - In the implementation block
@property (retain) EKUIThreeButtonGadget * addIgnoreGadget;                                    //@synthesize addIgnoreGadget=_addIgnoreGadget - In the implementation block
@property (retain) CalUIEventViewTouchBar * eventViewTouchBar;                                 //@synthesize eventViewTouchBar=_eventViewTouchBar - In the implementation block
@property (assign) long long numOccurrencesSelected;                                           //@synthesize numOccurrencesSelected=_numOccurrencesSelected - In the implementation block
@property (assign) char footerVisible;                                                         //@synthesize footerVisible=_footerVisible - In the implementation block
@property (retain) EKDiff * diffFromCommitted;                                                 //@synthesize diffFromCommitted=_diffFromCommitted - In the implementation block
@property (assign) char isProposedEvent;                                                       //@synthesize isProposedEvent=_isProposedEvent - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newPlaceholderTitleString;
+(id)emptyPlaceholderTitleString;
-(EKEvent *)event;
-(void)applicationWillTerminate:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)makeTouchBar;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(EKDiff *)diffFromCommitted;
-(char)shouldDisplayURLS;
-(void)deleteEvent;
-(void)cancelProposedEvent;
-(void)setSendRevertGadget:(EKUIThreeButtonGadget *)arg1 ;
-(void)setAddIgnoreGadget:(EKUIThreeButtonGadget *)arg1 ;
-(EKUITitleCalendarCompositeGadget *)titleGadget;
-(EKUILocationGadget *)locationGadget;
-(EKUIAttendeesGadget *)attendeesGadget;
-(void)updateContainersWithChanges:(id)arg1 ;
-(void)updateSuddenTerminationWithNewEvent:(id)arg1 ;
-(CalUIEventViewTouchBar *)eventViewTouchBar;
-(void)setDiffFromCommitted:(EKDiff *)arg1 ;
-(EKUIGadget *)attachmentGadget;
-(EKUIGadget *)urlGadget;
-(EKUIGadget *)notesGadget;
-(void)makeFirstResponder;
-(void)firstResponderChanged:(id)arg1 ;
-(void)_updateTouchBarFirstResponder:(id)arg1 ;
-(void)dateTimeFormatChanged;
-(char)_settingsAreIncompatibleWithTouchBar;
-(void)setEventViewTouchBar:(CalUIEventViewTouchBar *)arg1 ;
-(EKUIStartTimeGadget *)startTimeGadget;
-(EKUIGadgetContainer *)dateTimeContainer;
-(EKUIThreeButtonGadget *)sendRevertGadget;
-(EKUIThreeButtonGadget *)addIgnoreGadget;
-(char)saveCompleteChangeWithImpliedCommitDecision:(char)arg1 ;
-(char)commitFromCommitButton:(char)arg1 shouldClose:(char*)arg2 ;
-(id)oldEvent:(id)arg1 didUpdateTo:(id)arg2 ;
-(id)oldObject:(id)arg1 didUpdateTo:(id)arg2 ;
-(char)isProposedEvent;
-(void)setLastSnapshottedObject:(id)arg1 ;
-(id)writableCalendars;
-(void)moveToCalendar:(id)arg1 ;
-(char)inspectorIsOpen;
-(id)yupButtonTitle;
-(id)nopeButtonTitle;
-(void)yupButtonPressed;
-(void)nopeButtonPressed;
-(void)toggleInspector;
-(char)shouldShowInspectorFields;
-(id)locationCandidateTouchBar;
-(id)inviteesCandidateTouchBar;
-(void)selectInspectorLocation;
-(void)selectInspectorDateTime;
-(void)selectInspectorInvitees;
-(void)datePickerIsChanging;
-(void)datePickerChanged;
-(void)respondWithStatus:(long long)arg1 ;
-(void)reportJunk;
-(void)selectTitleText;
-(void)selectTitleTextWithTrailingCursor;
-(char)shouldDisplayAttachments;
-(void)updateWithChangesFromEvent:(id)arg1 ;
-(char)hasUnsentChanges;
-(char)proposedEvent;
-(EKUIGadgetContainer *)titleLocationContainer;
-(void)setTitleLocationContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setTitleGadget:(EKUITitleCalendarCompositeGadget *)arg1 ;
-(void)setLocationGadget:(EKUILocationGadget *)arg1 ;
-(EKUIProposedTimeCompositeGadget *)proposedTimeCompositeGadget;
-(void)setProposedTimeCompositeGadget:(EKUIProposedTimeCompositeGadget *)arg1 ;
-(void)setDateTimeContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setStartTimeGadget:(EKUIStartTimeGadget *)arg1 ;
-(void)setAttachmentGadget:(EKUIGadget *)arg1 ;
-(void)setUrlGadget:(EKUIGadget *)arg1 ;
-(void)setAttendeesGadget:(EKUIAttendeesGadget *)arg1 ;
-(void)setNotesGadget:(EKUIGadget *)arg1 ;
-(long long)numOccurrencesSelected;
-(void)setNumOccurrencesSelected:(long long)arg1 ;
-(char)footerVisible;
-(void)setFooterVisible:(char)arg1 ;
-(void)setIsProposedEvent:(char)arg1 ;
@end

