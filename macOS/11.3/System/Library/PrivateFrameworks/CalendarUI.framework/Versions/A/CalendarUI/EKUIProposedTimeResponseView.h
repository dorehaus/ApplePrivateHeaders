/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@protocol EKUIProposedTimeActionHandler;
@class NSArray, EKParticipant, EKUIKeyViewButton;

@interface EKUIProposedTimeResponseView : NSView {

	NSArray* _previousConstraints;
	EKParticipant* _proposingAttendee;
	id<EKUIProposedTimeActionHandler> _actionHandler;
	unsigned long long _orderIndex;
	EKUIKeyViewButton* _declineControl;
	EKUIKeyViewButton* _acceptControl;

}

@property (retain) EKParticipant * proposingAttendee;                            //@synthesize proposingAttendee=_proposingAttendee - In the implementation block
@property (__weak) id<EKUIProposedTimeActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign) unsigned long long orderIndex;                                //@synthesize orderIndex=_orderIndex - In the implementation block
@property (readonly) EKUIKeyViewButton * declineControl;                         //@synthesize declineControl=_declineControl - In the implementation block
@property (readonly) EKUIKeyViewButton * acceptControl;                          //@synthesize acceptControl=_acceptControl - In the implementation block
-(id)init;
-(void)updateConstraints;
-(id<EKUIProposedTimeActionHandler>)actionHandler;
-(void)setActionHandler:(id<EKUIProposedTimeActionHandler>)arg1 ;
-(EKParticipant *)proposingAttendee;
-(char)shouldDisplay;
-(EKUIKeyViewButton *)declineControl;
-(EKUIKeyViewButton *)acceptControl;
-(void)setProposingAttendee:(EKParticipant *)arg1 ;
-(void)setOrderIndex:(unsigned long long)arg1 ;
-(unsigned long long)orderIndex;
-(void)declineControlClicked:(id)arg1 ;
-(void)acceptControlClicked:(id)arg1 ;
@end
