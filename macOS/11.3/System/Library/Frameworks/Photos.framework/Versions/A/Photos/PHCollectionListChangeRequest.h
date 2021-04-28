/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHCollectionList, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHCollectionList* _originalCollectionList;
	char _isTopLevelUserCollection;
	PHRelationshipChangeRequestHelper* _collectionsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * collectionsHelper;                  //@synthesize collectionsHelper=_collectionsHelper - In the implementation block
@property (assign,nonatomic) unsigned customSortKey; 
@property (assign,nonatomic) char customSortAscending; 
@property (assign,nonatomic) char isTopLevelUserCollection;                                            //@synthesize isTopLevelUserCollection=_isTopLevelUserCollection - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedCollectionList; 
@property (nonatomic,retain) NSString * title; 
@property (readonly) char isNewRequest; 
@property (assign,nonatomic) char shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) char mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) char clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2 ;
+(id)changeRequestForCollectionList:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2 ;
+(id)changeRequestForTopLevelCollectionListUserCollections:(id)arg1 ;
+(id)creationRequestForCollectionListWithTitle:(id)arg1 ;
+(void)deleteCollectionLists:(id)arg1 ;
+(void)expungeCollectionLists:(id)arg1 ;
+(void)undeleteCollectionLists:(id)arg1 ;
+(void)_deleteCollectionLists:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(char)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(unsigned)customSortKey;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(char)customSortAscending;
-(void)setCustomSortAscending:(char)arg1 ;
-(id)_mutableObjectIDsAndUUIDs;
-(PHObjectPlaceholder *)placeholderForCreatedCollectionList;
-(void)_setOriginalCollectionList:(id)arg1 ;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addChildCollection:(id)arg1 ;
-(void)removeChildCollection:(id)arg1 ;
-(void)addChildCollections:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)collectionsHelper;
-(char)isTopLevelUserCollection;
-(void)setIsTopLevelUserCollection:(char)arg1 ;
@end

