/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableArray, CPLPlatformObject, NSString;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject> {

	long long _currentCleanupScopeIndex;
	NSMutableArray* _remainingStoragesToCleanup;
	char _shouldRequestACleanupToScheduler;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1 ;
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)cleanupStepHasMore:(char*)arg1 error:(id*)arg2 ;
-(char)hasCleanupTasks;
@end
