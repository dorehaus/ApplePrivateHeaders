/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/Versions/A/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
#import <QuickLookThumbnailingDaemon/QLDiskCacheEnumerator.h>

@class NSDictionary, NSMutableDictionary, QLCacheIndexDatabaseQueryEnumerator, NSMutableArray, QLCacheThumbnailData, QLTGeneratorThumbnailRequest, QLCacheFileIdentifier, NSData, QLCacheBlobInfo;

@interface QLDiskCacheQueryEnumerator : QLDiskCacheEnumerator {

	NSDictionary* _generatorRequests;
	NSMutableDictionary* _generatorRequestBeingProcessed;
	QLCacheIndexDatabaseQueryEnumerator* _cacheIndexDatabaseEnumerator;
	NSMutableArray* _sameGeneratorRequests;
	QLCacheThumbnailData* _thumbnailData;
	QLTGeneratorThumbnailRequest* _generatorRequest;
	char _valueFound;
	char _iconMode;
	long long _iconVariant;
	int _interpolationQuality;
	unsigned long long _badgeType;
	unsigned long long _cacheId;
	QLCacheFileIdentifier* _fileIdentifier;
	float _size;
	unsigned _width;
	unsigned _height;
	unsigned _bitsPerComponent;
	unsigned _bitsPerPixel;
	unsigned _bytesPerRow;
	unsigned _bitmapInfo;
	NSData* _bitmapData;
	QLCacheBlobInfo* _bitmapDataBlobInfo;
	NSData* _metadata;
	QLCacheBlobInfo* _metadataBlobInfo;
	int _flavor;
	CGRect _contentRect;
	unsigned long long _externalGeneratorDataHash;

}

@property (retain) NSMutableDictionary * generatorRequestBeingProcessed;              //@synthesize generatorRequestBeingProcessed=_generatorRequestBeingProcessed - In the implementation block
@property (retain) QLCacheBlobInfo * bitmapDataBlobInfo;                              //@synthesize bitmapDataBlobInfo=_bitmapDataBlobInfo - In the implementation block
@property (retain) NSMutableArray * sameGeneratorRequests;                            //@synthesize sameGeneratorRequests=_sameGeneratorRequests - In the implementation block
@property (assign) char iconMode;                                                     //@synthesize iconMode=_iconMode - In the implementation block
@property (assign) unsigned long long badgeType;                                      //@synthesize badgeType=_badgeType - In the implementation block
@property (assign) long long iconVariant;                                             //@synthesize iconVariant=_iconVariant - In the implementation block
@property (assign) int interpolationQuality;                                          //@synthesize interpolationQuality=_interpolationQuality - In the implementation block
@property (assign) unsigned long long externalGeneratorDataHash;                      //@synthesize externalGeneratorDataHash=_externalGeneratorDataHash - In the implementation block
@property (assign) float size;                                                        //@synthesize size=_size - In the implementation block
-(float)size;
-(void)dealloc;
-(void)setSize:(float)arg1 ;
-(unsigned long long)badgeType;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(char)iconMode;
-(void)setIconMode:(char)arg1 ;
-(long long)iconVariant;
-(void)setIconVariant:(long long)arg1 ;
-(int)interpolationQuality;
-(void)setInterpolationQuality:(int)arg1 ;
-(unsigned long long)externalGeneratorDataHash;
-(void)_createNewCacheIndexDatabaseEnumerator;
-(void)_cleanUpValues;
-(NSMutableDictionary *)generatorRequestBeingProcessed;
-(QLCacheBlobInfo *)bitmapDataBlobInfo;
-(void)moveThumbnailRequestsFromBeingProcessedToSameRequestIfTheyMatch:(/*^block*/id)arg1 ;
-(void)_findThumbnailRequestsToProcess;
-(NSMutableArray *)sameGeneratorRequests;
-(id)initWithDiskCache:(id)arg1 thumbnailRequests:(id)arg2 ;
-(id)nextThumbnailRequestWithThumbnailData:(id*)arg1 ;
-(void)setGeneratorRequestBeingProcessed:(NSMutableDictionary *)arg1 ;
-(void)setBitmapDataBlobInfo:(QLCacheBlobInfo *)arg1 ;
-(void)setSameGeneratorRequests:(NSMutableArray *)arg1 ;
-(void)setExternalGeneratorDataHash:(unsigned long long)arg1 ;
@end

