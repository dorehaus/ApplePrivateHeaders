/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface SOFileTransferResourceLoader : NSObject {

	NSMutableDictionary* _imageGUIDToScaledDownPath;
	NSMutableSet* _imageGUIDsWritingToDisk;
	NSMutableSet* _imageGUIDsNotWorthScaling;
	NSObject*<OS_dispatch_queue> _scalingQueue;
	NSMutableDictionary* _passURLToPKPassMap;
	NSMutableDictionary* _passGUIDToURLMap;
	NSObject*<OS_dispatch_queue> _mapLoadingQueue;
	NSObject*<OS_dispatch_queue> _mapVariableQueue;
	NSMutableDictionary* _loadingMapFileURLToSemaphore;
	NSMutableDictionary* _fileURLToMapURLMap;
	NSMutableDictionary* _mapURLtoRenderedImageMap;
	NSMutableDictionary* _mapGUIDtoMapFileURLMap;

}

@property (retain) NSMutableDictionary * imageGUIDToScaledDownPath;                           //@synthesize imageGUIDToScaledDownPath=_imageGUIDToScaledDownPath - In the implementation block
@property (retain) NSMutableSet * imageGUIDsWritingToDisk;                                    //@synthesize imageGUIDsWritingToDisk=_imageGUIDsWritingToDisk - In the implementation block
@property (retain) NSMutableSet * imageGUIDsNotWorthScaling;                                  //@synthesize imageGUIDsNotWorthScaling=_imageGUIDsNotWorthScaling - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> scalingQueue;                                 //@synthesize scalingQueue=_scalingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passURLToPKPassMap;                        //@synthesize passURLToPKPassMap=_passURLToPKPassMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passGUIDToURLMap;                          //@synthesize passGUIDToURLMap=_passGUIDToURLMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapLoadingQueue;                    //@synthesize mapLoadingQueue=_mapLoadingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapVariableQueue;                   //@synthesize mapVariableQueue=_mapVariableQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * loadingMapFileURLToSemaphore;              //@synthesize loadingMapFileURLToSemaphore=_loadingMapFileURLToSemaphore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileURLToMapURLMap;                        //@synthesize fileURLToMapURLMap=_fileURLToMapURLMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapURLtoRenderedImageMap;                  //@synthesize mapURLtoRenderedImageMap=_mapURLtoRenderedImageMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapGUIDtoMapFileURLMap;                    //@synthesize mapGUIDtoMapFileURLMap=_mapGUIDtoMapFileURLMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(char)mapsGeneratedForMapFileURL:(id)arg1 ;
-(id)renderedMapImageForMapFileURL:(id)arg1 ;
-(id)loadPassAtURL:(id)arg1 ;
-(id)blurredImagePathForFileTransfer:(id)arg1 ;
-(id)scaledImagePathForFileTransfer:(id)arg1 ;
-(char)mapsGeneratedForGUID:(id)arg1 ;
-(id)passForGUID:(id)arg1 ;
-(void)_scaleImageFileTransfer:(id)arg1 toMaxSize:(double)arg2 saveToLocation:(id)arg3 ;
-(id)_blurredImageGUID:(id)arg1 ;
-(void)_blurImageFileTransfer:(id)arg1 toMaxSize:(double)arg2 saveToLocation:(id)arg3 blocking:(char)arg4 ;
-(id)CIImageWithOrientation:(id)arg1 ;
-(NSMutableDictionary *)passURLToPKPassMap;
-(id)_mapFromFileURL:(id)arg1 ;
-(void)postMapLoadComplete:(id)arg1 ;
-(id)loadPassForGUID:(id)arg1 atURL:(id)arg2 ;
-(void)assignFileTransferGUID:(id)arg1 toFileURL:(id)arg2 ;
-(id)renderedMapImageForGUID:(id)arg1 ;
-(NSMutableDictionary *)imageGUIDToScaledDownPath;
-(void)setImageGUIDToScaledDownPath:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)imageGUIDsWritingToDisk;
-(void)setImageGUIDsWritingToDisk:(NSMutableSet *)arg1 ;
-(NSMutableSet *)imageGUIDsNotWorthScaling;
-(void)setImageGUIDsNotWorthScaling:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)scalingQueue;
-(void)setScalingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPassURLToPKPassMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)passGUIDToURLMap;
-(void)setPassGUIDToURLMap:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapLoadingQueue;
-(void)setMapLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapVariableQueue;
-(void)setMapVariableQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)loadingMapFileURLToSemaphore;
-(void)setLoadingMapFileURLToSemaphore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)fileURLToMapURLMap;
-(void)setFileURLToMapURLMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapURLtoRenderedImageMap;
-(void)setMapURLtoRenderedImageMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapGUIDtoMapFileURLMap;
-(void)setMapGUIDtoMapFileURLMap:(NSMutableDictionary *)arg1 ;
@end

