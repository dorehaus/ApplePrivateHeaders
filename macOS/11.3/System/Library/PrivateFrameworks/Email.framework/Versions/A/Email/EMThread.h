/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <Email/EMCollection.h>
#import <libobjc.A.dylib/EMThreadBuilder.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EMMessageListItem.h>

@protocol EMMailboxTypeResolver, EMCollectionItemID;
@class EMMailboxScope, NSArray, NSDate, ECSubject, NSString, ECMessageFlags, NSIndexSet, EFQuery, EMMessageRepository, EMObjectID, EFFuture;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem> {

	unsigned long long _isEditable;
	EMMailboxScope* _mailboxScope;
	id<EMMailboxTypeResolver> _mailboxTypeResolver;
	NSArray* _mailboxes;
	NSArray* _mailboxObjectIDs;
	os_unfair_lock_s _mailboxScopeLock;
	os_unfair_lock_s _mailboxTypeResolverLock;
	os_unfair_lock_s _mailboxesLock;
	char _hasUnflagged;
	char _isVIP;
	char _isBocked;
	char _hasAttachments;
	char _isToMe;
	char _isCCMe;
	NSDate* _date;
	ECSubject* _subject;
	NSString* _summary;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	ECMessageFlags* _flags;
	NSIndexSet* _flagColors;
	long long _conversationNotificationLevel;
	unsigned long long _count;
	id<EMCollectionItemID> _displayMessageItemID;
	EFQuery* _originatingQuery;

}

@property (nonatomic,readonly) EMMessageRepository * repository; 
@property (nonatomic,readonly) EFQuery * originatingQuery;                     //@synthesize originatingQuery=_originatingQuery - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * mailboxScope; 
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver; 
@property (retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (retain) ECSubject * subject;                                        //@synthesize subject=_subject - In the implementation block
@property (copy) NSString * summary;                                           //@synthesize summary=_summary - In the implementation block
@property (copy) NSArray * senderList;                                         //@synthesize senderList=_senderList - In the implementation block
@property (copy) NSArray * toList;                                             //@synthesize toList=_toList - In the implementation block
@property (copy) NSArray * ccList;                                             //@synthesize ccList=_ccList - In the implementation block
@property (assign) char isToMe;                                                //@synthesize isToMe=_isToMe - In the implementation block
@property (assign) char isCCMe;                                                //@synthesize isCCMe=_isCCMe - In the implementation block
@property (retain) ECMessageFlags * flags;                                     //@synthesize flags=_flags - In the implementation block
@property (assign) char hasUnflagged;                                          //@synthesize hasUnflagged=_hasUnflagged - In the implementation block
@property (copy) NSIndexSet * flagColors;                                      //@synthesize flagColors=_flagColors - In the implementation block
@property (assign) char isVIP;                                                 //@synthesize isVIP=_isVIP - In the implementation block
@property (assign) char isBlocked;                                             //@synthesize isBocked=_isBocked - In the implementation block
@property (assign) char hasAttachments;                                        //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign) long long conversationNotificationLevel;                    //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (assign) unsigned long long count;                                   //@synthesize count=_count - In the implementation block
@property (assign) long long conversationID; 
@property (copy) NSArray * mailboxObjectIDs;                                   //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
@property (copy) NSArray * mailboxes; 
@property (retain) id<EMCollectionItemID> displayMessageItemID;                //@synthesize displayMessageItemID=_displayMessageItemID - In the implementation block
@property (assign) long long _internalID; 
@property (readonly) EMObjectID * displayMessageObjectID; 
@property (readonly) EFFuture * displayMessage; 
@property (readonly) char deleteMovesToTrash; 
@property (readonly) char supportsArchiving; 
@property (readonly) char shouldArchiveByDefault; 
@property (readonly) char isEditable; 
@property (nonatomic,readonly) id<EMCollectionItemID> itemID; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)log;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ECMessageFlags *)flags;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)query;
-(NSDate *)date;
-(id<EMCollectionItemID>)itemID;
-(char)isBlocked;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(char)isEditable;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubject:(ECSubject *)arg1 ;
-(ECSubject *)subject;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)summary;
-(EFFuture *)displayMessage;
-(void)setIsBlocked:(char)arg1 ;
-(EMMessageRepository *)repository;
-(NSArray *)toList;
-(void)setToList:(NSArray *)arg1 ;
-(void)setRepository:(EMMessageRepository *)arg1 ;
-(long long)_internalID;
-(void)setHasAttachments:(char)arg1 ;
-(char)hasAttachments;
-(long long)conversationID;
-(void)setConversationID:(long long)arg1 ;
-(id)ef_publicDescription;
-(char)shouldArchiveByDefault;
-(EFQuery *)originatingQuery;
-(id<EMMailboxTypeResolver>)mailboxTypeResolver;
-(void)setMailboxTypeResolver:(id<EMMailboxTypeResolver>)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setHasUnflagged:(char)arg1 ;
-(void)setFlagColors:(NSIndexSet *)arg1 ;
-(void)setIsVIP:(char)arg1 ;
-(long long)conversationNotificationLevel;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setDisplayMessageItemID:(id<EMCollectionItemID>)arg1 ;
-(id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(/*^block*/id)arg3 ;
-(id<EMCollectionItemID>)displayMessageItemID;
-(NSArray *)senderList;
-(NSArray *)ccList;
-(char)hasUnflagged;
-(NSIndexSet *)flagColors;
-(char)isVIP;
-(NSArray *)mailboxes;
-(EMMailboxScope *)mailboxScope;
-(NSArray *)mailboxObjectIDs;
-(EMObjectID *)displayMessageObjectID;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1 ;
-(char)objectIDBelongsToCollection:(id)arg1 ;
-(id)objectIDForItemID:(id)arg1 ;
-(void)setMailboxObjectIDs:(NSArray *)arg1 ;
-(void)setIsToMe:(char)arg1 ;
-(void)setIsCCMe:(char)arg1 ;
-(char)isToMe;
-(char)isCCMe;
-(char)deleteMovesToTrash;
-(char)supportsArchiving;
-(void)set_internalID:(long long)arg1 ;
-(void)_commonInitWithOriginatingQuery:(id)arg1 builder:(/*^block*/id)arg2 ;
@end
