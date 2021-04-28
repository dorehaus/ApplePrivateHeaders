/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMChangeCoalesceable.h>

@class REMChangeTransaction, REMObjectID, REMChangeTombstone, NSSet;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable> {

	REMChangeTransaction* _transaction;
	long long _changeID;
	REMObjectID* _changedObjectID;
	long long _changeType;
	REMChangeTombstone* _tombstone;

}

@property (nonatomic,__weak,readonly) REMChangeTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) long long changeID;                                     //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,readonly) REMObjectID * changedObjectID;                          //@synthesize changedObjectID=_changedObjectID - In the implementation block
@property (nonatomic,readonly) long long changeType;                                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) REMChangeTombstone * tombstone;                         //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,readonly) NSSet * updatedProperties; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(REMObjectID *)changedObjectID;
-(REMChangeTombstone *)tombstone;
-(REMChangeTransaction *)transaction;
-(long long)changeID;
-(NSSet *)updatedProperties;
-(char)isCoalesced;
-(id)coalescedChanges;
-(id)copyForCoalescing;
@end
