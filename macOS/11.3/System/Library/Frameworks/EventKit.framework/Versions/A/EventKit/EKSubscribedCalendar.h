/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendar.h>
#import <libobjc.A.dylib/EKMutableSubscribedCalendarProtocol.h>

@protocol EKSubscribedCalendarDownloadDelegate;
@class CalSubscriptionOperation, EKCredentials, NSDate, NSURL, NSString, NSSet, NSDictionary, NSManagedObjectID;

@interface EKSubscribedCalendar : EKCalendar <EKMutableSubscribedCalendarProtocol> {

	CalSubscriptionOperation* _downloadOperation;
	id<EKSubscribedCalendarDownloadDelegate> _downloadDelegate;
	EKCredentials* _credentials;
	NSDate* _refreshDate;

}

@property (assign,nonatomic) char removeAlarms; 
@property (assign,nonatomic) char removeAttachments; 
@property (assign,nonatomic) double refreshInterval; 
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) char insecureConnectionAllowed; 
@property (nonatomic,readonly) NSDate * refreshDate;                                                   //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSString * subscriptionID; 
@property (nonatomic,copy) NSString * colorString; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (nonatomic,copy) id<CalendarSourceModelProtocol> containerSource; 
@property (assign,nonatomic) int displayOrder; 
@property (assign,nonatomic) char ignoreAlarms; 
@property (assign,nonatomic) char isAffectingAvailability; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * publishURL; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (nonatomic,readonly) char allowReminders; 
@property (nonatomic,readonly) char allowEvents; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (readonly) char isMarkedUndeletable; 
@property (readonly) char isMarkedImmutableSharees; 
@property (readonly) long long maxAttendees; 
@property (nonatomic,readonly) char cachedHasSharees; 
@property (nonatomic,readonly) char isBirthday; 
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isShareable; 
@property (nonatomic,readonly) char allowsScheduling; 
@property (nonatomic,readonly) char isSubscribedHolidayCalendar; 
@property (nonatomic,readonly) char isSuggestedEventCalendar; 
@property (nonatomic,readonly) char isNaturalLanguageSuggestedEventCalendar; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * serverPath; 
@property (nonatomic,readonly) NSString * sharingStatusString; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) char isDefaultSchedulingCalendar; 
@property (nonatomic,readonly) char isDistinguishedExchangeCalendar; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) NSSet * sharedOwnerAddresses; 
@property (nonatomic,readonly) NSString * defaultOrganizerNameForNewItems; 
@property (nonatomic,readonly) NSURL * defaultOrganizerAddressForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEmailForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEncodedLikenessDataForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerPhoneNumberForNewItems; 
@property (nonatomic,readonly) char defaultOrganizerIsMeForNewItems; 
@property (nonatomic,readonly) NSURL * prePublishURL; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForTimedEvents; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForAllDayEvents; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
@property (nonatomic,readonly) char eligibleForDefaultSchedulingCalendar; 
@property (nonatomic,readonly) unsigned long long sharingStatus; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * subscriptionTitle; 
@property (nonatomic,readonly) NSString * subscriptionNotes; 
+(char)canHandleURL:(id)arg1 ;
+(Class)frozenClass;
+(id)knownImmutableKeys;
+(id)knownSingleValueKeys;
+(id)subscribedCalendarInEventStore:(id)arg1 withURL:(id)arg2 ;
-(long long)type;
-(NSString *)subscriptionID;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(NSDate *)refreshDate;
-(char)isSubscribed;
-(double)refreshInterval;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(char)removeAlarms;
-(char)removeAttachments;
-(NSString *)subscriptionTitle;
-(NSString *)subscriptionNotes;
-(char)insecureConnectionAllowed;
-(void)setRemoveAttachments:(char)arg1 ;
-(void)setRemoveAlarms:(char)arg1 ;
-(void)_failDownloadWithError:(id)arg1 ;
-(void)_redirectedToURL:(id)arg1 ;
-(void)_takeValuesFromICS:(id)arg1 ;
-(void)_cleanUpCompletedDownload;
-(void)setSubscriptionTitle:(NSString *)arg1 ;
-(void)setSubscriptionNotes:(NSString *)arg1 ;
-(void)setInsecureConnectionAllowed:(char)arg1 ;
-(void)testDownloadWithDelegate:(id)arg1 ;
-(id)removeCalendarAndCreateDuplicateCalendarInSource:(id)arg1 error:(id*)arg2 ;
-(void)subscription:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)subscription:(id)arg1 didReceiveCertificateError:(id)arg2 ;
-(void)subscriptionDidFinishLoading:(id)arg1 ;
-(void)subscription:(id)arg1 didFailWithError:(id)arg2 ;
-(void)subscription:(id)arg1 progressedTo:(long long)arg2 totalUnits:(long long)arg3 ;
@end

