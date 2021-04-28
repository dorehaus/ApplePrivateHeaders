/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDMailboxProviderDelegate.h>
#import <libobjc.A.dylib/EMMailboxTypeResolver.h>

@protocol EDMailboxProvider;
@class NSSet, NSMutableDictionary, NSString;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {

	os_unfair_lock_s _changeObserversByIdentifierLock;
	NSMutableDictionary* _changeObserversByIdentifier;
	id<EDMailboxProvider> _mailboxProvider;

}

@property (nonatomic,retain) NSMutableDictionary * changeObserversByIdentifier;              //@synthesize changeObserversByIdentifier=_changeObserversByIdentifier - In the implementation block
@property (nonatomic,retain) id<EDMailboxProvider> mailboxProvider;                          //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,readonly) NSSet * allMailboxObjectIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)legacyMailboxForMailboxURL:(id)arg1 ;
-(id<EDMailboxProvider>)mailboxProvider;
-(id)allMailboxes;
-(NSMutableDictionary *)changeObserversByIdentifier;
-(id)legacyMailboxForObjectID:(id)arg1 ;
-(NSSet *)allMailboxObjectIDs;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(void)setChangeObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)mailboxListInvalidated;
-(id)initWithMailboxProvider:(id)arg1 ;
-(void)allMailboxesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)userCreatedMailboxObjectIDs;
-(void)fetchMailboxLists;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(char)arg2 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeChangeObserverWithIdentifier:(id)arg1 ;
-(char)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(char)deleteMailbox:(id)arg1 ;
-(char)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(char)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(void)setMailboxProvider:(id<EDMailboxProvider>)arg1 ;
@end

