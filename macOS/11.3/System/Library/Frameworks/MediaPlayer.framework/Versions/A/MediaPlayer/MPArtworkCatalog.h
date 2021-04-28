/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPArtworkRepresentationCollection, NSString, NSCache;

@interface MPArtworkCatalog : NSObject {

	CGSize _fittingSize;
	long long _modelRevisionID;
	char _allowsVideoConstrainedNetworkAccess;
	char _loadingRepresentation;
	double _destinationScale;
	long long _preferredVideoFormat;
	id _destination;
	/*^block*/id _configurationBlock;
	unsigned long long _representationKinds;
	MPArtworkRepresentationCollection* _bestAvailableRepresentationCollection;
	NSString* _cacheIdentifier;
	id _requestingContext;
	id _token;
	id<MPArtworkDataSource> _dataSource;
	unsigned long long _renderHint;
	unsigned long long _videoCacheStoragePolicy;

}

@property (nonatomic,readonly) long long MP_artworkType; 
@property (assign,nonatomic,__weak) id destination;                                                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                                                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (assign,nonatomic) unsigned long long representationKinds;                                                 //@synthesize representationKinds=_representationKinds - In the implementation block
@property (nonatomic,retain) MPArtworkRepresentationCollection * bestAvailableRepresentationCollection;              //@synthesize bestAvailableRepresentationCollection=_bestAvailableRepresentationCollection - In the implementation block
@property (getter=isLoadingRepresentation) char loadingRepresentation;                                               //@synthesize loadingRepresentation=_loadingRepresentation - In the implementation block
@property (nonatomic,copy) NSString * cacheIdentifier;                                                               //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id requestingContext;                                                            //@synthesize requestingContext=_requestingContext - In the implementation block
@property (nonatomic,readonly) id token;                                                                             //@synthesize token=_token - In the implementation block
@property (nonatomic,__weak,readonly) id<MPArtworkDataSource> dataSource;                                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,readonly) NSCache * videoCache; 
@property (nonatomic,readonly) id<MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier; 
@property (assign,nonatomic) unsigned long long renderHint;                                                          //@synthesize renderHint=_renderHint - In the implementation block
@property (assign,nonatomic) unsigned long long videoCacheStoragePolicy;                                             //@synthesize videoCacheStoragePolicy=_videoCacheStoragePolicy - In the implementation block
@property (assign,nonatomic) double destinationScale;                                                                //@synthesize destinationScale=_destinationScale - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                                                     //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) CGSize scaledFittingSize; 
@property (nonatomic,readonly) char hasImageOnDisk; 
@property (assign,nonatomic) char allowsVideoConstrainedNetworkAccess;                                               //@synthesize allowsVideoConstrainedNetworkAccess=_allowsVideoConstrainedNetworkAccess - In the implementation block
@property (assign,nonatomic) long long preferredVideoFormat;                                                         //@synthesize preferredVideoFormat=_preferredVideoFormat - In the implementation block
+(id)_artworkLoadQueue;
+(id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2 representationKind:(long long)arg3 ;
+(id)staticArtworkCatalogWithImage:(id)arg1 ;
+(id)staticArtworkCatalogWithRepresentationCollection:(id)arg1 ;
+(void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(void)setCachePurgesWhenEnteringBackground:(char)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 representationKind:(long long)arg4 ;
+(void)setCachePurgesWhenEnteringBackground:(char)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 representationKind:(long long)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)token;
-(CGSize)fittingSize;
-(id<MPArtworkDataSource>)dataSource;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(NSCache *)cache;
-(NSString *)cacheIdentifier;
-(id)initWithToken:(id)arg1 dataSource:(id)arg2 ;
-(void)setDestinationScale:(double)arg1 ;
-(CGSize)scaledFittingSize;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)requestImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestImageWithCompletion:(/*^block*/id)arg1 ;
-(id)bestImageFromDisk;
-(char)hasImageOnDisk;
-(void)setDestination:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)requestVideoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAllowsVideoConstrainedNetworkAccess:(char)arg1 ;
-(void)setPreferredVideoKind:(long long)arg1 ;
-(void)setDestination:(id)arg1 forRepresentationKinds:(unsigned long long)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(char)isArtworkVisuallyIdenticalToCatalog:(id)arg1 ;
-(id<MPArtworkDataSourceVisualIdenticality>)visualIdenticalityIdentifier;
-(void)requestExportableArtworkPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2 ;
-(NSCache *)videoCache;
-(void)_loadBestRepresentationIfNeededOfKind:(long long)arg1 ;
-(void)_loadRepresentationOfKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_existingRepresentationOfKind:(long long)arg1 ;
-(void)_updateRepresentations;
-(void)_updateRepresentationOfKind:(long long)arg1 ;
-(void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(char)arg2 modelRevisionID:(long long)arg3 ;
-(void)_requestBestRepresentationOfKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDestination:(id)arg1 progressiveConfigurationBlock:(/*^block*/id)arg2 ;
-(double)destinationScale;
-(char)allowsVideoConstrainedNetworkAccess;
-(long long)preferredVideoFormat;
-(void)setPreferredVideoFormat:(long long)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(unsigned long long)representationKinds;
-(void)setRepresentationKinds:(unsigned long long)arg1 ;
-(MPArtworkRepresentationCollection *)bestAvailableRepresentationCollection;
-(void)setBestAvailableRepresentationCollection:(MPArtworkRepresentationCollection *)arg1 ;
-(char)isLoadingRepresentation;
-(void)setLoadingRepresentation:(char)arg1 ;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(id)requestingContext;
-(void)setRequestingContext:(id)arg1 ;
-(unsigned long long)renderHint;
-(void)setRenderHint:(unsigned long long)arg1 ;
-(unsigned long long)videoCacheStoragePolicy;
-(void)setVideoCacheStoragePolicy:(unsigned long long)arg1 ;
-(long long)MP_artworkType;
@end
