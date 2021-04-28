/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCTagsFetchOperationDelegate;
@class NSArray, FCHeldRecords, FCTagRecordSource, FCAssetManager;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {

	char _includeChildren;
	char _includeParents;
	char _overrideTargetsCachePolicy;
	char _overrideChildrenCachePolicy;
	unsigned long long _targetsCachePolicy;
	double _targetsMaximumCachedAge;
	unsigned long long _childrenCachePolicy;
	double _childrenMaximumCachedAge;
	NSArray* _tagIDs;
	FCHeldRecords* _heldTagRecords;
	FCHeldRecords* _heldParentTagRecords;
	FCHeldRecords* _heldChildTagRecords;
	FCTagRecordSource* _tagRecordSource;
	FCAssetManager* _assetManager;
	id<FCTagsFetchOperationDelegate> _delegate;

}

@property (assign,nonatomic) char includeChildren;                      //@synthesize includeChildren=_includeChildren - In the implementation block
@property (assign,nonatomic) char includeParents;                       //@synthesize includeParents=_includeParents - In the implementation block
@property (assign) char overrideTargetsCachePolicy;                     //@synthesize overrideTargetsCachePolicy=_overrideTargetsCachePolicy - In the implementation block
@property (assign) unsigned long long targetsCachePolicy;               //@synthesize targetsCachePolicy=_targetsCachePolicy - In the implementation block
@property (assign) double targetsMaximumCachedAge;                      //@synthesize targetsMaximumCachedAge=_targetsMaximumCachedAge - In the implementation block
@property (assign) char overrideChildrenCachePolicy;                    //@synthesize overrideChildrenCachePolicy=_overrideChildrenCachePolicy - In the implementation block
@property (assign) unsigned long long childrenCachePolicy;              //@synthesize childrenCachePolicy=_childrenCachePolicy - In the implementation block
@property (assign) double childrenMaximumCachedAge;                     //@synthesize childrenMaximumCachedAge=_childrenMaximumCachedAge - In the implementation block
-(void)setIncludeChildren:(char)arg1 ;
-(char)includeChildren;
-(id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4 ;
-(void)setIncludeParents:(char)arg1 ;
-(void)setOverrideChildrenCachePolicy:(char)arg1 ;
-(void)setChildrenCachePolicy:(unsigned long long)arg1 ;
-(void)setChildrenMaximumCachedAge:(double)arg1 ;
-(id)completeFetchOperation;
-(void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2 ;
-(id)fetchTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchParentTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchChildTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(char)overrideTargetsCachePolicy;
-(unsigned long long)targetsCachePolicy;
-(double)targetsMaximumCachedAge;
-(char)overrideChildrenCachePolicy;
-(unsigned long long)childrenCachePolicy;
-(double)childrenMaximumCachedAge;
-(char)includeParents;
-(void)setOverrideTargetsCachePolicy:(char)arg1 ;
-(void)setTargetsCachePolicy:(unsigned long long)arg1 ;
-(void)setTargetsMaximumCachedAge:(double)arg1 ;
@end
