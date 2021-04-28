/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKQueryPredicate.h>

@class NSString, NSArray;

@interface EKQueryEventPredicate : EKQueryPredicate {

	NSString* _location;
	NSString* _notes;
	NSArray* _participantNames;

}

@property (nonatomic,retain) NSString * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * notes;                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSArray * participantNames;              //@synthesize participantNames=_participantNames - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
+(id)predicateWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)evaluateWithObject:(id)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)notes;
-(unsigned long long)entityType;
-(id)initWithCalendars:(id)arg1 ;
-(id)mdQueryString;
-(id)initWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5 ;
-(NSArray *)participantNames;
-(char)_includeCalendarTitleInSearchTerm;
-(void)setParticipantNames:(NSArray *)arg1 ;
@end
