/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKBackingStore.h>

@protocol OS_dispatch_queue;
@class EKBackingStoreAccounting, CalAccumulatingQueue, NSDate, NSObject, CalAgentLinkQueueStatusOperation;

@interface EKCalendarStoreBackingStore : EKBackingStore {

	char _isPrefetching;
	char _persistenceAvailable;
	EKBackingStoreAccounting* _accounting;
	CalAccumulatingQueue* _externalChangeQueue;
	NSDate* __creationTimestamp;
	NSObject*<OS_dispatch_queue> _queueStatusQueue;
	NSObject*<OS_dispatch_queue> _retryQueue;
	CalAgentLinkQueueStatusOperation* _queueStatusOperation;
	NSDate* _lastExternalChangeProcessed;
	double _ensureExternalUpdateInterval;

}

@property (retain) EKBackingStoreAccounting * accounting;                                //@synthesize accounting=_accounting - In the implementation block
@property (assign) char isPrefetching;                                                   //@synthesize isPrefetching=_isPrefetching - In the implementation block
@property (assign) char persistenceAvailable;                                            //@synthesize persistenceAvailable=_persistenceAvailable - In the implementation block
@property (retain) CalAccumulatingQueue * externalChangeQueue;                           //@synthesize externalChangeQueue=_externalChangeQueue - In the implementation block
@property (retain) NSDate * _creationTimestamp;                                          //@synthesize _creationTimestamp=__creationTimestamp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queueStatusQueue;              //@synthesize queueStatusQueue=_queueStatusQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> retryQueue;                    //@synthesize retryQueue=_retryQueue - In the implementation block
@property (retain) CalAgentLinkQueueStatusOperation * queueStatusOperation;              //@synthesize queueStatusOperation=_queueStatusOperation - In the implementation block
@property (retain) NSDate * lastExternalChangeProcessed;                                 //@synthesize lastExternalChangeProcessed=_lastExternalChangeProcessed - In the implementation block
@property (assign) double ensureExternalUpdateInterval;                                  //@synthesize ensureExternalUpdateInterval=_ensureExternalUpdateInterval - In the implementation block
+(id)createNonPartialFrozenObjectForPartialObject:(id)arg1 withFrozenClass:(Class)arg2 ;
+(double)defaultUpdateInterval;
+(id)backingStoreLogHandle;
+(void)_addPrefetchRelationshipsForCalendarItemFetch:(id)arg1 prefetchItemsThatSupportFaulting:(char)arg2 ;
+(void)_updateEventAvailabilityForPromotedSuggestedEvent:(id)arg1 ;
+(long long)_coercedEventAvailabilityForDesiredAvailability:(long long)arg1 supportedAvailabilities:(unsigned long long)arg2 ;
+(id)externalChangesLogHandle;
+(void)_processExternalChangeHelperPopulateChangedBackingSources:(id*)arg1 newBackingSources:(id*)arg2 backingStore:(id)arg3 ;
+(void)_processExternalChangeHelperPopulateChangedBackingCalendars:(id*)arg1 newBackingCalendars:(id*)arg2 withNewBackingSources:(id)arg3 backingStore:(id)arg4 ;
+(void)_processExternalChangeHelperPopulateChangedBackingCalendarItems:(id*)arg1 newBackingCalendarItems:(id*)arg2 withNewBackingCalendars:(id)arg3 backingStore:(id)arg4 ;
+(void)_updateOccurrenceCacheForChangedBackingCalendarItems:(id)arg1 backingStore:(id)arg2 ;
+(id)_createNonPartialFrozenObjectForPartialObject:(id)arg1 inManagedObjectContext:(id)arg2 withFrozenClass:(Class)arg3 backingStore:(id)arg4 ;
+(void)_addPrefetchRelationshipsForCalendarItemFetch:(id)arg1 ;
+(id)_predicateForEventsInFuture;
+(void)_resetExistingStoresForUnitTests;
+(id)_readOnlyContextToleratingInaccessibleFault;
-(void)dealloc;
-(id)init;
-(id)allEvents;
-(NSDate *)_creationTimestamp;
-(id)initWithBackingStore:(id)arg1 ;
-(char)shouldPermitOrganizerEmailFromJunkChecks:(id)arg1 ;
-(char)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg1 ;
-(id)createNonPartialFrozenObjectForPartialObject:(id)arg1 withFrozenClass:(Class)arg2 ;
-(id)_forceUpdateBackingStoreItemsWithObjectIDs:(id)arg1 ;
-(id)remindersWithCalendarIdentifiers:(id)arg1 ;
-(id)allReminders;
-(void)refreshBackingStore;
-(void)refreshSources;
-(id)acquireDefaultCalendarForEntityType:(unsigned long long)arg1 ;
-(id)defaultCalendarForEntityType:(unsigned long long)arg1 ;
-(void)setDefaultCalendarForNewEvents:(id)arg1 ;
-(void)setDefaultCalendarForNewReminders:(id)arg1 ;
-(id)suggestedEventCalendar;
-(void)insertSuggestedEventCalendar;
-(id)naturalLanguageSuggestedEventCalendar;
-(id)eventsWithCalendarIdentifiers:(id)arg1 ;
-(id)_forceUpdateBackingStoreItemsWithObjectIDs:(id)arg1 inContext:(id)arg2 ;
-(void)_forceUpdateBackingStoreCalendarsWithObjectIDs:(id)arg1 inContext:(id)arg2 ;
-(id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 accessRequestedForEvents:(char)arg3 accessRequestedForReminders:(char)arg4 asyncWithCompletion:(/*^block*/id)arg5 ;
-(id)backingStoreAvailableGroup;
-(void)_emptyCache;
-(id)remindersWithDueDatesInRange:(id)arg1 withCalendarIdentifiers:(id)arg2 withCompletion:(id)arg3 ;
-(id)remindersWithIsCompleted:(char)arg1 maxResults:(unsigned long long)arg2 withCalendarIdentifiers:(id)arg3 ;
-(id)lookupItemsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 ;
-(id)lookupItemsWithExternalIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_expandGeneralLookupPredicate:(id)arg1 ;
-(id)_expandEventRangePredicate:(id)arg1 ;
-(id)_expandEventRangePredicateReturningCounts:(id)arg1 ;
-(id)_createSubscribedCalendarSource;
-(id)_createBirthdayCalendarSource;
-(char)_commit:(id*)arg1 ;
-(id)cachedRange;
-(void)pruneCacheForRange:(id)arg1 ;
-(void)pruneCacheForDisjointRange:(id)arg1 ;
-(void)pruneCacheForDisjointRange:(id)arg1 occurrencesToKeep:(id)arg2 ;
-(id)remindersWithDueDates;
-(id)remindersWithContactIdentifier:(id)arg1 ;
-(char)eventsExistOnCalendar:(id)arg1 ;
-(char)futureScheduledEventsExistOnCalendar:(id)arg1 ;
-(char)eventsMarkedScheduleAgentClientExistOnCalendar:(id)arg1 ;
-(void)insertNaturalLanguageSuggestedEventCalendar;
-(id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 asyncWithCompletion:(/*^block*/id)arg3 ;
-(id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 accessRequestedForEvents:(char)arg3 accessRequestedForReminders:(char)arg4 asyncWithCompletion:(/*^block*/id)arg5 orWithExistingStore:(id)arg6 ;
-(id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 asyncWithCompletion:(/*^block*/id)arg3 orWithExistingStore:(id)arg4 ;
-(void)setLastExternalChangeProcessed:(NSDate *)arg1 ;
-(void)_processExternalChangeWithTags:(id)arg1 context:(id)arg2 ;
-(void)_doBackgroundInitializationWork;
-(void)_updatePersistenceAvailability;
-(void)_databaseChangedExternally:(id)arg1 ;
-(void)_reminderAlertFired:(id)arg1 ;
-(void)_reminderBecameOverdue:(id)arg1 ;
-(void)_handleTimeZoneChange:(id)arg1 ;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_processErrorChange:(id)arg1 ;
-(EKBackingStoreAccounting *)accounting;
-(void)setAccounting:(EKBackingStoreAccounting *)arg1 ;
-(id)_fetchFrozenEventsInCalendars:(id)arg1 ;
-(id)_fetchFrozenRemindersInCalendars:(id)arg1 ;
-(id)_fetchFrozenEventsWithCalendarIdentifiers:(id)arg1 ;
-(id)_fetchFrozenRemindersWithCalendarIdentifiers:(id)arg1 ;
-(id)_reminderPredicateWithAnyDueDate;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 ;
-(id)_reminderPredicateForRemindersWithContactIdentifiers;
-(id)_reminderPredicateWithAnyCompletionDate;
-(id)_reminderPredicateForIncompleteReminders;
-(id)_calendarItemPredicateWithItemIdentifiers:(id)arg1 ;
-(id)_eventItemPredicateWhereMyAttendeePositivelyRepliedToEventWithEmail:(id)arg1 ;
-(id)_predicateForBackingCalendars;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 withCalendarPredicate:(id)arg3 withFetchLimit:(id)arg4 ;
-(id)_eventItemPredicateEventsWhereMyAttendeeInvitedEmail:(id)arg1 ;
-(id)_eventItemPredicateWhereMyAttendeePositivelyRepliedToEventWithPhoneNumber:(id)arg1 ;
-(id)_eventItemPredicateEventsWhereMyAttendeeInvitedPhoneNumber:(id)arg1 ;
-(id)_calendarItemPredicateWithExternalIdentifiers:(id)arg1 ;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 withCalendarPredicate:(id)arg3 withFetchLimit:(id)arg4 forceNonPartial:(char)arg5 ;
-(id)_fetchEventsWithGeneralLookupPredicate:(id)arg1 ;
-(id)_expandEventRangePredicate:(id)arg1 countsOnly:(char)arg2 ;
-(id)_fetchFrozenMasterOrDetachedEventsInRange:(id)arg1 inCalendars:(id)arg2 forceNonPartial:(char)arg3 ;
-(void)_kickOffEventPrefetchIfNecessary:(id)arg1 ;
-(char)isPrefetching;
-(id)_expandedRangeForPredicate:(id)arg1 ;
-(void)setIsPrefetching:(char)arg1 ;
-(id)_eventItemPredicateWhereMyAttendeePositivelyRepliedToEventWithContactInfo:(id)arg1 withOrganizerField:(id)arg2 attendeeField:(id)arg3 ;
-(id)_eventItemPredicateEventsWhereMyAttendeeInvitedContactInfo:(id)arg1 withOrganizerField:(id)arg2 attendeeField:(id)arg3 ;
-(void)_addExceptionsForItem:(id)arg1 inRange:(id)arg2 toUpdates:(id)arg3 includeDetached:(char)arg4 ;
-(id)_calendarItemPredicateWithCalendarIdentifiers:(id)arg1 ;
-(id)_fetchFrozenCalendarItemsOfType:(unsigned long long)arg1 withCoreDataPredicate:(id)arg2 withCalendarPredicate:(id)arg3 ;
-(Class)_coreDataClassFromMask:(unsigned long long)arg1 ;
-(void)_addExdatesForItem:(id)arg1 toUpdates:(id)arg2 ;
-(id)_fetchFrozenMasterOrDetachedEventsInRange:(id)arg1 inCalendars:(id)arg2 ;
-(id)_predicateForEventsInRange:(id)arg1 calendars:(id)arg2 ;
-(void)_addExceptionsForItem:(id)arg1 inRange:(id)arg2 toUpdates:(id)arg3 ;
-(id)_defaultCalendarForEntityType:(unsigned long long)arg1 createIfNone:(char)arg2 ;
-(id)_getDefaultCalendarIdentifierForEntityType:(unsigned long long)arg1 ;
-(id)_firstWriteableCalendarPreferringServerBasedSupportingEntityType:(unsigned long long)arg1 ;
-(id)_createLocalDefaultCalendarForType:(unsigned long long)arg1 ;
-(void)_setDefaultCalendar:(id)arg1 forEntityType:(unsigned long long)arg2 ;
-(id)_createLocalCalendarForType:(unsigned long long)arg1 title:(id)arg2 commit:(char)arg3 ;
-(id)_calendarPredicateWithCalendarIdentifiers:(id)arg1 ;
-(id)_coreDataCalendarsFromCalendarIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(void)_updateManagedObjectIDsForChangedObjects;
-(char)_persistToContext:(id)arg1 error:(id*)arg2 ;
-(void)_updateFromContext:(id)arg1 ;
-(char)_persistSourcesInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistCalendarsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistItemsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistNotificationsInContext:(id)arg1 error:(id*)arg2 ;
-(void)_updateSourcesFromContext:(id)arg1 ;
-(void)_updateCalendarsFromContext:(id)arg1 ;
-(void)_updateItemsFromContext:(id)arg1 ;
-(void)_updateNotificationsFromContext:(id)arg1 ;
-(void)_notifySuggestionsFromContext:(id)arg1 ;
-(char)_persistCreatedSourcesInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistUpdatedSourcesInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistDeletedSourcesInContext:(id)arg1 error:(id*)arg2 ;
-(char)_changeGroup:(id)arg1 withSource:(id)arg2 error:(id*)arg3 ;
-(char)_removeGroup:(id)arg1 withSource:(id)arg2 error:(id*)arg3 ;
-(char)_persistCreatedCalendarsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistUpdatedCalendarsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistDeletedCalendarsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_changeCalendar:(id)arg1 withCalendar:(id)arg2 error:(id*)arg3 ;
-(char)_removeCalendar:(id)arg1 withCalendar:(id)arg2 error:(id*)arg3 ;
-(char)_persistCreatedItemsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistUpdatedItemsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistDeletedItemsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistExceptionsInContext:(id)arg1 error:(id*)arg2 ;
-(id)_sortedCreatedItems:(id)arg1 ;
-(char)_changeItem:(id)arg1 withItem:(id)arg2 error:(id*)arg3 ;
-(char)_isSuggestedEventCalendarChangeOriginalItem:(id)arg1 changedItem:(id)arg2 ;
-(char)_isSuggestedEventDeletionForItem:(id)arg1 ;
-(char)_removeItem:(id)arg1 withItem:(id)arg2 error:(id*)arg3 ;
-(char)_notifySuggestionsHelperForEvent:(id)arg1 eventKitAction:(id)arg2 loggingObject:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(char)_persistCreatedNotificationsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistAcknowledgedNotificationsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistUpdatedNotificationsInContext:(id)arg1 error:(id*)arg2 ;
-(char)_persistMovedNotificationsInContext:(id)arg1 error:(id*)arg2 ;
-(void)_deleteMessages:(id)arg1 ;
-(char)_notifySuggestionsOfSuggestedEventCalendarChangeForEvent:(id)arg1 ;
-(char)_notifySuggestionsOfSuggestedEventDeletionForEvent:(id)arg1 ;
-(void)_registerForCreatingChangeRequestsWithCalendar:(id)arg1 ;
-(char)_changeShareesOnCalManagedCalendar:(id)arg1 fromEKCalendar:(id)arg2 error:(id*)arg3 ;
-(char)_changeAlarmsOnCalManagedCalendar:(id)arg1 fromEKCalendar:(id)arg2 error:(id*)arg3 ;
-(char)_moveItem:(id)arg1 withItem:(id)arg2 toCalendar:(id)arg3 ;
-(char)_changeAlarmsOnCalManagedCalendarItem:(id)arg1 fromEKCalendarItem:(id)arg2 error:(id*)arg3 ;
-(char)_changeRecurrenceSetOnCalManagedCalendarItem:(id)arg1 fromEKCalendarItem:(id)arg2 error:(id*)arg3 ;
-(char)_changeEvent:(id)arg1 withEvent:(id)arg2 error:(id*)arg3 ;
-(char)_changeTask:(id)arg1 withReminder:(id)arg2 error:(id*)arg3 ;
-(char)_changeAttendeesOnCalManagedEvent:(id)arg1 fromEKEvent:(id)arg2 error:(id*)arg3 ;
-(char)_changeAttachmentsOnCalManagedEvent:(id)arg1 fromEKEvent:(id)arg2 error:(id*)arg3 ;
-(char)_updateUnrecognizedICSOnCalManagedEvent:(id)arg1 fromEvent:(id)arg2 ;
-(char)_updateMultiValueRelationshipObjectsOnCalManagedObject:(id)arg1 fromEKObject:(id)arg2 usingRelationKey:(id)arg3 uniqueIdentifierKeyForRelationshipObject:(id)arg4 createNewManagedObjectBlock:(/*^block*/id)arg5 applyChangesFromEKObjectToCalManagedObjectBlock:(/*^block*/id)arg6 removeAndAddNewlyCreatedObjectBlock:(/*^block*/id)arg7 deleteManagedObjectBlock:(/*^block*/id)arg8 context:(id)arg9 error:(id*)arg10 ;
-(id)_getPathInCacheForAttachment:(id)arg1 onEvent:(id)arg2 ;
-(char)_needToSetAttachmentDeletionEtagForEvent:(id)arg1 ;
-(void)_prepAttachment:(id)arg1 forUploadingForEvent:(id)arg2 ;
-(void)_removeAttachment:(id)arg1 fromEvent:(id)arg2 ;
-(id)_setOfObjectsFromCalendarItemDictionary:(id)arg1 ;
-(char)_changedCalendarItemsContainsSuggestedEventInSet:(id)arg1 ;
-(id)_changedCalendarItemIdentifiersForChangedCalendarItemsInSet:(id)arg1 ;
-(char)_shouldHandleNotification:(id)arg1 ;
-(id)_updateTagsForNotification:(id)arg1 contextForTags:(id*)arg2 ;
-(char)_notificationTagsIndicateCacheReset:(id)arg1 ;
-(CalAccumulatingQueue *)externalChangeQueue;
-(char)_shouldExecuteBlockImmediately;
-(NSObject*<OS_dispatch_queue>)queueStatusQueue;
-(void)_doQueueStatusCheck;
-(double)ensureExternalUpdateInterval;
-(NSDate *)lastExternalChangeProcessed;
-(CalAgentLinkQueueStatusOperation *)queueStatusOperation;
-(void)setQueueStatusOperation:(CalAgentLinkQueueStatusOperation *)arg1 ;
-(void)_retryUpdateForDatabaseChanged;
-(char)_queueRetryIfReceiptIsStale:(long long)arg1 tags:(id)arg2 ;
-(id)_forceUpdateBackingStoreItemsWithObjectIDs:(id)arg1 inContext:(id)arg2 withChangedCalendarItems:(id)arg3 alwaysAddObjectsToCache:(char)arg4 createPartialObject:(char)arg5 error:(id*)arg6 ;
-(id)_changedCalendarItemIdentifiersForChangedCalendarItems:(id)arg1 ;
-(char)_changedCalendarItemsContainsSuggestedEvent:(id)arg1 ;
-(char)_processExternalChangeHelperUpdateBackingStoreWithTags:(id)arg1 changedBackingSources:(id)arg2 changedBackingCalendars:(id)arg3 changedBackingCalendarItems:(id)arg4 newBackingSources:(id)arg5 newBackingCalendars:(id)arg6 newBackingCalendarItems:(id)arg7 accountingReceiptGeneration:(long long)arg8 copiedBackingStore:(id)arg9 ;
-(void)_bumpBackoff;
-(void)_queueRetryForOldReceipt:(long long)arg1 currentReceipt:(long long)arg2 tags:(id)arg3 backoff:(unsigned long long)arg4 ;
-(id)_fetchUpdatedCalendarItemsForItems:(id)arg1 updatedCalendars:(id)arg2 accountingInfo:(id)arg3 ;
-(id)_changesFromOldBackingObjects:(id)arg1 toNewBackingObjects:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)retryQueue;
-(char)_objectIsDeletedInCoreData:(id)arg1 ;
-(void)_fetchUpdatedRemindersForUpdatedCalendars:(id)arg1 updatedCalendarItems:(id)arg2 oldCalendarItems:(id)arg3 accountingInfo:(id)arg4 ;
-(void)_fetchUpdatedEventsForUpdatedCalendars:(id)arg1 updatedCalendarItems:(id)arg2 oldCalendarItems:(id)arg3 accountingInfo:(id)arg4 ;
-(id)_calendarItemPredicateWithItemIdentifiers:(id)arg1 calendarIdentifiers:(id)arg2 ;
-(id)_coreDataEventCalendarsFromCalendarIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(id)_forceUpdateBackingStoreItemsWithObjectIDs:(id)arg1 inContext:(id)arg2 withChangedCalendarItems:(id)arg3 error:(id*)arg4 ;
-(id)_createFrozenItemForManagedItem:(id)arg1 createPartialObject:(char)arg2 ;
-(char)addEventAndAnyExceptionsForEvent:(id)arg1 withManagedObject:(id)arg2 toAddedEvents:(id)arg3 alwaysAddObjectsToCache:(char)arg4 ;
-(char)addReminder:(id)arg1 toAddedReminders:(id)arg2 alwaysAddObjectsToCache:(char)arg3 ;
-(void)_deleteManagedObjectIDsFromCache:(id)arg1 withItemsToDelete:(id)arg2 ;
-(id)_managedObjectsForClass:(Class)arg1 withManagedObjectIDs:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)_fetchFrozenMasterOrDetachedEventsInRange:(id)arg1 ;
-(id)_calendarPredicateWithCalendar:(id)arg1 ;
-(id)_coreDataSourcesFromSourceIdentifiers:(id)arg1 inContext:(id)arg2 ;
-(void)_forceUpdateBackingStoreCalendarsWithObjectIDs:(id)arg1 ;
-(void)_forceUpdateBackingStoreSourcesWithObjectIDs:(id)arg1 ;
-(char)persistenceAvailable;
-(void)setPersistenceAvailable:(char)arg1 ;
-(void)setExternalChangeQueue:(CalAccumulatingQueue *)arg1 ;
-(void)set_creationTimestamp:(NSDate *)arg1 ;
-(void)setQueueStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRetryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEnsureExternalUpdateInterval:(double)arg1 ;
@end

