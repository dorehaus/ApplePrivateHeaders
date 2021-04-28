/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor> {

	char _didReset;
	char _hasChanges;
	NSMutableArray* _insertedContacts;
	NSMutableArray* _updatedContacts;
	NSMutableArray* _deletedContactIdentifiers;

}

@property (assign) char didReset;                                           //@synthesize didReset=_didReset - In the implementation block
@property (assign) char hasChanges;                                         //@synthesize hasChanges=_hasChanges - In the implementation block
@property (retain) NSMutableArray * insertedContacts;                       //@synthesize insertedContacts=_insertedContacts - In the implementation block
@property (retain) NSMutableArray * updatedContacts;                        //@synthesize updatedContacts=_updatedContacts - In the implementation block
@property (retain) NSMutableArray * deletedContactIdentifiers;              //@synthesize deletedContactIdentifiers=_deletedContactIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)hasChanges;
-(void)setHasChanges:(char)arg1 ;
-(NSMutableArray *)updatedContacts;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(NSMutableArray *)insertedContacts;
-(char)didReset;
-(NSMutableArray *)deletedContactIdentifiers;
-(void)setDidReset:(char)arg1 ;
-(void)setInsertedContacts:(NSMutableArray *)arg1 ;
-(void)setUpdatedContacts:(NSMutableArray *)arg1 ;
-(void)setDeletedContactIdentifiers:(NSMutableArray *)arg1 ;
@end

