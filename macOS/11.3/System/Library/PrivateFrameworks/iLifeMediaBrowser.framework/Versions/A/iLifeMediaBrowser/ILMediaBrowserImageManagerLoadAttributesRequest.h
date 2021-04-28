/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ILMediaObject, AVAsset, NSError, NSMutableDictionary;

@interface ILMediaBrowserImageManagerLoadAttributesRequest : NSObject {

	NSString* _path;
	ILMediaObject* _mediaObject;
	AVAsset* _asset;
	NSError* _error;
	char _doneWithMovieLoading;
	NSMutableDictionary* _cacheInfo;

}

@property (retain) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (retain) ILMediaObject * mediaObject;                  //@synthesize mediaObject=_mediaObject - In the implementation block
@property (retain) NSMutableDictionary * cacheInfo;              //@synthesize cacheInfo=_cacheInfo - In the implementation block
@property (retain) AVAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (assign) char doneWithMovieLoading;                    //@synthesize doneWithMovieLoading=_doneWithMovieLoading - In the implementation block
-(void)dealloc;
-(id)init;
-(NSError *)error;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(ILMediaObject *)mediaObject;
-(void)setMediaObject:(ILMediaObject *)arg1 ;
-(NSMutableDictionary *)cacheInfo;
-(void)setCacheInfo:(NSMutableDictionary *)arg1 ;
-(char)doneWithMovieLoading;
-(void)setDoneWithMovieLoading:(char)arg1 ;
@end

