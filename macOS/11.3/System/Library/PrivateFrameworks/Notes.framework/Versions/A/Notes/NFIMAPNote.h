/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/NFNote.h>
#import <libobjc.A.dylib/ICNFIMAPPersistedMessage__CD.h>

@class NSNumber, NSUUID, NSDate, NFIMAPFolder, NSString, NSSet;

@interface NFIMAPNote : NFNote <ICNFIMAPPersistedMessage__CD>

@property (nonatomic,retain) NSUUID * primitiveUniversallyUniqueID; 
@property (nonatomic,retain) NFIMAPFolder * folder; 
@property (assign,nonatomic) long long mimeDataSize; 
@property (nonatomic,retain) NSUUID * universallyUniqueID; 
@property (nonatomic,retain) NFIMAPFolder * mailbox; 
@property (nonatomic,retain) NSNumber * imapUID; 
@property (nonatomic,retain) NSDate * dateEdited; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSDate * dateSent; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,copy) NSString * from; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * messageID; 
@property (nonatomic,copy) NSSet * references; 
@property (assign,nonatomic) char unread; 
@property (nonatomic,copy) NSString * bodyHTML; 
@property (nonatomic,copy) NSSet * attachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notesWithUniqueID:(id)arg1 context:(id)arg2 ;
+(id)noteTypeForActivity;
-(char)isRemote;
-(void)awakeFromInsert;
-(NFIMAPFolder *)mailbox;
-(void)setMailbox:(NFIMAPFolder *)arg1 ;
-(NSNumber *)imapUID;
-(void)setImapUID:(NSNumber *)arg1 ;
-(id)activityDictionary;
-(char)validateFolder:(inout id*)arg1 error:(out id*)arg2 ;
@end

