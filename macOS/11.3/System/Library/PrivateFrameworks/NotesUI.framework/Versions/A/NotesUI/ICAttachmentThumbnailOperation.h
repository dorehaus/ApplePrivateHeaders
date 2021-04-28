/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/ICAttachmentThumbnailOperation.h>

@protocol ICAttachmentThumbnailOperation
@required
-(void)addCompletionBlock:(/*^block*/id)arg1;
-(char)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;

@end


@class ICAppearanceInfo, ICThumbnailDataCache, NSString, ICAttachmentThumbnailOperationQueue, NSMutableArray, NSManagedObjectID, ICAttachmentPreviewImageLoader, NSURL;

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation> {

	char _attachmentPropertiesCaptured;
	char _showAsFileIcon;
	char _isMovie;
	double _scale;
	ICAppearanceInfo* _appearanceInfo;
	ICThumbnailDataCache* _cache;
	NSString* _cacheKey;
	/*^block*/id _fallbackBlock;
	/*^block*/id _processingBlock;
	ICAttachmentThumbnailOperationQueue* _queue;
	NSMutableArray* _completionBlocks;
	NSManagedObjectID* _attachmentID;
	ICAttachmentPreviewImageLoader* _attachmentPreviewImageLoader;
	NSURL* _mediaURL;
	unsigned long long _imageScaling;
	CGSize _minSize;

}

@property (assign,nonatomic) CGSize minSize;                                                             //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) double scale;                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) ICAppearanceInfo * appearanceInfo;                                          //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
@property (nonatomic,retain) ICThumbnailDataCache * cache;                                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                                                        //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                                             //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (nonatomic,copy) id processingBlock;                                                           //@synthesize processingBlock=_processingBlock - In the implementation block
@property (assign,nonatomic,__weak) ICAttachmentThumbnailOperationQueue * queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                          //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * attachmentID;                                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (assign,nonatomic) char attachmentPropertiesCaptured;                                          //@synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewImageLoader * attachmentPreviewImageLoader;              //@synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                                           //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                                            //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) char showAsFileIcon;                                                        //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) char isMovie;                                                               //@synthesize isMovie=_isMovie - In the implementation block
-(ICAttachmentThumbnailOperationQueue *)queue;
-(double)scale;
-(void)main;
-(void)setQueue:(ICAttachmentThumbnailOperationQueue *)arg1 ;
-(CGSize)minSize;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(unsigned long long)imageScaling;
-(void)setMinSize:(CGSize)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(ICThumbnailDataCache *)cache;
-(NSURL *)mediaURL;
-(void)setCache:(ICThumbnailDataCache *)arg1 ;
-(id)processingBlock;
-(NSString *)cacheKey;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(char)isMovie;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(ICAppearanceInfo *)appearanceInfo;
-(char)showAsFileIcon;
-(void)setShowAsFileIcon:(char)arg1 ;
-(void)setIsMovie:(char)arg1 ;
-(char)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2 ;
-(id)initWithAttachment:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 fallbackBlock:(/*^block*/id)arg9 queue:(id)arg10 ;
-(void)setFallbackBlock:(id)arg1 ;
-(void)setProcessingBlock:(id)arg1 ;
-(void)capturePropertiesFromAttachment:(id)arg1 ;
-(void)setAttachmentPreviewImageLoader:(ICAttachmentPreviewImageLoader *)arg1 ;
-(ICAttachmentPreviewImageLoader *)attachmentPreviewImageLoader;
-(void)setAttachmentPropertiesCaptured:(char)arg1 ;
-(char)attachmentPropertiesCaptured;
-(id)fallbackBlock;
@end

