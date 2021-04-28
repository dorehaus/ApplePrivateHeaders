/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {

	NSString* _archiveFilename;
	char _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) char shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)highPriorityOperationQueue;
+(id)lowPriorityOperationQueue;
+(id)recoveredEventsWithPathManager:(id)arg1 ;
+(void)deleteAllRecoveryEventsWithPathManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)runDaemonSide;
-(char)shouldPrioritize;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(char)shouldArchiveXPCToDisk;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)runAndWaitForMessageToBeSent;
-(void)setShouldPrioritize:(char)arg1 ;
@end
