/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRPlayerPath, NSString, NSArray, _MRPlaybackQueueRequestProtobuf, NSData, NSDictionary;

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding> {

	char _hasLocation;
	char _hasLength;
	char _includeMetadata;
	char _hasIncludeMetadata;
	char _hasArtworkWidth;
	char _hasArtworkHeight;
	char _includeLyrics;
	char _hasIncludeLyrics;
	char _includeSections;
	char _hasIncludeSections;
	char _includeInfo;
	char _hasIncludeInfo;
	char _includeLanguageOptions;
	char _hasIncludeLanguageOptions;
	char _returnContentItemAssetsInUserCompletion;
	char _hasReturnContentItemAssetsInUserCompletion;
	char _legacyNowPlayingInfoRequest;
	char _hasLegacyNowPlayingInfoRequest;
	char _hasCachingPolicy;
	unsigned _cachingPolicy;
	long long _location;
	long long _length;
	double _artworkWidth;
	double _artworkHeight;
	MRPlayerPath* _playerPath;
	NSString* _requestIdentifier;
	NSString* _label;
	NSArray* _contentItemIdentifiers;

}

@property (assign,getter=isLegacyNowPlayingInfoRequest,nonatomic) char legacyNowPlayingInfoRequest;              //@synthesize legacyNowPlayingInfoRequest=_legacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) char hasLegacyNowPlayingInfoRequest;                                                //@synthesize hasLegacyNowPlayingInfoRequest=_hasLegacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) unsigned cachingPolicy;                                                             //@synthesize cachingPolicy=_cachingPolicy - In the implementation block
@property (assign,nonatomic) char hasCachingPolicy;                                                              //@synthesize hasCachingPolicy=_hasCachingPolicy - In the implementation block
@property (nonatomic,readonly) _MRPlaybackQueueRequestProtobuf * protobuf; 
@property (assign,nonatomic) long long location;                                                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasLocation;                                                                   //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) long long length;                                                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char hasLength;                                                                     //@synthesize hasLength=_hasLength - In the implementation block
@property (assign,nonatomic) char includeMetadata;                                                               //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) char hasIncludeMetadata;                                                            //@synthesize hasIncludeMetadata=_hasIncludeMetadata - In the implementation block
@property (assign,nonatomic) double artworkWidth;                                                                //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) char hasArtworkWidth;                                                               //@synthesize hasArtworkWidth=_hasArtworkWidth - In the implementation block
@property (assign,nonatomic) double artworkHeight;                                                               //@synthesize artworkHeight=_artworkHeight - In the implementation block
@property (assign,nonatomic) char hasArtworkHeight;                                                              //@synthesize hasArtworkHeight=_hasArtworkHeight - In the implementation block
@property (assign,nonatomic) char includeLyrics;                                                                 //@synthesize includeLyrics=_includeLyrics - In the implementation block
@property (assign,nonatomic) char hasIncludeLyrics;                                                              //@synthesize hasIncludeLyrics=_hasIncludeLyrics - In the implementation block
@property (assign,nonatomic) char includeSections;                                                               //@synthesize includeSections=_includeSections - In the implementation block
@property (assign,nonatomic) char hasIncludeSections;                                                            //@synthesize hasIncludeSections=_hasIncludeSections - In the implementation block
@property (assign,nonatomic) char includeInfo;                                                                   //@synthesize includeInfo=_includeInfo - In the implementation block
@property (assign,nonatomic) char hasIncludeInfo;                                                                //@synthesize hasIncludeInfo=_hasIncludeInfo - In the implementation block
@property (assign,nonatomic) char includeLanguageOptions;                                                        //@synthesize includeLanguageOptions=_includeLanguageOptions - In the implementation block
@property (assign,nonatomic) char hasIncludeLanguageOptions;                                                     //@synthesize hasIncludeLanguageOptions=_hasIncludeLanguageOptions - In the implementation block
@property (assign,nonatomic) char returnContentItemAssetsInUserCompletion;                                       //@synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion - In the implementation block
@property (assign,nonatomic) char hasReturnContentItemAssetsInUserCompletion;                                    //@synthesize hasReturnContentItemAssetsInUserCompletion=_hasReturnContentItemAssetsInUserCompletion - In the implementation block
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                          //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                                         //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * contentItemIdentifiers;                                                     //@synthesize contentItemIdentifiers=_contentItemIdentifiers - In the implementation block
@property (nonatomic,readonly) char rangeContainsNowPlayingItem; 
@property (nonatomic,readonly) char shouldRequestItem; 
@property (nonatomic,readonly) char shouldRequestItemNotConsideringMetadata; 
@property (nonatomic,readonly) char containsNonDefaultAssets; 
@property (nonatomic,readonly) MRPlaybackQueueRequest * skeleton; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) char hasRange; 
@property (nonatomic,readonly) char includeArtwork; 
+(char)supportsSecureCoding;
+(id)defaultPlaybackQueueRequest;
+(id)defaultPlaybackQueueRequestWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(long long)location;
-(NSRange)range;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithRange:(NSRange)arg1 ;
-(void)setLocation:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)requestIdentifier;
-(_MRPlaybackQueueRequestProtobuf *)protobuf;
-(char)hasLocation;
-(void)setHasLength:(char)arg1 ;
-(char)hasLength;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)setHasLocation:(char)arg1 ;
-(char)match:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSArray *)contentItemIdentifiers;
-(char)hasRange;
-(id)initFromTransactionName:(unsigned long long)arg1 ;
-(char)shouldRequestItem;
-(char)includeArtwork;
-(double)artworkWidth;
-(double)artworkHeight;
-(char)includeInfo;
-(char)includeLyrics;
-(char)includeLanguageOptions;
-(char)includeSections;
-(id)initWithProtobuf:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(MRPlaybackQueueRequest *)skeleton;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setArtworkHeight:(double)arg1 ;
-(void)setArtworkWidth:(double)arg1 ;
-(void)setIncludeMetadata:(char)arg1 ;
-(char)returnContentItemAssetsInUserCompletion;
-(void)setReturnContentItemAssetsInUserCompletion:(char)arg1 ;
-(void)setCachingPolicy:(unsigned)arg1 ;
-(void)setLegacyNowPlayingInfoRequest:(char)arg1 ;
-(void)setIncludeLanguageOptions:(char)arg1 ;
-(char)includeMetadata;
-(char)hasIncludeMetadata;
-(char)hasArtworkWidth;
-(char)hasArtworkHeight;
-(char)hasIncludeLyrics;
-(char)hasIncludeSections;
-(char)hasIncludeInfo;
-(char)hasIncludeLanguageOptions;
-(char)hasReturnContentItemAssetsInUserCompletion;
-(char)isLegacyNowPlayingInfoRequest;
-(unsigned)cachingPolicy;
-(char)shouldRequestItemNotConsideringMetadata;
-(char)hasCachingPolicy;
-(char)hasLegacyNowPlayingInfoRequest;
-(void)setContentItemIdentifiers:(NSArray *)arg1 ;
-(void)setHasIncludeMetadata:(char)arg1 ;
-(void)setHasArtworkWidth:(char)arg1 ;
-(void)setHasArtworkHeight:(char)arg1 ;
-(void)setIncludeLyrics:(char)arg1 ;
-(void)setHasIncludeLyrics:(char)arg1 ;
-(void)setIncludeSections:(char)arg1 ;
-(void)setHasIncludeSections:(char)arg1 ;
-(void)setIncludeInfo:(char)arg1 ;
-(void)setHasIncludeInfo:(char)arg1 ;
-(void)setHasIncludeLanguageOptions:(char)arg1 ;
-(void)setHasReturnContentItemAssetsInUserCompletion:(char)arg1 ;
-(void)setHasLegacyNowPlayingInfoRequest:(char)arg1 ;
-(void)setHasCachingPolicy:(char)arg1 ;
-(id)initWithIdentifiers:(id)arg1 range:(NSRange)arg2 ;
-(char)rangeContainsNowPlayingItem;
-(char)containsNonDefaultAssets;
-(char)exactMatch:(id)arg1 ;
@end
