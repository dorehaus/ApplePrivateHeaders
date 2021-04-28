/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKRecurrenceIdentifierProtocol.h>

@class EKRecurrenceIdentifier, NSManagedObjectID, NSDate, NSString;

@interface EKRecurrenceException : NSObject <EKRecurrenceIdentifierProtocol> {

	EKRecurrenceIdentifier* _recurrenceIdentifier;
	NSManagedObjectID* _masterManagedObjectID;

}

@property (retain) EKRecurrenceIdentifier * recurrenceIdentifier;              //@synthesize recurrenceIdentifier=_recurrenceIdentifier - In the implementation block
@property (retain) NSManagedObjectID * masterManagedObjectID;                  //@synthesize masterManagedObjectID=_masterManagedObjectID - In the implementation block
@property (readonly) NSDate * exceptionDateUnadjustedFromUTC; 
@property (readonly) NSString * localUID; 
@property (readonly) NSDate * recurrenceDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSString * identifierString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exceptionForEvent:(id)arg1 ;
+(id)_exceptionForEventOccurrence:(id)arg1 ;
+(id)_exceptionForEventOccurrence:(id)arg1 date:(id)arg2 ;
+(id)exceptionForEvent:(id)arg1 date:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifierString;
-(NSString *)localUID;
-(NSDate *)recurrenceDateUnadjustedFromUTC;
-(void)setRecurrenceIdentifier:(EKRecurrenceIdentifier *)arg1 ;
-(EKRecurrenceIdentifier *)recurrenceIdentifier;
-(NSDate *)exceptionDateUnadjustedFromUTC;
-(NSManagedObjectID *)masterManagedObjectID;
-(void)setMasterManagedObjectID:(NSManagedObjectID *)arg1 ;
@end
