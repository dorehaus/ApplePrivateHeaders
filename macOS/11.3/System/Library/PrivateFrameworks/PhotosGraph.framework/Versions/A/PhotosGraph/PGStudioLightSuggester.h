/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, PLPhotoEditPersistenceManager, NSMutableDictionary, PLPhotoEffect, NSString;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	PLPhotoEditPersistenceManager* _photoEditPersistenceManager;
	NSMutableDictionary* _compositionControllerByAssetUUID;
	NSMutableDictionary* _assetMasterSizeByAssetUUID;
	PLPhotoEffect* _studioLightPhotoEffect;
	NSMutableDictionary* _recipeReasonByAssetUUID;

}

@property (assign,nonatomic) char lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)init;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)suggestionWithAsset:(id)arg1 ;
-(id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)compositionControllerForAsset:(id)arg1 baseVersion:(out long long*)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)studioLightRecipeWithAsset:(id)arg1 ;
@end

