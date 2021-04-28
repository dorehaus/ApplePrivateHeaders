/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAGraph.h>
#import <libobjc.A.dylib/PVPhotoLibraryProtocol.h>

@class NSDictionary, NSString;

@interface PVLibraryGraph : MAGraph <PVPhotoLibraryProtocol> {

	NSDictionary* _faceprintDictionary;
	NSDictionary* _distanceIdentityDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * faceprintDictionary;                     //@synthesize faceprintDictionary=_faceprintDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * distanceIdentityDictionary;              //@synthesize distanceIdentityDictionary=_distanceIdentityDictionary - In the implementation block
+(id)graphForLibrary:(id)arg1 ingestPeople:(char)arg2 ;
+(Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(id)originGraphForFacesDataSnapshotAtPath:(id)arg1 ;
+(id)graphForFacesDataSnapshotAtPath:(id)arg1 ;
+(id)graphWithName:(id)arg1 forFacesDataSnapshotAtPath:(id)arg2 ;
+(id)defaultFacesDataSnapshotPath;
-(id)init;
-(id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2 ;
-(char)pv_performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)pv_persistentStorageDirectoryURL;
-(id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchPersonsWithType:(unsigned long long)arg1 ;
-(id)pv_fetchPersonsInMoment:(id)arg1 ;
-(id)pv_fetchCandidatePersonsForPerson:(id)arg1 ;
-(id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1 ;
-(id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(unsigned long long)pv_numberOfFacesWithFaceprints;
-(id)pv_fetchFacesWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchFacesForPerson:(id)arg1 ;
-(id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2 ;
-(id)pv_fetchFacesForFaceGroup:(id)arg1 ;
-(id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(id)pv_fetchMoments;
-(id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchMomentsForPerson:(id)arg1 ;
-(id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchAssetsInMoment:(id)arg1 ;
-(id)pv_fetchAssetsForPerson:(id)arg1 ;
-(id)pv_fetchAssetsForFaceGroup:(id)arg1 ;
-(id)pv_fetchFaceGroups;
-(id)pv_fetchFaceGroupsForPerson:(id)arg1 ;
-(id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
-(id)pv_lastAssetDate;
-(float)pv_faceProcessingProgress;
-(char)saveFacesDataSnapshotAtPath:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)faceprintDictionary;
-(NSDictionary *)distanceIdentityDictionary;
-(unsigned long long)getPeopleTypeForFaceGroupNode:(id)arg1 ;
-(id)_infoNode;
-(id)_insertMomentNodeForMoment:(id)arg1 ;
-(id)_insertAssetNodeForAsset:(id)arg1 ;
-(id)_insertFaceNodeForFace:(id)arg1 ;
-(id)_insertPeopleNodeForPerson:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)_insertFaceGroupNodeForFaceGroup:(id)arg1 ;
-(char)_saveDictionary:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)setFaceprintDictionary:(NSDictionary *)arg1 ;
-(void)setDistanceIdentityDictionary:(NSDictionary *)arg1 ;
@end

