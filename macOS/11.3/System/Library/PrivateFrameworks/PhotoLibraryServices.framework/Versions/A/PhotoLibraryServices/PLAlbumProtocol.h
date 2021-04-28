/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableOrderedSet, PLPhotoLibrary, NSNumber, NSString, NSObject, NSURL;


@protocol PLAlbumProtocol <PLAssetContainer>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char isProjectAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@optional
-(NSString *)name;
-(void)setBatchSize:(unsigned long long)arg1;
-(unsigned long long)batchSize;
-(NSMutableOrderedSet *)mutableAssets;
-(id)filteredIndexesForPredicate:(id)arg1;
-(void)setUINotificationsEnabled:(char)arg1;

@required
-(char)isInTrash;
-(NSNumber *)kind;
-(char)isFolder;
-(PLPhotoLibrary *)photoLibrary;
-(char)isPendingPhotoStreamAlbum;
-(char)shouldDeleteWhenEmpty;
-(char)isLibrary;
-(char)isCloudSharedAlbum;
-(char)isOwnedCloudSharedAlbum;
-(char)isMultipleContributorCloudSharedAlbum;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(NSString *)importSessionID;
-(int)pendingItemsCount;
-(int)pendingItemsType;
-(char)hasUnseenContentBoolValue;
-(char)canContributeToCloudSharedAlbum;
-(void)setImportSessionID:(id)arg1;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1;
-(void)batchFetchAssets:(id)arg1;
-(int)kindValue;
-(void)setHasUnseenContentBoolValue:(char)arg1;
-(NSObject *)posterImage;
-(char)isCameraAlbum;
-(char)isPanoramasAlbum;
-(char)isPhotoStreamAlbum;
-(char)isStandInAlbum;
-(char)isFamilyCloudSharedAlbum;
-(char)isRecentlyAddedAlbum;
-(char)isUserLibraryAlbum;
-(char)isProjectAlbum;
-(void)setPendingItemsCount:(int)arg1;
-(void)setPendingItemsType:(int)arg1;

@end

