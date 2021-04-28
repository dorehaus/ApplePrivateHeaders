/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding> {

	char _isResponse;
	char _forcePersistInteraction;
	char _mailShareSheetDeletionCandidate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _uuid;
	NSString* _locationUUID;
	long long _mechanism;
	long long _direction;
	NSString* _bundleId;
	NSString* _targetBundleId;
	NSString* _groupName;
	NSURL* _contentURL;
	NSString* _derivedIntentIdentifier;
	NSString* _domainIdentifier;
	NSString* _account;
	_CDContact* _sender;
	NSArray* _recipients;
	NSArray* _keywords;
	NSArray* _attachments;

}

@property (nonatomic,readonly) char userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) char userIsThreadInitiator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char forcePersistInteraction;                      //@synthesize forcePersistInteraction=_forcePersistInteraction - In the implementation block
@property (assign,nonatomic) char mailShareSheetDeletionCandidate;              //@synthesize mailShareSheetDeletionCandidate=_mailShareSheetDeletionCandidate - In the implementation block
@property (retain) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * locationUUID;                                     //@synthesize locationUUID=_locationUUID - In the implementation block
@property (assign) long long mechanism;                                         //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (assign) char isResponse;                                             //@synthesize isResponse=_isResponse - In the implementation block
@property (retain) NSString * bundleId;                                         //@synthesize bundleId=_bundleId - In the implementation block
@property (retain) NSString * targetBundleId;                                   //@synthesize targetBundleId=_targetBundleId - In the implementation block
@property (retain) NSString * groupName;                                        //@synthesize groupName=_groupName - In the implementation block
@property (retain) NSURL * contentURL;                                          //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * derivedIntentIdentifier;                          //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (retain) NSString * domainIdentifier;                                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (retain) NSString * account;                                          //@synthesize account=_account - In the implementation block
@property (retain) _CDContact * sender;                                         //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSArray * keywords;                                          //@synthesize keywords=_keywords - In the implementation block
@property (retain) NSArray * attachments;                                       //@synthesize attachments=_attachments - In the implementation block
+(char)supportsSecureCoding;
+(id)conversationIdForMobileMailInteractionRecipients:(id)arg1 ;
+(id)recipientIdentifiersFromMobileMailConversationId:(id)arg1 ;
+(id)shareSheetInteractionFromINInteraction:(id)arg1 bundleID:(id)arg2 knowledgeStore:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSDate *)timestamp;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)peopleIdentifiers;
-(long long)direction;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(_CDContact *)sender;
-(void)setDirection:(long long)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(NSURL *)contentURL;
-(NSString *)derivedIntentIdentifier;
-(NSString *)bundleId;
-(long long)mechanism;
-(NSString *)account;
-(void)setMechanism:(long long)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)locationUUID;
-(char)isResponse;
-(NSString *)targetBundleId;
-(id)descriptionOfArray:(id)arg1 ;
-(void)setLocationUUID:(NSString *)arg1 ;
-(void)setIsResponse:(char)arg1 ;
-(void)setTargetBundleId:(NSString *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setDerivedIntentIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setSender:(_CDContact *)arg1 ;
-(char)forcePersistInteraction;
-(void)setForcePersistInteraction:(char)arg1 ;
-(char)mailShareSheetDeletionCandidate;
-(void)setMailShareSheetDeletionCandidate:(char)arg1 ;
-(char)userIsSender;
-(char)userIsThreadInitiator;
-(id)initWithINInteraction:(id)arg1 bundleID:(id)arg2 ;
@end
