/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	char _excludeTypes;
	char _excludeMailboxes;
	NSSet* _mailboxTypes;
	NSSet* _mailboxObjectIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * mailboxTypes;                         //@synthesize mailboxTypes=_mailboxTypes - In the implementation block
@property (nonatomic,readonly) char excludeTypes;                                 //@synthesize excludeTypes=_excludeTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mailboxObjectIDs;                     //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
@property (nonatomic,readonly) char excludeMailboxes;                             //@synthesize excludeMailboxes=_excludeMailboxes - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(char)supportsSecureCoding;
+(id)allMailboxesScope;
+(id)noMailboxesScope;
+(id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(char)arg2 ;
+(id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(char)arg2 ;
+(id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(id)cachedSelf;
-(NSSet *)mailboxObjectIDs;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(char*)arg2 ;
-(char)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(NSSet *)mailboxTypes;
-(char)excludeTypes;
-(char)excludeMailboxes;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(char)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(char)arg4 ;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(char)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(char)arg4 cached:(char)arg5 ;
-(void)_calculateHash;
-(id)_mailboxTypesDescription;
-(id)_mailboxObjectIDsDescriptionIsDebug:(char)arg1 ;
-(id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1 ;
-(char)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(/*^block*/id)arg2 ;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(char)scopeContainsMailbox:(id)arg1 ;
@end

