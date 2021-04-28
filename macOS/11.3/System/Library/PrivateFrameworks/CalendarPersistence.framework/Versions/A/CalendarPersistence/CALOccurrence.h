/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALDate, CALOccurrableEntity, NSMutableDictionary, NSString;

@interface CALOccurrence : NSObject {

	CALDate* _initialStartDate;
	CALDate* _startDate;
	CALOccurrableEntity* _realEntity;
	CALOccurrableEntity* _parentEntity;
	NSMutableDictionary* _clientData;
	NSString* _occurrenceID;
	char _discard;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)URL;
-(id)url;
-(void)setURL:(id)arg1 ;
-(int)status;
-(void)reset;
-(id)attachments;
-(id)signature;
-(id)startDate;
-(char)isEditable;
-(id)entity;
-(void)discard;
-(id)attachment;
-(char)dirty;
-(void)setStartDate:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
-(char)isPrivate;
-(id)desc;
-(void)setComment:(id)arg1 ;
-(id)comment;
-(void)setSummary:(id)arg1 ;
-(id)summary;
-(id)locations;
-(void)setLocations:(id)arg1 ;
-(id)structuredLocation;
-(void)setDesc:(id)arg1 ;
-(id)categories;
-(id)locationString;
-(id)alarms;
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(id)repository;
-(int)classification;
-(void)setClassification:(int)arg1 ;
-(id)organizer;
-(void)setOrganizer:(id)arg1 ;
-(char)hasAttendees;
-(void)setStructuredLocation:(id)arg1 ;
-(char)hasAlarms;
-(void)removeAttachment:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)removeAttendee:(id)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(void)removeAllAttachments;
-(void)setSingleRecurrenceRule:(id)arg1 ;
-(char)isMainOccurrence;
-(int)invitationMode;
-(id)dropBoxLocation;
-(char)isAddressMe:(id)arg1 ;
-(char)isOrganizerMe;
-(char)isDetachedEntity;
-(char)isExchangeCompatible;
-(void)makeExchangeCompatible;
-(void)deleteFromRepositoryInManagedObjectContext:(id)arg1 ;
-(void)moveToRepository:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithOccurrableEntity:(id)arg1 withStartDate:(id)arg2 ;
-(id)mainRecurrenceRule;
-(id)recurID;
-(char)hasRecurrenceData;
-(char)hasRecurrenceOrIsDetached;
-(char)needsDetachCheck;
-(void)setMainRecurrenceRule:(id)arg1 ;
-(char)hasChildren;
-(id)parentEntity;
-(char)isFullDayEvent;
-(void)setFullDayEvent:(char)arg1 ;
-(char)hasAttendee:(id)arg1 ;
-(void)removeAllAttendees;
-(void)setStartDateAndTimeZone:(id)arg1 ;
-(char)isPrivateAndDelegateOrCalendarSharedToMe;
-(id)makeEntityFromOccurrence;
-(void)resetOccurrenceID;
-(char)isEqualToOccurrence:(id)arg1 ;
-(id)occurrenceID;
-(id)HACKentity;
-(char)ableToMovePreservingAttendeesToCalendar:(id)arg1 ;
-(char)isDiscarded;
-(id)clientData;
-(id)initialStartDate;
-(char)isOrganizerMeAndEditable;
-(char)isFirstOccurence;
-(char)ableToMoveToCalendar:(id)arg1 ;
-(id)alarmBaseDate;
-(id)textRepresentation;
-(id)masterEntity;
-(void)setNeedsServerConfirmation:(char)arg1 ;
-(char)needsServerConfirmation;
-(char)isEditableIgnoringInvitationStatus:(char)arg1 ;
-(id)calendarServerAccess;
-(void)setCalendarServerAccess:(id)arg1 ;
-(id)privateComment;
-(void)setPrivateComment:(id)arg1 ;
-(id)alarmsExcludingNone;
-(char)hasOrganizer;
-(void)removeOrUninviteAttendee:(id)arg1 ;
-(void)removeAttendeeSimilarToAttendee:(id)arg1 ;
-(void)removeAllAlarms;
-(void)removeAllCategories;
-(char)hasDropBox;
-(void)setHasDropBox:(char)arg1 ;
-(void)setDropBoxLocation:(id)arg1 ;
-(char)invitationStatusPending;
-(char)_ITipNeedsUpd;
-(id)originEntity;
-(id)templateData;
-(id)alarmWithSignature:(id)arg1 ;
-(id)searchMetaData;
-(char)alreadySentMarker;
-(void)setAlreadySentMarker:(char)arg1 ;
-(char)rsvpNeeded;
-(void)setRSVPNeeded:(char)arg1 ;
-(void)setMyRSVPStatus:(char)arg1 ;
-(void)setMyParticipationStatus:(int)arg1 ;
-(char)isAnInvitation;
-(int)invitationModeIncludingChildren;
-(int)myParticipationStatus;
-(char)myRSVPStatus;
-(void)handleMeCaseInAttendees;
-(void)forceRSVPTo:(char)arg1 ;
-(void)resetParticipationStatus;
-(void)forceNeedsActionOnNoneAttendees;
-(char)hasSendableAttendees;
-(char)hasInvitedAttendees;
-(char)hasInvitedAttendeesIncludingChildren;
-(char)hasCalDAVRepository;
-(char)hasExchangeRepository;
-(char)shouldWarnUserOnMoveToExchangeRepository:(id)arg1 ;
-(char)shouldWarnUserOnMoveToExchangeCalendar:(id)arg1 ;
-(id)entityStartDate;
-(void)setEntityStartDate:(id)arg1 ;
-(char)hasAttendeesOtherThanOrganizer;
-(id)entityUID;
-(char)myStatusHasChanged;
-(void)setDirtyParticipationStatus:(char)arg1 ;
-(id)occurrenceDateID;
-(char)isCancelledInvitation;
-(void)setOccurrableEntity:(id)arg1 ;
@end

