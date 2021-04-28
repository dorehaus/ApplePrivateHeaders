/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALOccurrableEntity.h>

@class NSMutableDictionary, CALDate, NSDictionary, NSString, CALAddress, NSSet, NSNumber, NSURL;

@interface CALEntity : CALOccurrableEntity {

	CALEntity* _parentEntity;
	NSMutableDictionary* _children;
	char _hasReccurrence;
	char _isPhantom;
	CALDate* _eventCachedStartDate;
	CALDate* _cachedEndDate;
	NSDictionary* _searchHackDict;
	NSString* _localUID;
	char _eTagShouldBeNil;
	int _organizerType;
	CALAddress* _myAddress;
	char _myAddressNotHere;
	CALAddress* _myAddressIgnoringMeCard;
	char _myAddressIgnoringMeCardNotHere;
	NSSet* _ownerAddresses;
	unsigned long long _permission;
	NSNumber* _dropBoxFreeBytes;
	NSURL* _dropBoxLocationOverrideBaseURL;
	unsigned long long _unlistedOtherAttendees;
	char _isOwnerMe;
	char _isSharingSchedulingSupported;

}

@property (assign) char isPhantom;                                         //@synthesize isPhantom=_isPhantom - In the implementation block
@property (assign) char isOwnerMe;                                         //@synthesize isOwnerMe=_isOwnerMe - In the implementation block
@property (assign) char isSharingSchedulingSupported;                      //@synthesize isSharingSchedulingSupported=_isSharingSchedulingSupported - In the implementation block
@property (retain) NSSet * ownerAddresses;                                 //@synthesize ownerAddresses=_ownerAddresses - In the implementation block
@property (assign) char eTagShouldBeNil;                                   //@synthesize eTagShouldBeNil=_eTagShouldBeNil - In the implementation block
@property (nonatomic,readonly) char needsDetachmentDecision; 
@property (retain) NSNumber * dropBoxFreeBytes;                            //@synthesize dropBoxFreeBytes=_dropBoxFreeBytes - In the implementation block
@property (retain) NSURL * dropBoxLocationOverrideBaseURL;                 //@synthesize dropBoxLocationOverrideBaseURL=_dropBoxLocationOverrideBaseURL - In the implementation block
@property (assign) unsigned long long unlistedOtherAttendees;              //@synthesize unlistedOtherAttendees=_unlistedOtherAttendees - In the implementation block
+(id)makeNewLocalUID;
+(id)entityFromManagedObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)url;
-(void)setURL:(id)arg1 ;
-(int)status;
-(int)sequence;
-(id)attachments;
-(void)_setParent:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)startDate;
-(void)setSequence:(int)arg1 ;
-(id)creationDate;
-(char)isEditable;
-(char)dirty;
-(void)removeChild:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
-(id)versions;
-(char)isPrivate;
-(id)desc;
-(void)setComment:(id)arg1 ;
-(id)comment;
-(void)setSummary:(id)arg1 ;
-(id)summary;
-(void)addCategory:(id)arg1 ;
-(void)setDesc:(id)arg1 ;
-(id)categories;
-(void)setCategories:(id)arg1 ;
-(id)alarms;
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(id)sharedUID;
-(void)addAlarm:(id)arg1 ;
-(void)setSharedUID:(id)arg1 ;
-(void)setAlarms:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(id)lastModificationDate;
-(id)repository;
-(int)classification;
-(void)setClassification:(int)arg1 ;
-(void)cleanUp;
-(id)organizer;
-(void)setOrganizer:(id)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(char)isDefaultAlarmDeleted;
-(char)hasAttendees;
-(id)localUID;
-(void)setLocalUID:(id)arg1 ;
-(char)hasAlarms;
-(NSSet *)ownerAddresses;
-(void)removeAttachment:(id)arg1 ;
-(id)recurrenceRules;
-(void)addAttendee:(id)arg1 ;
-(void)removeAttendee:(id)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(void)removeAllAttachments;
-(void)addRecurrenceRule:(id)arg1 ;
-(void)removeRecurrenceRule:(id)arg1 ;
-(void)setSingleRecurrenceRule:(id)arg1 ;
-(char)isPhantom;
-(char)isSignificantlyDetached;
-(id)attendeeComments;
-(id)exceptionDates;
-(int)invitationMode;
-(id)dropBoxLocation;
-(id)defaultAlarm;
-(void)setIsPhantom:(char)arg1 ;
-(id)cachedEndDate;
-(char)isOwnerMe;
-(char)isOrganizerMe;
-(char)isDetachedEntity;
-(void)removeProperty:(id)arg1 ;
-(void)setRepository:(id)arg1 ;
-(void)markAsClean;
-(char)isExchangeCompatible;
-(void)makeExchangeCompatible;
-(char)isAddressMe:(id)arg1 ignoreMeCard:(char)arg2 ;
-(void)commitInManagedObjectContext:(id)arg1 ;
-(void)deleteFromRepositoryInManagedObjectContext:(id)arg1 ;
-(void)moveToRepository:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(Class)correspondingOccurrenceClass;
-(char)isOwnerAddress:(id)arg1 ;
-(char)isOwnerAddress:(id)arg1 ignoreMeCard:(char)arg2 ;
-(id)expandOnTimeRange:(id)arg1 ;
-(id)setInfiniteRecurrence;
-(id)mainRecurrenceRule;
-(id)recurID;
-(id)occurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 ;
-(void)removeExceptionDate:(id)arg1 ;
-(void)unregisterChildEntity:(id)arg1 ;
-(void)updateRecurrenceFlag;
-(void)removeRecurrenceProperties;
-(id)childrenEntities;
-(char)hasRecurrenceData;
-(char)hasRecurrenceProperties;
-(char)hasRecurrenceOrIsDetached;
-(id)recurrenceDatesInTimeRange:(id)arg1 ;
-(id)exceptionRules;
-(void)addExceptionDate:(id)arg1 ;
-(void)initRecurrence;
-(void)removeAllRecurrences;
-(char)needsDetachCheck;
-(char)hasOnlySingleOccurence;
-(char)hasRuleWithByParameter;
-(char)isInfiniteRecurrence;
-(id)setCachedEndDate:(id)arg1 ;
-(id)recurrenceDates;
-(char)hasExceptionDates;
-(void)setRecurrenceDates:(id)arg1 ;
-(void)setExceptionDates:(id)arg1 ;
-(void)addExceptionRule:(id)arg1 ;
-(void)removeExceptionRule:(id)arg1 ;
-(void)addRecurrenceDatePropertyValue:(id)arg1 ;
-(void)removeRecurrenceDate:(id)arg1 ;
-(void)addExceptionDatePropertyValue:(id)arg1 ;
-(void)setMainRecurrenceRule:(id)arg1 ;
-(char)hasChildren;
-(void)forceDatesToGMT;
-(void)setSharedUIDForMainAndDetached:(id)arg1 localUID:(id)arg2 ;
-(void)validateIDs;
-(id)parentEntity;
-(void)setParentEntity:(id)arg1 ;
-(void)invalidateEntityCaches;
-(void)moveChildrenToTime:(id)arg1 fromTime:(id)arg2 ;
-(char)isOrganizerOwner;
-(id)defaultAlarmsBasedOnItemAndPreferencesInContext:(id)arg1 ;
-(id)upperBoundDate;
-(id)_makeExchangeCompatible;
-(char)_isAlarmExchangeCompatible:(id)arg1 ;
-(void)_makeAlarmExchangeCompatible:(id)arg1 ;
-(char)hasAttendee:(id)arg1 ;
-(void)removeAllAttendees;
-(id)stampDate;
-(void)setStampDate:(id)arg1 ;
-(void)ensureDurationAlarms;
-(id)attachmentWithURL:(id)arg1 ;
-(char)isPrivateAndDelegateOrCalendarSharedToMe;
-(char)isMeInAttendees;
-(char)isOrganizerMeAndEditable;
-(id)masterEntity;
-(void)setNeedsServerConfirmation:(char)arg1 ;
-(char)needsServerConfirmation;
-(char)isEditableIgnoringInvitationStatus:(char)arg1 ;
-(id)calendarServerAccess;
-(void)setCalendarServerAccess:(id)arg1 ;
-(id)privateComment;
-(void)setPrivateComment:(id)arg1 ;
-(id)alarmsExcludingNone;
-(id)attendeesExcludingOrganizer;
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
-(id)templateData;
-(id)alarmWithSignature:(id)arg1 ;
-(id)searchMetaData;
-(char)myiTIPStatusChanged;
-(void)setMyiTIPStatusChanged:(char)arg1 ;
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
-(id)attendeesIncludingUninvited;
-(char)isSharingSchedulingSupported;
-(void)cleanParticipationStatus;
-(void)cleanAttachmentInfo;
-(char)summaryMatchesString:(id)arg1 ;
-(void)_setITipNeedsUpd:(char)arg1 ;
-(id)stampNSCalendarDate;
-(void)setStampNSCalendarDate:(id)arg1 ;
-(id)exceptionNSCalendarDates;
-(void)setExceptionNSCalendarDates:(id)arg1 ;
-(id)getMainOccurrence;
-(id)occurrencesFromDates:(id)arg1 ;
-(void)setDontSchedule:(char)arg1 ;
-(void)setIsOwnerMe:(char)arg1 ;
-(void)setDropBoxFreeBytes:(NSNumber *)arg1 ;
-(void)setUnlistedOtherAttendees:(unsigned long long)arg1 ;
-(void)setAlarmsOriginEntity;
-(void)setOrganizerType:(int)arg1 ;
-(void)deleteDefaultAlarms;
-(void)undeleteDefaultAlarms;
-(void)commitWithoutBumpInManagedObjectContext:(id)arg1 ;
-(void)commitAndPropogateChanges:(char)arg1 inManagedObjectContext:(id)arg2 ;
-(void)incrementSequence;
-(void)_propogateAlarmsWithModifiedAlarms:(id)arg1 deletedAlarms:(id)arg2 ;
-(id)ownerForEntity;
-(id)attendeeSimilarToAttendee:(id)arg1 ;
-(void)_propogateAttendeesWithMeAddress:(id)arg1 modifiedProperties:(id)arg2 parentEntity:(id)arg3 ;
-(void)resetParticipationStatusTo:(int)arg1 ;
-(id)cancelItemID;
-(id)iconInformation;
-(char)isEditableIgnoringInvitationStatus:(char)arg1 ignoringAlarmsOrTravelTime:(char)arg2 ;
-(id)invitationUID;
-(char)hasInvitationUID;
-(void)setInvitationUID:(id)arg1 ;
-(id)attendeeIncludingUnivitedWithAddress:(id)arg1 ;
-(char)_isInvitee;
-(void)removeOrganizer;
-(void)undeleteDefaultAlarmsInContext:(id)arg1 ;
-(id)myAddressIgnoringMeCard:(char)arg1 ;
-(void)_updateCachedMyAddressWithAttendee:(id)arg1 ignoreMeCard:(char)arg2 ;
-(void)_updateCachedMyAddressNotHereIgnoringMeCard:(char)arg1 ;
-(id)attendessWithExcludingOptions:(int)arg1 ;
-(id)attendeeWithAddress:(id)arg1 fromAttendees:(id)arg2 ;
-(char)attendeesAreStillNone;
-(void)removeAllRelatedTos;
-(id)attachmentsLocation;
-(id)attachmentWithFileName:(id)arg1 ;
-(id)_getPathsForOldAttachmentsWithSameNameAsAnyOfNewOnes:(id)arg1 ;
-(void)_removeAttachmentsFromArrayFromSelf:(id)arg1 ;
-(id)_getValidDropBoxLocationFromPrincipal:(id)arg1 ;
-(id)_filesystemURLForFilename:(id)arg1 ;
-(id)_getFilePathOnServer:(id)arg1 withPrincipal:(id)arg2 ;
-(void)_addURL:(id)arg1 inCalDAVCalendar:(id)arg2 withContext:(id)arg3 ;
-(void)_addURL:(id)arg1 inNonCalDAVCalendar:(id)arg2 ;
-(char)_notAllowedToAddAttachments;
-(void)_removeOldAttachmentsWithSameNameAsAnyOfNewOnes:(id)arg1 ;
-(void)_addURL:(id)arg1 withContext:(id)arg2 ;
-(void)_setDontScheduleNoPropagate:(char)arg1 ;
-(id)recurrenceIDDatesOfChildren;
-(char)needsDetachmentDecision;
-(char)isCalendarSharedToMe;
-(void)setTemplateData:(id)arg1 ;
-(void)setCancelItemID:(id)arg1 ;
-(void)setIconInformation:(id)arg1 ;
-(void)removeInvitationUID;
-(id)invitationUIDorUID;
-(char)shouldPushInvitationUID;
-(void)adoptInvitationUID:(id)arg1 ;
-(id)attendeeCommentsForCurrentAttendees;
-(char)hasAttendeeComments;
-(void)setLastModificationDate:(id)arg1 ;
-(void)removeAttendeesInviteeSideExchange;
-(id)myAddress;
-(char)isOrganizerScheduleAgentNonServer;
-(char)possibleMeForEntity;
-(char)hideAttendeesForBrokenOwner;
-(char)hasAttendeesNoInherit;
-(id)attendeesNoInherit;
-(char)hasUninvitedAttendees;
-(id)attendeesWithOnlyRoomType;
-(id)attendeesExcludingRoomType;
-(id)attendeesExcludingRoomTypeAndOrganizer;
-(id)attendeeWithAddress:(id)arg1 ;
-(id)relatedTos;
-(void)addRelatedTo:(id)arg1 ;
-(void)setRelatedTos:(id)arg1 ;
-(void)removeRelatedTo:(id)arg1 ;
-(void)removeCategory:(id)arg1 ;
-(void)addNewAttachments:(id)arg1 withContext:(id)arg2 ;
-(void)removeAndProcessAttachments:(id)arg1 ;
-(char)hasMyiTIPStatusChanged;
-(char)dontSchedule;
-(id)mainOccurrenceID;
-(id)versionForVersionTag:(id)arg1 ;
-(id)EWSItemID;
-(void)setEWSItemID:(id)arg1 ;
-(id)changeKey;
-(void)setChangeKey:(id)arg1 ;
-(char)eTagShouldBeNil;
-(void)setETagShouldBeNil:(char)arg1 ;
-(void)setIsSharingSchedulingSupported:(char)arg1 ;
-(void)setOwnerAddresses:(NSSet *)arg1 ;
-(unsigned long long)unlistedOtherAttendees;
-(NSNumber *)dropBoxFreeBytes;
-(NSURL *)dropBoxLocationOverrideBaseURL;
-(void)setDropBoxLocationOverrideBaseURL:(NSURL *)arg1 ;
-(char)isSignificantlyDetachedIgnoringParticipation:(char)arg1 ;
-(void)registerChildEntity:(id)arg1 ;
-(void)setRecurID:(id)arg1 ;
-(id)recurrenceIDTag;
-(void)deleteDetach:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)cleanOldExceptionDates;
-(id)recurrenceIndicesFromStartDate:(id)arg1 ;
-(id)childWithRecurrenceIDTag:(id)arg1 ;
-(id)childWithRecurrenceID:(id)arg1 ;
-(id)detach:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)undetach:(id)arg1 ;
-(void)deleteDetach:(id)arg1 ;
-(void)undeleteDetach:(id)arg1 ;
-(void)redetach:(id)arg1 ;
-(id)sliceOn:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)cleanExceptionsAtDate:(id)arg1 ;
-(void)setSearchMetaData:(id)arg1 ;
@end

