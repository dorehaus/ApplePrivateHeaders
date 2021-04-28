/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPLinkMetadataStoreTransformer.h>

@class NSString, NSDate, LPImage, LPArtworkMetadata, NSArray;

@interface LPiTunesMediaPodcastEpisodeMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _episodeName;
	NSString* _podcastName;
	NSString* _artist;
	NSDate* _releaseDate;
	LPImage* _artwork;
	LPArtworkMetadata* _artworkMetadata;
	NSArray* _offers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * episodeName;                           //@synthesize episodeName=_episodeName - In the implementation block
@property (nonatomic,copy) NSString * podcastName;                           //@synthesize podcastName=_podcastName - In the implementation block
@property (nonatomic,copy) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) LPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) LPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                 //@synthesize offers=_offers - In the implementation block
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(LPImage *)artwork;
-(void)setArtwork:(LPImage *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)podcastName;
-(void)setPodcastName:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(LPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(LPArtworkMetadata *)arg1 ;
-(NSString *)episodeName;
-(void)setEpisodeName:(NSString *)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(char)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(id)storeIdentifierForTransformer:(id)arg1 ;
@end
