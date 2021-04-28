/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLMomentData.h>
#import <libobjc.A.dylib/PLDiagnosticsProvider.h>

@class NSDate, CLLocation, NSSet, NSArray, NSString, PLMomentList;

@interface PLMoment : PLManagedObject <PLMomentData, PLDiagnosticsProvider> {

	char _loadedNameInfo;
	CLLocation* _cachedApproximateLocation;
	char _didCacheApproximateLocation;
	CLLocationCoordinate2D _cachedCoordinate;
	char _didCacheCoordinate;
	char isRegisteredForChanges;
	char didRegisteredWithUserInterfaceContext;

}

@property (assign,nonatomic) char isRegisteredForChanges; 
@property (assign,nonatomic) char didRegisteredWithUserInterfaceContext; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (assign,nonatomic) int timeZoneOffset; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) PLMomentList * yearMomentList; 
@property (nonatomic,retain) PLMomentList * megaMomentList; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (assign,nonatomic) double approximateLatitude; 
@property (assign,nonatomic) double approximateLongitude; 
@property (nonatomic,retain) CLLocation * approximateLocation; 
@property (assign,nonatomic) float aggregationScore; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (assign,nonatomic) unsigned short processedLocation; 
@property (assign,nonatomic) double gpsHorizontalAccuracy; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain,readonly) NSArray * batchedAssets; 
@property (nonatomic,readonly) id<PLPhotosHighlightData> highlight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
+(id)entityName;
+(void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)sortByTimeSortDescriptors;
+(id)baseSearchIndexPredicate;
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)predicateForAssetsIncludedInMoments;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(char)arg2 error:(id*)arg3 ;
+(id)allInvalidAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)allInvalidMomentIDsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentIDsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)momentsWithLocationTypeUnprocessedInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allInvalidMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg1 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 predicate:(id)arg2 idsOnly:(char)arg3 error:(id*)arg4 ;
+(id)predicateForInvalidMoments;
+(id)predicateForInvalidAssets;
+(id)allAssetsInManagedObjectContext:(id)arg1 predicate:(id)arg2 IDsOnly:(char)arg3 error:(id*)arg4 ;
+(id)predicateForInvalidAssetsIgnoringAssetsWithIdentifiers:(id)arg1 ;
+(id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)awakeFromInsert;
-(void)delete;
-(void)didTurnIntoFault;
-(void)willSave;
-(id)diagnosticInformation;
-(void)awakeFromFetch;
-(CLLocation *)approximateLocation;
-(char)isCloudSharedAlbum;
-(id)groupURL;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)mutableAssets;
-(CGImageRef)posterImage;
-(char)supportsDiagnosticInformation;
-(void)_appendHolidays:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3 ;
-(void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendWorkText:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendHomeToCollection:(id)arg1 ;
-(id)displayTitleWithDateFormatter:(id)arg1 ;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5 ;
-(id)bestAsset;
-(void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4 ;
-(void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3 ;
-(void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(CLLocationCoordinate2D)pl_coordinate;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)removeAssetData:(id)arg1 ;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(char)arg1 ;
-(char)didRegisteredWithUserInterfaceContext;
-(char)isRegisteredForChanges;
-(void)willTurnIntoFault;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)setIsRegisteredForChanges:(char)arg1 ;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;
-(unsigned long long)pl_numberOfAssets;
-(CLLocation *)pl_location;
-(void)setApproximateLocation:(CLLocation *)arg1 ;
-(NSArray *)batchedAssets;
-(void)insertAssetData:(id)arg1 ;
-(void)replaceObjectInAssets:(id)arg1 withObject:(id)arg2 ;
-(void)removeAssetsObject:(id)arg1 ;
-(unsigned long long)fetchedAssetsCount;
@end

