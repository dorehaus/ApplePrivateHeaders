/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob {

	long long _actionType;
	NSString* _albumUUID;
	NSArray* _assetUUIDs;
	long long _cloudFeedContent;
	NSString* _suggestedCMMUUID;
	NSString* _momentShareUUID;

}

@property (assign) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * albumUUID;                      //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                    //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) long long cloudFeedContent;              //@synthesize cloudFeedContent=_cloudFeedContent - In the implementation block
@property (nonatomic,copy) NSString * suggestedCMMUUID;               //@synthesize suggestedCMMUUID=_suggestedCMMUUID - In the implementation block
@property (nonatomic,copy) NSString * momentShareUUID;                //@synthesize momentShareUUID=_momentShareUUID - In the implementation block
+(void)userDidDeleteSharedAssets:(id)arg1 ;
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(id)newUserActivityDaemonJob;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
+(void)userDidChangeStatusForSuggestedCMM:(id)arg1 ;
+(void)userDidChangeStatusForMomentShare:(id)arg1 ;
-(void)run;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)runDaemonSide;
-(NSArray *)assetUUIDs;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(NSString *)albumUUID;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(long long)cloudFeedContent;
-(NSString *)suggestedCMMUUID;
-(NSString *)momentShareUUID;
-(void)setCloudFeedContent:(long long)arg1 ;
-(void)setSuggestedCMMUUID:(NSString *)arg1 ;
-(void)setMomentShareUUID:(NSString *)arg1 ;
@end
