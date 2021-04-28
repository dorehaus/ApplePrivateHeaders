/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectID;

@interface CalOperation : NSObject {

	NSString* _sessionID;
	NSManagedObjectID* _sessionIDAsObjectID;

}

@property (retain) NSString * sessionID;                                 //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) NSManagedObjectID * sessionIDAsObjectID;              //@synthesize sessionIDAsObjectID=_sessionIDAsObjectID - In the implementation block
-(id)debugDescription;
-(id)session;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)initWithSessionID:(id)arg1 ;
-(char)executeInContext:(id)arg1 error:(id*)arg2 ;
-(id)debugTitle;
-(NSManagedObjectID *)sessionIDAsObjectID;
-(void)setSessionIDAsObjectID:(NSManagedObjectID *)arg1 ;
@end
