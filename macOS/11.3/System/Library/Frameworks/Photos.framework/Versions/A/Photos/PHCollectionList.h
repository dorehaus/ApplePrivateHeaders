/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollection.h>

@class NSString, NSDate, NSArray, PHQuery, NSManagedObjectID;

@interface PHCollectionList : PHCollection {

	long long _collectionListType;
	long long _collectionListSubtype;
	NSString* _localizedTitle;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _localizedLocationNames;
	NSArray* _collections;
	PHQuery* _query;
	NSString* _transientIdentifier;
	NSManagedObjectID* _parentFolderObjectID;
	int _plAlbumKind;
	/*^block*/id _childCollectionsSortingComparator;
	unsigned long long _unreadAssetCollectionsCount;
	unsigned long long _estimatedChildCollectionCount;

}

@property (nonatomic,readonly) NSArray * collections;                                         //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) PHQuery * query;                                               //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) id childCollectionsSortingComparator;                     //@synthesize childCollectionsSortingComparator=_childCollectionsSortingComparator - In the implementation block
@property (nonatomic,readonly) unsigned long long unreadAssetCollectionsCount;                //@synthesize unreadAssetCollectionsCount=_unreadAssetCollectionsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedChildCollectionCount;              //@synthesize estimatedChildCollectionCount=_estimatedChildCollectionCount - In the implementation block
@property (nonatomic,readonly) char keyCollectionsAtEnd; 
@property (nonatomic,readonly) NSString * transientIdentifier;                                //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                                  //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                               //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                              //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(char)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)fetchRootAlbumCollectionListWithOptions:(id)arg1 ;
+(id)fetchRootProjectCollectionListWithOptions:(id)arg1 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3 ;
+(id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)fetchCollectionListsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
-(id)description;
-(PHQuery *)query;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)localizedTitle;
-(NSArray *)collections;
-(char)hasLocationInfo;
-(id)parentFolderID;
-(char)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(char)canPerformEditOperation:(long long)arg1 ;
-(Class)changeRequestClass;
-(long long)collectionListType;
-(NSArray *)localizedLocationNames;
-(unsigned long long)collectionFixedOrderPriority;
-(id)effectiveCustomSortKey;
-(NSString *)transientIdentifier;
-(char)canContainCollections;
-(char)keyCollectionsAtEnd;
-(id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4 photoLibrary:(id)arg5 ;
-(long long)collectionListSubtype;
-(id)childCollectionsSortingComparator;
-(unsigned long long)unreadAssetCollectionsCount;
-(unsigned long long)estimatedChildCollectionCount;
-(id)pl_assetContainerList;
-(id)objectReference;
@end

