/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Versions/A/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CHHandle, NSUUID, NSSet, NSString, NSNumber, NSDate, NSArray, NSValue, CNContact, NSDictionary, CHPhoneBookIOSManager;

@interface CHRecentCall : NSObject <NSSecureCoding, NSCopying> {

	char _read;
	char _callerIdIsBlocked;
	char _multiCall;
	char _answered;
	char _mobileOriginated;
	unsigned _callStatus;
	unsigned _callerIdAvailability;
	unsigned _callCategory;
	unsigned _callType;
	CHHandle* _localParticipantHandle;
	NSUUID* _localParticipantUUID;
	NSUUID* _outgoingLocalParticipantUUID;
	NSSet* _remoteParticipantHandles;
	NSString* _uniqueId;
	NSString* _callerNetworkName;
	NSString* _serviceProvider;
	NSNumber* _bytesOfDataUsed;
	NSDate* _date;
	double _duration;
	NSString* _isoCountryCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSNumber* _disconnectedCause;
	NSNumber* _filteredOutReason;
	NSString* _callerNetworkFirstName;
	NSString* _callerNetworkSecondName;
	unsigned long long _unreadCount;
	NSArray* _callOccurrences;
	NSString* _clientAddressBookRecordId;
	NSString* _contactIdentifier;
	long long _mediaType;
	long long _ttyType;
	long long _handleType;
	NSNumber* _timeToEstablish;
	NSValue* _addressBookRecordRef;
	NSString* _addressBookRecordId;
	NSString* _addressBookCallerIDMultiValueId;
	NSString* _devicePhoneId;
	NSString* _callerId;
	CNContact* _contactRef;
	long long _junkConfidence;
	long long _verificationStatus;
	NSString* _callerName;
	NSString* _callerIdLabel;
	NSString* _callerIdLocation;
	NSString* _callerIdFormatted;

}

@property (nonatomic,copy) CNContact * contactRef;                                              //@synthesize contactRef=_contactRef - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) long long junkConfidence;                                          //@synthesize junkConfidence=_junkConfidence - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                      //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,readonly) CHPhoneBookIOSManager * phoneBookManager; 
@property (nonatomic,copy) NSString * callerName;                                               //@synthesize callerName=_callerName - In the implementation block
@property (assign,nonatomic) char callerIdIsBlocked;                                            //@synthesize callerIdIsBlocked=_callerIdIsBlocked - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkFirstName;                                   //@synthesize callerNetworkFirstName=_callerNetworkFirstName - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkSecondName;                                  //@synthesize callerNetworkSecondName=_callerNetworkSecondName - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;                                    //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,copy) NSArray * callOccurrences;                                           //@synthesize callOccurrences=_callOccurrences - In the implementation block
@property (nonatomic,copy) NSString * callerIdLabel;                                            //@synthesize callerIdLabel=_callerIdLabel - In the implementation block
@property (nonatomic,copy) NSString * callerIdLocation;                                         //@synthesize callerIdLocation=_callerIdLocation - In the implementation block
@property (assign,nonatomic) char multiCall;                                                    //@synthesize multiCall=_multiCall - In the implementation block
@property (getter=callerIdForDisplay,nonatomic,copy) NSString * callerIdFormatted;              //@synthesize callerIdFormatted=_callerIdFormatted - In the implementation block
@property (assign) char answered;                                                               //@synthesize answered=_answered - In the implementation block
@property (assign) char mobileOriginated;                                                       //@synthesize mobileOriginated=_mobileOriginated - In the implementation block
@property (nonatomic,retain) CHHandle * localParticipantHandle;                                 //@synthesize localParticipantHandle=_localParticipantHandle - In the implementation block
@property (nonatomic,retain) NSUUID * localParticipantUUID;                                     //@synthesize localParticipantUUID=_localParticipantUUID - In the implementation block
@property (nonatomic,retain) NSUUID * outgoingLocalParticipantUUID;                             //@synthesize outgoingLocalParticipantUUID=_outgoingLocalParticipantUUID - In the implementation block
@property (nonatomic,copy) NSSet * remoteParticipantHandles;                                    //@synthesize remoteParticipantHandles=_remoteParticipantHandles - In the implementation block
@property (nonatomic,copy) NSString * uniqueId;                                                 //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkName;                                        //@synthesize callerNetworkName=_callerNetworkName - In the implementation block
@property (assign,nonatomic) unsigned callStatus;                                               //@synthesize callStatus=_callStatus - In the implementation block
@property (nonatomic,copy) NSString * serviceProvider;                                          //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,retain) NSNumber * bytesOfDataUsed;                                        //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                           //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) char read;                                                         //@synthesize read=_read - In the implementation block
@property (nonatomic,copy) NSString * mobileCountryCode;                                        //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,copy) NSString * mobileNetworkCode;                                        //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,retain) NSNumber * disconnectedCause;                                      //@synthesize disconnectedCause=_disconnectedCause - In the implementation block
@property (nonatomic,retain) NSNumber * filteredOutReason;                                      //@synthesize filteredOutReason=_filteredOutReason - In the implementation block
@property (assign,nonatomic) unsigned callerIdAvailability;                                     //@synthesize callerIdAvailability=_callerIdAvailability - In the implementation block
@property (nonatomic,readonly) char isJunk; 
@property (copy) NSString * clientAddressBookRecordId;                                          //@synthesize clientAddressBookRecordId=_clientAddressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) long long mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long ttyType;                                                 //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) long long handleType;                                              //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,retain) NSNumber * timeToEstablish;                                        //@synthesize timeToEstablish=_timeToEstablish - In the implementation block
@property (nonatomic,copy) NSValue * addressBookRecordRef;                                      //@synthesize addressBookRecordRef=_addressBookRecordRef - In the implementation block
@property (nonatomic,copy) NSString * addressBookRecordId;                                      //@synthesize addressBookRecordId=_addressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * addressBookCallerIDMultiValueId;                          //@synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId - In the implementation block
@property (assign,nonatomic) unsigned callCategory;                                             //@synthesize callCategory=_callCategory - In the implementation block
@property (assign,nonatomic) unsigned callType;                                                 //@synthesize callType=_callType - In the implementation block
@property (nonatomic,copy) NSString * devicePhoneId;                                            //@synthesize devicePhoneId=_devicePhoneId - In the implementation block
@property (nonatomic,copy) NSString * callerId;                                                 //@synthesize callerId=_callerId - In the implementation block
+(char)supportsSecureCoding;
+(id)callTypeAsString:(unsigned)arg1 ;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
+(id)predicateForCallsWithStatusRead:(char)arg1 ;
+(id)predicateForCallsWithMediaType:(long long)arg1 ;
+(unsigned)categoryForCallType:(unsigned)arg1 ;
+(id)serviceProviderForCallType:(unsigned)arg1 ;
+(id)predicateForCallsWithTTYType:(long long)arg1 ;
+(id)predicateForCallsWithServiceProvider:(id)arg1 ;
+(id)callStatusAsString:(unsigned)arg1 ;
+(id)callMediaTypeAsString:(long long)arg1 ;
+(id)callTTYTypeAsString:(long long)arg1 ;
+(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
+(unsigned)getCallTypeForCategory:(unsigned)arg1 andServiceProvider:(id)arg2 ;
+(unsigned)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2 ;
+(long long)mediaTypeForCallCategory:(unsigned)arg1 ;
+(long long)ttyTypeForCallCategory:(unsigned)arg1 ;
+(id)callHandleTypeAsString:(long long)arg1 ;
+(id)callCategoryAsString:(unsigned)arg1 ;
+(id)predicateForCallsWithCategory:(unsigned)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleType:(long long)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandle:(id)arg1 ;
+(id)predicateForCallsWithUniqueID:(id)arg1 ;
+(id)predicateForCallsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForCallsWithAnyMediaTypes:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantCount:(long long)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg1 ;
+(id)predicateForCallsWithAnyServiceProviders:(id)arg1 ;
+(id)predicateForCallsWithStatus:(unsigned)arg1 ;
+(id)predicateForCallsWithStatusAnswered:(char)arg1 ;
+(id)predicateForCallsWithStatusOriginated:(char)arg1 ;
+(id)predicateForCallsWithStatusJunk:(char)arg1 ;
+(id)predicateForCallsWithAnyTTYTypes:(id)arg1 ;
+(id)predicateForCallsWithAnyUniqueIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSDictionary *)dictionaryRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(long long)mediaType;
-(NSString *)contactIdentifier;
-(NSString *)uniqueId;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setHandleType:(long long)arg1 ;
-(long long)handleType;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(char)read;
-(void)setRead:(char)arg1 ;
-(NSNumber *)timeToEstablish;
-(void)setTimeToEstablish:(NSNumber *)arg1 ;
-(long long)ttyType;
-(unsigned)callType;
-(void)setCallType:(unsigned)arg1 ;
-(void)setTtyType:(long long)arg1 ;
-(NSString *)serviceProvider;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(long long)verificationStatus;
-(char)answered;
-(void)setAnswered:(char)arg1 ;
-(void)setCallStatus:(unsigned)arg1 ;
-(unsigned)callStatus;
-(id)callerIdForDisplay;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(NSSet *)remoteParticipantHandles;
-(NSString *)callerId;
-(id)callerIdSubStringForDisplay;
-(id)callerNameForDisplay;
-(NSString *)addressBookRecordId;
-(void)setRemoteParticipantHandles:(NSSet *)arg1 ;
-(NSNumber *)filteredOutReason;
-(long long)junkConfidence;
-(char)isJunk;
-(void)setFilteredOutReason:(NSNumber *)arg1 ;
-(NSUUID *)outgoingLocalParticipantUUID;
-(void)setJunkConfidence:(long long)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)setLocalParticipantUUID:(NSUUID *)arg1 ;
-(void)setOutgoingLocalParticipantUUID:(NSUUID *)arg1 ;
-(void)setBytesOfDataUsed:(NSNumber *)arg1 ;
-(void)setCallerIdAvailability:(unsigned)arg1 ;
-(void)setCallerIdLocation:(NSString *)arg1 ;
-(void)setCallerNetworkName:(NSString *)arg1 ;
-(void)setDisconnectedCause:(NSNumber *)arg1 ;
-(NSUUID *)localParticipantUUID;
-(void)setCallCategory:(unsigned)arg1 ;
-(void)setCallerId:(NSString *)arg1 ;
-(void)setCallOccurrences:(NSArray *)arg1 ;
-(void)setCallerIdFormatted:(NSString *)arg1 ;
-(id)coalescedCallWithCall:(id)arg1 usingStrategy:(id)arg2 ;
-(CHPhoneBookIOSManager *)phoneBookManager;
-(id)coalescingHash;
-(unsigned long long)numberOfOccurrences;
-(NSArray *)callOccurrences;
-(void)setMultiCall:(char)arg1 ;
-(char)multiCall;
-(NSNumber *)disconnectedCause;
-(NSNumber *)bytesOfDataUsed;
-(NSString *)callerNetworkName;
-(unsigned)callerIdAvailability;
-(unsigned)callCategory;
-(char)canCoalesceRemoteParticipantHandlesFromCall:(id)arg1 ;
-(char)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1 ;
-(char)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)callOccurrencesArrayByAddingCallOccurrencesFromArray:(id)arg1 ;
-(unsigned long long)unreadCount;
-(char)callerIdIsEmailAddress;
-(void)fetchAndSetContactIdentifier;
-(void)fetchAndSetFullContact;
-(CNContact *)contactRef;
-(void)setCallerIdIsBlocked:(char)arg1 ;
-(void)setCallerNetworkFirstName:(NSString *)arg1 ;
-(void)setCallerNetworkSecondName:(NSString *)arg1 ;
-(NSString *)callerName;
-(char)callerIdIsBlocked;
-(NSString *)callerIdLabel;
-(NSString *)callerIdLocation;
-(void)updateTTYAndMediaType;
-(void)fixCallTypeInfo;
-(NSString *)callerNetworkFirstName;
-(NSString *)callerNetworkSecondName;
-(id)callOccurrencesAsString;
-(char)isEqualToRecentCall:(id)arg1 ;
-(char)coalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(CHHandle *)localParticipantHandle;
-(void)setLocalParticipantHandle:(CHHandle *)arg1 ;
-(NSString *)clientAddressBookRecordId;
-(void)setClientAddressBookRecordId:(NSString *)arg1 ;
-(NSValue *)addressBookRecordRef;
-(void)setAddressBookRecordRef:(NSValue *)arg1 ;
-(void)setAddressBookRecordId:(NSString *)arg1 ;
-(NSString *)addressBookCallerIDMultiValueId;
-(void)setAddressBookCallerIDMultiValueId:(NSString *)arg1 ;
-(NSString *)devicePhoneId;
-(void)setDevicePhoneId:(NSString *)arg1 ;
-(void)setContactRef:(CNContact *)arg1 ;
-(void)setCallerName:(NSString *)arg1 ;
-(void)setCallerIdLabel:(NSString *)arg1 ;
-(char)mobileOriginated;
-(void)setMobileOriginated:(char)arg1 ;
@end

