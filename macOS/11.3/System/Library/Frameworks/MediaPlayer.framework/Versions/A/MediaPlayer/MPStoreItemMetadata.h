/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSNumber, NSArray, NSString, MPStoreArtworkRequestToken, NSURL;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadAssetDictionary;
	NSDictionary* _downloadMetadataDictionary;
	NSDictionary* _storeMusicAPIDictionary;
	NSDate* _expirationDate;
	char _hasOverrideChildStorePlatformDictionaries;
	NSNumber* _hasSubscriptionOffer;
	NSArray* _overrideChildStorePlatformDictionaries;
	NSDictionary* _storePlatformDictionary;
	MPStoreItemMetadata* _parentStoreItemMetadata;
	NSArray* _movieClips;

}

@property (nonatomic,copy,readonly) MPStoreItemMetadata * parentStoreItemMetadata;                       //@synthesize parentStoreItemMetadata=_parentStoreItemMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * artworkRequestToken; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * stationGlyphRequestToken; 
@property (nonatomic,copy,readonly) id artistStoreID; 
@property (nonatomic,copy,readonly) NSArray * artworkTrackIDs; 
@property (nonatomic,copy,readonly) NSString * artistUploadedContentType; 
@property (getter=isBeats1,nonatomic,readonly) char beats1; 
@property (nonatomic,copy,readonly) NSArray * childrenStoreIDs; 
@property (nonatomic,copy,readonly) NSArray * childStoreItemMetadatas; 
@property (nonatomic,copy,readonly) NSString * cloudAlbumID; 
@property (nonatomic,readonly) unsigned long long cloudID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,copy,readonly) id collectionStoreID; 
@property (getter=isCompilation,nonatomic,readonly) char compilation; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,copy,readonly) NSString * curatorName; 
@property (nonatomic,copy,readonly) NSString * curatorHandle; 
@property (nonatomic,copy,readonly) id curatorID; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,copy,readonly) NSString * shortDescriptionText; 
@property (nonatomic,readonly) long long discCount; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * editorNotes; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,copy,readonly) NSString * shortEditorNotes; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveStorePlatformDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * importableStorePlatformDictionary; 
@property (getter=isExplicitContent,nonatomic,readonly) char explicitContent; 
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,readonly) char hasArtistBiography; 
@property (nonatomic,readonly) char hasLyrics; 
@property (nonatomic,readonly) char hasTimeSyncedLyrics; 
@property (nonatomic,readonly) char hasSocialPosts; 
@property (nonatomic,readonly) char hasSubscriptionOffer; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) char isPreorder; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSString * playlistType; 
@property (nonatomic,copy,readonly) NSString * personalMixSortKey; 
@property (nonatomic,copy,readonly) NSString * iTunesBrandType; 
@property (getter=isMasteredForiTunes,nonatomic,readonly) char masteredForiTunes; 
@property (nonatomic,readonly) NSArray * audioTraits; 
@property (nonatomic,readonly) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,readonly) long long movieClipsCount; 
@property (nonatomic,copy,readonly) NSArray * movieClips;                                                //@synthesize movieClips=_movieClips - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,copy,readonly) NSNumber * popularity; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,copy,readonly) NSNumber * shouldBookmarkPlayPosition; 
@property (nonatomic,copy,readonly) NSString * versionHash; 
@property (nonatomic,readonly) char shouldReportPlayEvents; 
@property (nonatomic,readonly) char showComposer; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,readonly) long long purchasedAdamID; 
@property (nonatomic,readonly) long long subscriptionAdamID; 
@property (nonatomic,copy,readonly) id storeID; 
@property (nonatomic,copy,readonly) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy,readonly) id socialProfileID; 
@property (getter=isStoreRedownloadable,nonatomic,readonly) char storeRedownloadable; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,readonly) long long seasonNumber; 
@property (nonatomic,readonly) long long episodeCount; 
@property (nonatomic,copy,readonly) NSURL * shortURL; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * videoSubtype; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSString * handle; 
@property (nonatomic,copy,readonly) NSString * nameRaw; 
@property (getter=isPrivatePerson,nonatomic,readonly) char privatePerson; 
@property (getter=isVerifiedPerson,nonatomic,readonly) char verifiedPerson; 
@property (nonatomic,readonly) long long radioStationTypeID; 
@property (nonatomic,copy,readonly) NSString * radioStationSubtype; 
@property (nonatomic,readonly) char isChart; 
@property (nonatomic,copy,readonly) NSString * radioStationProviderName; 
@property (getter=isLive,nonatomic,readonly) char live; 
@property (nonatomic,copy,readonly) NSArray * radioStationEvents; 
+(char)supportsSecureCoding;
+(id)storeServerCalendar;
+(id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)artistName;
-(double)duration;
-(NSDate *)expirationDate;
-(unsigned long long)cloudID;
-(char)isExpired;
-(char)isLive;
-(NSDate *)lastModifiedDate;
-(NSString *)descriptionText;
-(NSString *)shortName;
-(long long)trackNumber;
-(long long)trackCount;
-(NSDate *)releaseDate;
-(long long)seasonNumber;
-(NSArray *)offers;
-(NSArray *)genreNames;
-(NSString *)itemKind;
-(NSString *)playlistType;
-(long long)discNumber;
-(char)isChart;
-(id)storeID;
-(char)hasTimeSyncedLyrics;
-(id)initWithDownloadAssetDictionary:(id)arg1 ;
-(id)initWithStoreMusicAPIDictionary:(id)arg1 ;
-(id)initWithStoreMusicAPIDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(id)initWithStorePlatformDictionary:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 ;
-(id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 expirationDate:(id)arg3 ;
-(id)artistStoreID;
-(NSString *)artistUploadedContentType;
-(MPStoreArtworkRequestToken *)artworkRequestToken;
-(MPStoreArtworkRequestToken *)stationGlyphRequestToken;
-(NSArray *)artworkTrackIDs;
-(char)isBeats1;
-(NSArray *)childrenStoreIDs;
-(NSArray *)childStoreItemMetadatas;
-(NSString *)cloudAlbumID;
-(NSString *)collectionName;
-(id)collectionStoreID;
-(NSString *)composerName;
-(NSString *)copyrightText;
-(NSString *)curatorName;
-(NSString *)curatorHandle;
-(id)curatorID;
-(long long)discCount;
-(NSString *)editorNotes;
-(NSString *)shortEditorNotes;
-(NSDictionary *)effectiveStorePlatformDictionary;
-(NSDictionary *)importableStorePlatformDictionary;
-(char)hasArtistBiography;
-(char)hasLyrics;
-(char)hasSocialPosts;
-(char)hasSubscriptionOffer;
-(char)isExplicitContent;
-(long long)explicitRating;
-(char)isCompilation;
-(char)isMasteredForiTunes;
-(char)isPreorder;
-(char)isStoreRedownloadable;
-(NSArray *)audioTraits;
-(NSString *)personalMixSortKey;
-(NSString *)iTunesBrandType;
-(MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
-(long long)movementCount;
-(NSString *)movementName;
-(long long)movementNumber;
-(long long)movieClipsCount;
-(NSArray *)playlistIdentifiers;
-(NSNumber *)popularity;
-(NSNumber *)shouldBookmarkPlayPosition;
-(char)shouldReportPlayEvents;
-(char)showComposer;
-(NSString *)cloudUniversalLibraryID;
-(NSArray *)formerStoreAdamIDs;
-(id)socialProfileID;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(long long)episodeCount;
-(NSURL *)shortURL;
-(NSString *)versionHash;
-(NSString *)videoSubtype;
-(NSString *)workName;
-(NSString *)nameRaw;
-(char)isPrivatePerson;
-(char)isVerifiedPerson;
-(long long)radioStationTypeID;
-(NSString *)radioStationSubtype;
-(NSString *)radioStationProviderName;
-(NSArray *)radioStationEvents;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg1 ;
-(id)artworkRequestTokenForScreenshotArtwork;
-(id)artworkRequestTokenForUberArtworkKind:(id)arg1 ;
-(id)avatarArtworkRequestToken;
-(id)artworkRequestTokenForStoreMusicAPIDictionary;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(id)stationGlyphRequestTokenForStoreMusicAPIDictionary;
-(id)stationGlyphRequestTokenForStorePlatformDictionary:(id)arg1 ;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1 ;
-(id)childStorePlatformDictionaryForStoreID:(id)arg1 ;
-(id)descriptionTextWithStyle:(id)arg1 ;
-(NSString *)shortDescriptionText;
-(id)editorNotesWithStyle:(id)arg1 ;
-(id)tvEpisodeArtworkRequestToken;
-(id)tvShowArtworkRequestToken;
-(id)movieArtworkRequestToken;
-(id)flowcaseEditorialArtworkRequestToken;
-(id)brickEditorialArtworkRequestToken;
-(id)metadataByAppendingMetadata:(id)arg1 ;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg1 ;
-(id)metadataWithParentMetadata:(id)arg1 ;
-(id)_storePlatformReleaseDateFormatter;
-(id)_musicAPIDateFormatter;
-(id)_storePlatformLastModifiedDateFormatter;
-(id)_fetchValueFromStoreMusicAPIDictionary:(id)arg1 ;
-(MPStoreItemMetadata *)parentStoreItemMetadata;
-(NSArray *)movieClips;
@end

