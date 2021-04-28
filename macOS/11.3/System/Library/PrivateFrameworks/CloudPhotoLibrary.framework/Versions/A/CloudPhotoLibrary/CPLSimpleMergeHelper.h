/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject {

	CPLEngineStore* _store;

}

@property (nonatomic,readonly) CPLEngineStore * store;              //@synthesize store=_store - In the implementation block
+(id)_mergerWithNoConflictsForStore:(id)arg1 ;
+(id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2 ;
-(CPLEngineStore *)store;
-(id)initWithEngineStore:(id)arg1 ;
-(char)_changeCanConflict:(id)arg1 ;
-(id)mergerForBatch:(id)arg1 error:(id*)arg2 ;
@end

