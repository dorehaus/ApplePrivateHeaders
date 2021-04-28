/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3Entity, NSString, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {

	ML3Entity* _entity;
	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	long long _fetchableArtworkSourceType;
	NSDictionary* _artworkSourceToTokenMap;
	char _faultedInBestTokens;
	char _faultedInTokens;
	double _retrievalTime;

}

@property (assign,nonatomic) double retrievalTime;                                //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken; 
@property (nonatomic,readonly) NSString * fetchableArtworkToken; 
@property (nonatomic,readonly) long long fetchableArtworkSourceType; 
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(double)retrievalTime;
-(void)setRetrievalTime:(double)arg1 ;
-(void)_faultInBestTokens;
-(void)_faultInTokens;
-(id)initWithEntity:(id)arg1 artworkType:(long long)arg2 ;
-(long long)fetchableArtworkSourceType;
-(id)artworkTokenForSource:(long long)arg1 ;
@end

