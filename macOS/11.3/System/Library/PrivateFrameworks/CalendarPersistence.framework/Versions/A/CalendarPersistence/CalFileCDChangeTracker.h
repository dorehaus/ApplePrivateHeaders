/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalAbstractCDChangeTracker.h>

@class NSString, NSArray;

@interface CalFileCDChangeTracker : CalAbstractCDChangeTracker {

	NSString* basePath;
	NSArray* fileNamesBeingProcessed;

}
-(void)dealloc;
-(id)init;
-(void)setBasePath:(id)arg1 ;
-(void)insureDirectoryAtPath:(id)arg1 ;
-(id)getFileNames;
-(void)mergeChangesFrom:(id)arg1 to:(id)arg2 ;
-(id)tempFile;
-(void)deleteFiles:(id)arg1 ;
-(id)dictionaryFromFile:(id)arg1 ;
-(char)getAllChanges;
-(void)storeChanges:(id)arg1 ;
-(void)clearAllStoredChanges;
-(void)clearProcessedChanges;
@end
