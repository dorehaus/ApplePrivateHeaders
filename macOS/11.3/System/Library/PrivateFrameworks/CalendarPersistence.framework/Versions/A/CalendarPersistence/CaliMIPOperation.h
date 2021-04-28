/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalPersistentOperation.h>

@class NSArray;

@interface CaliMIPOperation : CalPersistentOperation {

	NSArray* _attendeeObjectIDs;

}

@property (retain,readonly) NSArray * attendeeObjectIDs;              //@synthesize attendeeObjectIDs=_attendeeObjectIDs - In the implementation block
+(char)supportsSecureCoding;
+(char)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1 ignoreiMIPSuppression:(char)arg2 ;
+(int)icsMethod;
+(id)managedEventForManagedAttendee:(id)arg1 ;
+(id)operationsWithManagedAttendees:(id)arg1 ;
+(char)managedAttendeeWillCauseiMIPScheduling:(id)arg1 ;
+(id)managedCalendarForManagedEvent:(id)arg1 ;
+(char)updateSequenceNumber;
+(char)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithManagedAttendees:(id)arg1 ;
-(id)attachmentName;
-(id)emailBodyInContext:(id)arg1 ;
-(id)emailRecipientsInContext:(id)arg1 ;
-(id)emailSubjectInContext:(id)arg1 ;
-(NSArray *)attendeeObjectIDs;
-(id)attachmentForManagedEvent:(id)arg1 withMethod:(int)arg2 ;
-(id)organizerDisplayNameForAddress:(id)arg1 commonName:(id)arg2 ;
-(id)attachmentInContext:(id)arg1 ;
-(char)executeInContext:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)attachmentOptions;
-(id)managedEventInContext:(id)arg1 ;
-(id)fromAddressInContext:(id)arg1 ;
@end

