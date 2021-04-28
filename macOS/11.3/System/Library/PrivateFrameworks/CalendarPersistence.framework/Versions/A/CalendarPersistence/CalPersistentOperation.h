/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID;

@interface CalPersistentOperation : CalOperation <NSSecureCoding> {

	NSManagedObjectID* _managedObjectID;
	long long _sequenceNumber;

}

@property (retain) NSManagedObjectID * managedObjectID;              //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (assign) long long sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(char)supportsSecureCoding;
+(id)managedObjectIDForURIRepresentation:(id)arg1 ;
+(id)archive:(id)arg1 inContext:(id)arg2 ;
+(id)dearchive:(id)arg1 ;
+(id)managedObjectIDsForURIRepresentations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sequenceNumber;
-(void)setSequenceNumber:(long long)arg1 ;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
@end

