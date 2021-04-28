/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCloudBookmarksMigrationCoordinatorLocalDataProvider.h>

@class WBSCloudBookmarksMigrationCoordinator, NSString;

@interface CloudBookmarksMigrationCoordinationConsul : NSObject <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> {

	char _didDeferMigrationCoordinationRequest;
	WBSCloudBookmarksMigrationCoordinator* _migrationCoordinator;
	long long _localMigrationState;

}

@property (assign,nonatomic) long long localMigrationState;              //@synthesize localMigrationState=_localMigrationState - In the implementation block
@property (nonatomic,readonly) char canForceStartMigration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLocalMigrationState:(long long)arg1 ;
-(void)startCoordinatingMigrationIfNeeded;
-(void)_syncAgentDidFinish:(id)arg1 ;
-(void)_createMigrationCoordinatorIfNeeded;
-(id)_migrationEligibilityLogsDirectoryURL;
-(char)canForceStartMigration;
-(void)forceStartMigration;
-(long long)localMigrationState;
@end

