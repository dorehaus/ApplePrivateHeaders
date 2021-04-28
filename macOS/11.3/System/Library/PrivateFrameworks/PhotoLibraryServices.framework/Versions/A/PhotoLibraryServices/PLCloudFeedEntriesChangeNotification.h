/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification {

	char _shouldReload;
	NSSet* _insertedEntries;
	NSSet* _updatedEntries;
	NSSet* _deletedEntries;

}

@property (assign,nonatomic) char shouldReload;                  //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,copy) NSSet * insertedEntries;              //@synthesize insertedEntries=_insertedEntries - In the implementation block
@property (nonatomic,copy) NSSet * updatedEntries;               //@synthesize updatedEntries=_updatedEntries - In the implementation block
@property (nonatomic,copy) NSSet * deletedEntries;               //@synthesize deletedEntries=_deletedEntries - In the implementation block
+(id)notificationWithFullReload;
+(id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(id)name;
-(id)userInfo;
-(id)object;
-(char)shouldReload;
-(id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(id)_initWithFullReload;
-(NSSet *)insertedEntries;
-(NSSet *)updatedEntries;
-(NSSet *)deletedEntries;
-(void)setShouldReload:(char)arg1 ;
-(void)setInsertedEntries:(NSSet *)arg1 ;
-(void)setUpdatedEntries:(NSSet *)arg1 ;
-(void)setDeletedEntries:(NSSet *)arg1 ;
@end

