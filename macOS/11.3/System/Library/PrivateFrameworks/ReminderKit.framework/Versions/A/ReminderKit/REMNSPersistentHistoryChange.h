/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMChangeObject.h>

@class REMChangeTransaction, NSArray, _REMNSPersistentHistoryChangeStorage, NSPersistentHistoryChange;

@interface REMNSPersistentHistoryChange : REMChangeObject {

	char _isCoalesced;
	REMChangeTransaction* _internal_ChangeTransaction;
	NSArray* _coalescedChanges;
	_REMNSPersistentHistoryChangeStorage* _storage;
	NSPersistentHistoryChange* _persistentHistoryChange;

}

@property (retain) _REMNSPersistentHistoryChangeStorage * storage;                                  //@synthesize storage=_storage - In the implementation block
@property (__weak,readonly) NSPersistentHistoryChange * persistentHistoryChange;                    //@synthesize persistentHistoryChange=_persistentHistoryChange - In the implementation block
@property (assign,nonatomic,__weak) REMChangeTransaction * internal_ChangeTransaction;              //@synthesize internal_ChangeTransaction=_internal_ChangeTransaction - In the implementation block
@property (assign,nonatomic) char isCoalesced;                                                      //@synthesize isCoalesced=_isCoalesced - In the implementation block
@property (nonatomic,retain) NSArray * coalescedChanges;                                            //@synthesize coalescedChanges=_coalescedChanges - In the implementation block
+(char)supportsSecureCoding;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(_REMNSPersistentHistoryChangeStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(void)setStorage:(_REMNSPersistentHistoryChangeStorage *)arg1 ;
-(id)changedObjectID;
-(id)tombstone;
-(id)transaction;
-(id)initWithStorage:(id)arg1 ;
-(long long)changeID;
-(id)updatedProperties;
-(char)isCoalesced;
-(NSArray *)coalescedChanges;
-(NSPersistentHistoryChange *)persistentHistoryChange;
-(REMChangeTransaction *)internal_ChangeTransaction;
-(void)setInternal_ChangeTransaction:(REMChangeTransaction *)arg1 ;
-(id)initWithPersistentHistoryChange:(id)arg1 ;
-(id)changedManagedObjectID;
-(void)resolveWithObjectID:(id)arg1 ;
-(id)copyForCoalescing;
-(void)setIsCoalesced:(char)arg1 ;
-(void)setCoalescedChanges:(NSArray *)arg1 ;
@end
