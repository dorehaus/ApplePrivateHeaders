/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestLiveRenderingOptions.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions> {

	char _networkAccessAllowed;
	char _streamingAllowed;
	char _videoComplementAllowed;
	char _allowMediumHighQuality;
	char _restrictToPlayableOnCurrentDevice;
	char _liveRenderVideoIfNeeded;
	char _liveRenderAndOnDemandRenderVideoConcurrently;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;
	long long _streamingVideoIntent;
	long long _contentMode;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	CGSize _targetSize;

}

@property (nonatomic,copy,readonly) id progressHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isStreamingAllowed,nonatomic) char streamingAllowed;                            //@synthesize streamingAllowed=_streamingAllowed - In the implementation block
@property (assign,nonatomic) long long streamingVideoIntent;                                             //@synthesize streamingVideoIntent=_streamingVideoIntent - In the implementation block
@property (assign,getter=isVideoComplementAllowed,nonatomic) char videoComplementAllowed;                //@synthesize videoComplementAllowed=_videoComplementAllowed - In the implementation block
@property (assign,getter=isMediumHighQualityAllowed,nonatomic) char allowMediumHighQuality;              //@synthesize allowMediumHighQuality=_allowMediumHighQuality - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                          //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                      //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) char restrictToPlayableOnCurrentDevice;                                     //@synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice - In the implementation block
@property (assign,nonatomic) char liveRenderVideoIfNeeded;                                               //@synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded - In the implementation block
@property (assign,nonatomic) char liveRenderAndOnDemandRenderVideoConcurrently;                          //@synthesize liveRenderAndOnDemandRenderVideoConcurrently=_liveRenderAndOnDemandRenderVideoConcurrently - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                            //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) char networkAccessAllowed;                    //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                                     //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                           //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(char)isSynchronous;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(char)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isCurrentVersion;
-(char)liveRenderVideoIfNeeded;
-(char)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(char)restrictToPlayableOnCurrentDevice;
-(char)isMediumHighQualityAllowed;
-(char)isStreamingAllowed;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setStreamingAllowed:(char)arg1 ;
-(long long)streamingVideoIntent;
-(void)setStreamingVideoIntent:(long long)arg1 ;
-(char)isVideoComplementAllowed;
-(void)setVideoComplementAllowed:(char)arg1 ;
-(void)setRestrictToPlayableOnCurrentDevice:(char)arg1 ;
-(void)setAllowMediumHighQuality:(char)arg1 ;
-(void)setLiveRenderVideoIfNeeded:(char)arg1 ;
-(void)setLiveRenderAndOnDemandRenderVideoConcurrently:(char)arg1 ;
@end
