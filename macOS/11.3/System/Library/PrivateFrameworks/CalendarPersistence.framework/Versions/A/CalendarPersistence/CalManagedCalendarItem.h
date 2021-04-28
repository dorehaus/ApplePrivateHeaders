/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <libobjc.A.dylib/ETagObject.h>
#import <libobjc.A.dylib/OccurrenceModelProtocol.h>
#import <libobjc.A.dylib/StoresUnrecognizedICS.h>

@class NSDate, NSNumber, NSString, NSURL, NSTimeZone, NSData, CalManagedICSElementProperties, CalManagedLocation, NSMutableSet, CalManagedCalendar, CalManagedRecurrenceSet, NSDictionary, NSManagedObjectID;

@interface CalManagedCalendarItem : CalManagedObject <ETagObject, OccurrenceModelProtocol, StoresUnrecognizedICS> {

	NSString* _path;
	char _currentlyModifyingDefaultAlarms;

}

@property (assign,nonatomic) char cachedServerDefaultAlarmDeleted; 
@property (assign,nonatomic) char cachedLocalDefaultAlarmDeleted; 
@property (assign) char hasAlarm; 
@property (assign) char hasAttachment; 
@property (retain) NSDate * creationDate; 
@property (retain) NSDate * lastModifiedDate; 
@property (retain) NSDate * dateStamp; 
@property (retain) NSString * notes; 
@property (retain) NSNumber * sequence; 
@property (retain) NSString * title; 
@property (retain) NSString * localUID; 
@property (retain) NSString * sharedUID; 
@property (retain) NSString * itemID; 
@property (retain) NSString * calendarServerAccess; 
@property (retain) NSURL * url; 
@property (retain) NSString * changeKey; 
@property (retain) NSDate * startDate; 
@property (retain) NSString * timeZone; 
@property (retain) CalManagedLocation * structuredLocation; 
@property (retain) NSString * relatedExternalIdentifier; 
@property (retain) NSString * universalIdentifier; 
@property (assign) char isAllDay; 
@property (assign) char syncNeeded; 
@property (retain) NSDate * syncMalfunctionDetected; 
@property (assign) char omitSyncRecord; 
@property (assign) char deleteSyncRecord; 
@property (assign) char needsServerConfirmation; 
@property (retain) NSMutableSet * customAlarms; 
@property (retain) NSMutableSet * localDefaultAlarms; 
@property (retain) NSMutableSet * serverDefaultAlarms; 
@property (retain) NSMutableSet * attachments; 
@property (retain) CalManagedCalendar * calendar; 
@property (retain) CalManagedRecurrenceSet * recurrenceSet; 
@property (assign) char hasDropBox; 
@property (retain) NSString * dropBoxLocation; 
@property (retain) NSNumber * dropBoxFreeBytes; 
@property (retain) NSURL * dropBoxLocationOverrideBaseURL; 
@property (readonly) NSString * path;                                                                   //@synthesize path=_path - In the implementation block
@property (readonly) NSString * directory; 
@property (readonly) NSString * filename; 
@property (readonly) NSString * filenameWithoutExtension; 
@property (retain,readonly) NSString * eTag; 
@property (retain,readonly) NSString * scheduleTag; 
@property (retain) NSString * serverFilename; 
@property (retain) NSString * status; 
@property (retain) NSString * previousProdID; 
@property (assign) int permission; 
@property (assign) int classification; 
@property (nonatomic,copy) NSData * structuredData; 
@property (nonatomic,copy) NSData * localStructuredData; 
@property (retain) NSString * recurrenceRule; 
@property (nonatomic,copy) NSString * contactIdentifiersString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSNumber * calendarItemPermissionNumber; 
@property (nonatomic,retain,readonly) id<CalendarModelProtocol> container; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredLocation; 
@property (nonatomic,copy,readonly) NSString * recurrenceRuleString; 
@property (nonatomic,readonly) char cachedHasAttendee; 
@property (nonatomic,readonly) char cachedHasAttachment; 
@property (nonatomic,readonly) char cachedHasAlarm; 
@property (nonatomic,readonly) char cachedIsCalendarOwnerInvitedAttendee; 
@property (nonatomic,readonly) char cachedIsCurrentUserInvitedAttendee; 
@property (nonatomic,copy,readonly) id<EKProtocolParticipant> participantForMe; 
@property (nonatomic,copy,readonly) NSString * organizerName; 
@property (nonatomic,copy,readonly) NSURL * organizerURL; 
@property (nonatomic,copy,readonly) NSString * organizerEmail; 
@property (nonatomic,copy,readonly) NSString * organizerPhoneNumber; 
@property (nonatomic,copy,readonly) NSString * organizerEncodedLikenessData; 
@property (nonatomic,readonly) char organizedByMe; 
@property (nonatomic,copy,readonly) NSString * scheduleAgentString; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZoneObject; 
@property (nonatomic,copy,readonly) NSDate * startDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char defaultAlarmWasDeleted; 
@property (nonatomic,copy,readonly) NSString * recurrenceSetID; 
@property (nonatomic,copy,readonly) NSString * relatedExternalID; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (retain) CalManagedICSElementProperties * unrecognizedICSProperties; 
+(id)entityName;
+(id)iCalendarDocumentWithCalendarItems:(id)arg1 options:(unsigned long long)arg2 ;
+(id)mastersForItems:(id)arg1 ;
+(id)fetchRequestWithLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)datesByExpandingRecurrenceRuleString:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(char)arg7 lunarCalendarString:(id)arg8 ;
+(id)recognizedICSProperties;
+(id)recognizedICSPropertyParameterMap;
+(id)masterItemWithSharedUID:(id)arg1 inCalendar:(id)arg2 ;
+(id)datesByExpandingRecurrenceRuleString:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(char)arg7 ;
+(id)icsDateForDate:(id)arg1 timeZone:(id)arg2 allDay:(char)arg3 ;
+(id)batchCalendarItemsWithSharedUIDsHelper:(id)arg1 inCalendar:(id)arg2 inContext:(id)arg3 ;
+(void)_adjustTimeZoneString:(id*)arg1 andRecurrenceDate:(id*)arg2 forAllDay:(char)arg3 ;
+(void)withCalendarInTimezoneString:(id)arg1 do:(/*^block*/id)arg2 ;
+(id)_formBirthdayFromBirthDate:(id)arg1 calendar:(id)arg2 ;
+(id)_ruleForRuleString:(id)arg1 ;
+(char)_isLunarBirthdayRecurrenceRule:(id)arg1 lunarCalendarString:(id)arg2 ;
+(id)_datesByExpandingLunarBirthdayFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3 timeZoneString:(id)arg4 recurrenceStartDate:(id)arg5 isAllDay:(char)arg6 lunarCalendarString:(id)arg7 ;
+(id)_datesByExpandingFastPathRecurrenceRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(char)arg7 ;
+(id)_datesByExpandingNonFastPathRecurrenceRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 duration:(double)arg4 timeZoneString:(id)arg5 recurrenceStartDate:(id)arg6 isAllDay:(char)arg7 ;
+(id)fetchRequestWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchRequestWithSharedUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)masterItemWithLocalUID:(id)arg1 inCalendar:(id)arg2 ;
+(id)batchCalendarItemsWithSharedUIDs:(id)arg1 inCalendar:(id)arg2 inContext:(id)arg3 ;
+(id)calendarItemsWithFilenames:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)calendarItemsWithSharedUID:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)calendarItemUIDFromCalendarItemPath:(id)arg1 ;
+(id)_icsStringForDateTime:(id)arg1 floating:(char)arg2 ;
-(id<CalendarModelProtocol>)container;
-(NSString *)path;
-(id)URL;
-(NSString *)directory;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)filename;
-(NSDate *)creationDate;
-(char)isFloating;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(char)allDay;
-(void)setETag:(NSString *)arg1 ;
-(id)derivedAlarms;
-(void)willRefresh:(char)arg1 ;
-(void)willSave;
-(void)prepareForDeletion;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(NSString *)organizerEmail;
-(char)isDefaultAlarmDeleted;
-(void)awakeFromFetch;
-(void)setScheduleTag:(NSString *)arg1 ;
-(id<EKProtocolParticipant>)participantForMe;
-(id)rawTitle;
-(id)priorityNumber;
-(id)alarmSet;
-(id)attendeeSet;
-(id)attachmentSet;
-(char)isReminder;
-(char)isEvent;
-(id)_nsCalendar;
-(NSDate *)recurrenceDateUnadjustedFromUTC;
-(NSNumber *)calendarItemPermissionNumber;
-(id<EKProtocolStructuredLocation>)ekStructuredLocation;
-(NSString *)recurrenceRuleString;
-(char)cachedHasAttendee;
-(char)cachedHasAttachment;
-(char)cachedHasAlarm;
-(char)cachedIsCalendarOwnerInvitedAttendee;
-(char)cachedIsCurrentUserInvitedAttendee;
-(NSString *)organizerName;
-(NSURL *)organizerURL;
-(NSString *)organizerPhoneNumber;
-(NSString *)organizerEncodedLikenessData;
-(char)organizedByMe;
-(NSString *)scheduleAgentString;
-(NSTimeZone *)timeZoneObject;
-(NSDate *)startDateUnadjustedFromUTC;
-(char)defaultAlarmWasDeleted;
-(NSString *)recurrenceSetID;
-(NSString *)relatedExternalID;
-(void)setScheduleAgentString:(NSString *)arg1 ;
-(void)setDefaultAlarmWasDeleted:(char)arg1 ;
-(void)setEkStructuredLocation:(id<EKProtocolStructuredLocation>)arg1 ;
-(void)setPriorityNumber:(id)arg1 ;
-(id)allAlarms;
-(void)setOrganizerName:(NSString *)arg1 ;
-(void)setOrganizerURL:(NSURL *)arg1 ;
-(void)setOrganizerEncodedLikenessData:(NSString *)arg1 ;
-(void)setOrganizerPhoneNumber:(NSString *)arg1 ;
-(void)setTimeZoneObject:(NSTimeZone *)arg1 ;
-(void)setStartDateUnadjustedFromUTC:(NSDate *)arg1 ;
-(void)setRecurrenceRuleString:(NSString *)arg1 ;
-(id)iCalendarDocumentWithOptions:(unsigned long long)arg1 ;
-(void)setRelatedExternalID:(NSString *)arg1 ;
-(id)masterItem;
-(void)updateAlarmDerivedProperties;
-(void)updateAttachmentDerivedData;
-(char)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 ;
-(void)updateWithEntity:(id)arg1 inCalendar:(id)arg2 ;
-(char)isExchangeCompatible;
-(void)makeExchangeCompatible;
-(id)_makeExchangeCompatible;
-(id)startDateAdjustedFromUTC;
-(id)occurrenceID;
-(char)shouldWarnUserOnMoveToExchangeCalendar:(id)arg1 ;
-(NSString *)filenameWithoutExtension;
-(char)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 deletionBlock:(/*^block*/id)arg6 ;
-(void)deleteDefaultAlarms;
-(void)undeleteDefaultAlarms;
-(id)attachmentsLocation;
-(id)attachmentWithFileName:(id)arg1 ;
-(NSURL *)dropBoxLocationOverrideBaseURL;
-(void)setDropBoxLocationOverrideBaseURL:(NSURL *)arg1 ;
-(id)exchangeAlarm;
-(id)mostRecentAlarmAcknowledgementForSet:(id)arg1 ;
-(void)setServerFilename:(NSString *)arg1 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(void)_updateAfterStartDateWithComponent:(id)arg1 ;
-(void)updateETag:(id)arg1 ;
-(void)updateScheduleTag:(id)arg1 ;
-(char)importRecurrenceRuleSetFromRelatedTo:(id)arg1 inCalendar:(id)arg2 allowChangeOfSharedUID:(char)arg3 inContext:(id)arg4 ;
-(id)mostRecentAlarmAcknowledgement;
-(void)_importAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3 ;
-(void)_removeDuplicateAttachments:(id)arg1 ;
-(void)_removeAttachmentsWithFileURLs:(id)arg1 ;
-(void)_truncateToMaxNumberOfAttachmentsIfNecessary:(id)arg1 ;
-(void)_preprocessAttachmentsFromComponent:(id)arg1 ;
-(void)importManagedAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3 ;
-(void)_importNonManagedAttachmentsFromComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3 ;
-(void)_importNonManagedAttachment:(id)arg1 fromComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 withOldAttachments:(id)arg5 ;
-(void)_importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 omitSyncRecord:(char)arg6 ;
-(void)applyLocalAcknowledgedmentToServer;
-(id)derivedLocalDefaultAlarms;
-(id)derivedServerDefaultAlarms;
-(id)computeChecksum;
-(id)enclosingSource;
-(id)keysOnlyRelevantToNetworkDetails;
-(id)contextForValidationError;
-(id)attributesToCompareForMerge;
-(void)clearETags;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(id)relationshipsToCompareForMerge;
-(id)derivedAlarmsProcessChanges:(char)arg1 ;
-(id)derivedServerDefaultAlarmsProcessChanges:(char)arg1 ;
-(void)_updateAlarmDerivedPropertiesForSave;
-(char)isLocalDefaultAlarmDeleted;
-(char)isServerDefaultAlarmDeleted;
-(id)actualAlarms;
-(void)refreshObjects:(id)arg1 ;
-(id)defaultAlarmSortDescriptors;
-(id)defaultAlarmsBasedOnItemAndPreferences;
-(void)derivedAlarmsHelperForDefaultAlarmReferences:(id)arg1 existingDefaultAlarms:(id)arg2 explicitlyFromServer:(char)arg3 processChanges:(char)arg4 ;
-(id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(char)arg1 ;
-(id)derivedLocalDefaultAlarmsProcessChanges:(char)arg1 ;
-(char)defaultAlarmsDeletedHelper:(id)arg1 ;
-(void)deleteDefaultAlarmsHelper:(id)arg1 forType:(int)arg2 ;
-(void)undeleteDefaultAlarmsHelper:(id)arg1 ;
-(id)mostRecentLocalDefaultAlarmAcknowledgement;
-(void)applyAcknowledgeDate:(id)arg1 toAlarms:(id)arg2 ;
-(id)mostRecentServerDefaultAlarmAcknowledgement;
-(void)updateAttachmentDerivedDataProcessChanges:(char)arg1 ;
-(char)didPathChange;
-(void)refreshPath;
-(void)refreshRelationships;
-(char)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)alarmLogHelper:(id)arg1 ;
-(long long)customAlarmCount;
-(void)applyServerAcknowledgementToLocal;
-(id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3 ;
-(id)earliestAlarmTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)committedMasterItem;
-(void)setCalendarItemPermissionNumber:(NSNumber *)arg1 ;
-(void)updateWithEntity:(id)arg1 alarms:(char)arg2 inCalendar:(id)arg3 ;
-(void)_updateWithEntity:(id)arg1 alarms:(char)arg2 omitSyncRecord:(char)arg3 inCalendar:(id)arg4 processChanges:(char)arg5 ;
-(Class)entityClass;
-(char)isValidManagedObject;
-(void)processForType:(int)arg1 inManagedObjectContext:(id)arg2 ;
-(void)processForType:(int)arg1 forParentCR:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(int)migrateMatchType;
-(id)migrateCanonicalForm;
-(id)_uidKeyWithPhantomDetails;
-(char)isScheduledEventWithKnownBadUID;
-(void)_uploadAttachmentsInContext:(id)arg1 ;
-(void)_addOrganizerScheduleAgentClient;
@end

