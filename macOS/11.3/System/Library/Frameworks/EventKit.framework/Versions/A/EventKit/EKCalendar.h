/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSString, NSURL, NSSet, EKSource, NSColor;

@interface EKCalendar : EKObject {

	char allowsContentModifications;
	char cachedHasSharees;
	char defaultOrganizerIsMeForNewItems;
	char isMarkedUndeletable;
	char isMarkedImmutableSharees;
	char isShareable;
	char isSubscribed;
	char _subscribed;
	char _allowsScheduling;
	char _allowEvents;
	char _allowReminders;
	char _isDefaultSchedulingCalendar;
	char _isDistinguishedExchangeCalendar;
	char _isFamilyCalendar;
	char _isFacebookBirthdayCalendar;
	char _isRenameable;
	char _isColorEditable;
	char _isSubscribedHolidayCalendar;
	char _isSuggestedEventCalendar;
	char _isNaturalLanguageSuggestedEventCalendar;
	NSString* calendarIdentifier;
	NSURL* defaultOrganizerAddressForNewItems;
	NSString* defaultOrganizerNameForNewItems;
	NSString* defaultOrganizerEncodedLikenessDataForNewItems;
	NSString* defaultOrganizerEmailForNewItems;
	NSString* defaultOrganizerPhoneNumberForNewItems;
	long long maxAttendees;
	NSString* path;
	NSURL* prePublishURL;
	NSURL* subscriptionURL;
	NSSet* sharedOwnerAddresses;
	NSString* sharingStatusString;
	NSString* serverPath;
	NSString* _sharedOwnerName;
	NSString* _sharedOwnerAddress;

}

@property (assign,nonatomic) char isIgnoringEventAlerts; 
@property (assign,nonatomic) char isIgnoringSharedCalendarNotifications; 
@property (nonatomic,readonly) char allowsIgnoringSharedEventChangeNotifications; 
@property (assign,nonatomic) char canBeShared; 
@property (nonatomic,readonly) char hasEvents; 
@property (assign,nonatomic) char canBePublished; 
@property (assign,nonatomic) char isPublished; 
@property (assign,getter=isSharingInvitation,nonatomic) char sharingInvitation; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (getter=isHidden,nonatomic,readonly) char hidden; 
@property (nonatomic,copy) NSString * sharedOwnerName;                                         //@synthesize sharedOwnerName=_sharedOwnerName - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerAddress;                                      //@synthesize sharedOwnerAddress=_sharedOwnerAddress - In the implementation block
@property (assign,nonatomic) char allowsScheduling;                                            //@synthesize allowsScheduling=_allowsScheduling - In the implementation block
@property (assign,nonatomic) char allowEvents;                                                 //@synthesize allowEvents=_allowEvents - In the implementation block
@property (assign,nonatomic) char allowReminders;                                              //@synthesize allowReminders=_allowReminders - In the implementation block
@property (assign,nonatomic) char isDefaultSchedulingCalendar;                                 //@synthesize isDefaultSchedulingCalendar=_isDefaultSchedulingCalendar - In the implementation block
@property (assign,nonatomic) char isDistinguishedExchangeCalendar;                             //@synthesize isDistinguishedExchangeCalendar=_isDistinguishedExchangeCalendar - In the implementation block
@property (assign,nonatomic) char isAffectingAvailability; 
@property (assign,nonatomic) char isFamilyCalendar;                                            //@synthesize isFamilyCalendar=_isFamilyCalendar - In the implementation block
@property (assign,nonatomic) char isFacebookBirthdayCalendar;                                  //@synthesize isFacebookBirthdayCalendar=_isFacebookBirthdayCalendar - In the implementation block
@property (assign,nonatomic) char isRenameable;                                                //@synthesize isRenameable=_isRenameable - In the implementation block
@property (assign,nonatomic) char isColorEditable;                                             //@synthesize isColorEditable=_isColorEditable - In the implementation block
@property (assign,nonatomic) char isSubscribedHolidayCalendar;                                 //@synthesize isSubscribedHolidayCalendar=_isSubscribedHolidayCalendar - In the implementation block
@property (assign,nonatomic) char isSuggestedEventCalendar;                                    //@synthesize isSuggestedEventCalendar=_isSuggestedEventCalendar - In the implementation block
@property (assign,nonatomic) char isNaturalLanguageSuggestedEventCalendar;                     //@synthesize isNaturalLanguageSuggestedEventCalendar=_isNaturalLanguageSuggestedEventCalendar - In the implementation block
@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) char subscribed;                            //@synthesize subscribed=_subscribed - In the implementation block
@property (getter=isImmutable,nonatomic,readonly) char immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,copy) NSColor * color; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(Class)frozenClass;
+(id)knownImmutableKeys;
+(id)uniqueIdentifierForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)singleValueDiffKeys;
+(id)multiValueDiffKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownSingleValueKeys;
+(id)orderSortDescriptors;
+(id)batchChangeNotificationName;
+(id)calendarWithCalendar:(id)arg1 eventStore:(id)arg2 ;
+(id)_calendarIdentifiersForCalendars:(id)arg1 ;
+(id)typeDescription:(long long)arg1 ;
+(char)isWeakRelationship;
+(char)_calendarsContainsSharedToMeCalendar:(id)arg1 ;
+(char)_calendarsAllowSharedSchedulingIfNeeded:(id)arg1 ;
+(char)_calendarsAreInSameSource:(id)arg1 ;
+(char)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)arg1 ;
-(char)isHidden;
-(long long)type;
-(NSString *)calendarIdentifier;
-(id)path;
-(EKSource *)source;
-(char)isDeletable;
-(void)setTitle:(NSString *)arg1 ;
-(char)isShareable;
-(char)_reset;
-(char)remove:(id*)arg1 ;
-(NSString *)title;
-(CGColorRef)CGColor;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(char)isEditable;
-(void)setSource:(EKSource *)arg1 ;
-(void)refetch;
-(char)validate:(id*)arg1 ;
-(long long)notificationCount;
-(id)typeString;
-(void)setNotes:(id)arg1 ;
-(id)notes;
-(unsigned long long)sharingStatus;
-(char)isSuggestedEventCalendar;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(void)addAlarms:(id)arg1 ;
-(void)removeAlarms:(id)arg1 ;
-(id)externalURI;
-(char)isSubscribed;
-(char)isSubscribed;
-(char)isImmutable;
-(char)hasEvents;
-(char)isPublished;
-(void)setDisplayOrder:(int)arg1 ;
-(int)displayOrder;
-(char)canBePublished;
-(char)isFamilyCalendar;
-(char)isMarkedUndeletable;
-(char)isMarkedImmutableSharees;
-(id)publishURL;
-(id)prePublishURL;
-(id)sharees;
-(long long)maxAttendees;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(id)colorString;
-(void)setPublishURL:(id)arg1 ;
-(void)setCanBePublished:(char)arg1 ;
-(char)canBeShared;
-(void)setCanBeShared:(char)arg1 ;
-(void)setSharees:(id)arg1 ;
-(void)setIsFamilyCalendar:(char)arg1 ;
-(char)isAffectingAvailability;
-(void)setColorString:(id)arg1 ;
-(void)setIsRenameable:(char)arg1 ;
-(char)isRenameable;
-(void)setIsPublished:(char)arg1 ;
-(void)setIsAffectingAvailability:(char)arg1 ;
-(id)subscriptionURL;
-(unsigned long long)supportedEventAvailabilities;
-(char)allowsContentModifications;
-(char)isBirthday;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5 ;
-(char)isCurrentUserCalendarOwner;
-(char)_validateDeletable:(id*)arg1 ;
-(id)defaultOrganizerAddressForNewItems;
-(id)defaultOrganizerEmailForNewItems;
-(id)defaultOrganizerPhoneNumberForNewItems;
-(id)containerSource;
-(char)_validateAccessConsent:(id*)arg1 ;
-(char)_validateEntityTypeIsSupported:(id*)arg1 ;
-(char)_validateEditable:(id*)arg1 ;
-(id)defaultOrganizerForNewItems;
-(char)isNaturalLanguageSuggestedEventCalendar;
-(char)isDifferentFromCommitted;
-(char)_refreshable;
-(char)revert;
-(id)frozenObject;
-(char)allowReminders;
-(void)reorderBetweenEarlier:(id)arg1 later:(id)arg2 ;
-(char)allowEvents;
-(unsigned long long)allowedEntityTypes;
-(char)isDefaultSchedulingCalendar;
-(id)committedCalendar;
-(id)coreDataEntityName;
-(id)sharingStatusString;
-(void)setSuppressEventSchedulingNotifications:(char)arg1 ;
-(char)supportsCollectionAlarms;
-(void)removeSharee:(id)arg1 ;
-(void)addSharee:(id)arg1 ;
-(char)isColorEditable;
-(char)suppressEventSchedulingNotifications;
-(char)ignoreAlarms;
-(char)cachedHasSharees;
-(char)isFacebookBirthdayCalendar;
-(char)allowsScheduling;
-(char)isSubscribedHolidayCalendar;
-(id)serverPath;
-(NSString *)sharedOwnerName;
-(char)isDistinguishedExchangeCalendar;
-(NSString *)sharedOwnerAddress;
-(id)sharedOwnerAddresses;
-(id)defaultOrganizerNameForNewItems;
-(id)defaultOrganizerEncodedLikenessDataForNewItems;
-(char)defaultOrganizerIsMeForNewItems;
-(id)defaultAlarmsForTimedEvents;
-(id)defaultAlarmsForAllDayEvents;
-(void)setAllowEvents:(char)arg1 ;
-(void)setAllowReminders:(char)arg1 ;
-(void)setIsColorEditable:(char)arg1 ;
-(id)initWithAllowEvents:(char)arg1 allowReminders:(char)arg2 ;
-(void)_updateToMaxDisplayOrder;
-(id)reorderCalendars:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 ;
-(void)setContainerSource:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(char)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(void)setSymbolicColor:(id)arg1 ;
-(char)_validateSource:(id*)arg1 ;
-(char)_validateDeletableHelper:(id*)arg1 ;
-(id)_frozenOrNewCalendarsInEventStoreMatchingOurEntityType;
-(id)_allFrozenOrNewCalendarsInSameSource;
-(id)_otherFrozenOrNewCalendarsInSameSource;
-(char)eligibleForDefaultSchedulingCalendar;
-(char)_anotherCalendarForDefaultSchedulingExists;
-(char)_anotherCalendarForRemindersExists;
-(void)importData:(id)arg1 insertOptions:(unsigned long long)arg2 updateOptions:(unsigned long long)arg3 synchronous:(char)arg4 processEvents:(char)arg5 processReminders:(char)arg6 progressBlock:(/*^block*/id)arg7 finishBlock:(/*^block*/id)arg8 ;
-(char)mergeWithCalendarAndSave:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)canMergeWithCalendar:(id)arg1 ;
-(char)mergeWithCalendarAndSave:(id)arg1 error:(id*)arg2 ;
-(void)_clearCGColorCache;
-(id)_updatedBackingCalendar;
-(char)hasSharees;
-(id)backingCalendar;
-(unsigned long long)notificationCountIncludingPast:(char)arg1 ;
-(id)calendarError;
-(void)setIgnoreAlarms:(char)arg1 ;
-(id)sharedOwnerURL;
-(id)shareesAndOwner;
-(void)setDefaultAlarmsForAllDayEvents:(id)arg1 ;
-(void)setDefaultAlarmsForTimedEvents:(id)arg1 ;
-(char)_allowsPrivateModifications;
-(char)_allowsAttachments;
-(id)sourceIdentifierForCalendar;
-(void)setTypeString:(id)arg1 ;
-(id)symbolicColor;
-(char)_isReadOnlyDelegate;
-(void)reinviteSharees:(id)arg1 ;
-(id)freeBusyCache;
-(char)_hasChangesForKeyAndKeyIsOnlyChangedKey:(id)arg1 ;
-(void)importData:(id)arg1 synchronous:(char)arg2 processEvents:(char)arg3 processReminders:(char)arg4 progressBlock:(/*^block*/id)arg5 finishBlock:(/*^block*/id)arg6 ;
-(id)exportData;
-(long long)deletionWarningsMask;
-(void)mergeWithCalendarAndSave:(id)arg1 synchronous:(char)arg2 progressBlock:(/*^block*/id)arg3 finishBlock:(/*^block*/id)arg4 ;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(void)setSharedOwnerAddress:(NSString *)arg1 ;
-(void)setAllowsScheduling:(char)arg1 ;
-(void)setIsDefaultSchedulingCalendar:(char)arg1 ;
-(void)setIsDistinguishedExchangeCalendar:(char)arg1 ;
-(void)setIsFacebookBirthdayCalendar:(char)arg1 ;
-(void)setIsSubscribedHolidayCalendar:(char)arg1 ;
-(void)setIsSuggestedEventCalendar:(char)arg1 ;
-(void)setIsNaturalLanguageSuggestedEventCalendar:(char)arg1 ;
-(char)isIgnoringEventAlerts;
-(void)setIsIgnoringEventAlerts:(char)arg1 ;
-(char)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringSharedCalendarNotifications:(char)arg1 ;
-(char)allowsIgnoringSharedEventChangeNotifications;
-(char)isManaged;
-(char)isSharingInvitation;
-(void)setSharingInvitation:(char)arg1 ;
-(NSString *)selfIdentityEmail;
-(void)setSelfIdentityEmail:(NSString *)arg1 ;
@end

