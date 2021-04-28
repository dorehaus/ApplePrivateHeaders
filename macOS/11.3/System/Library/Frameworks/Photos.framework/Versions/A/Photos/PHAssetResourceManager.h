/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {

	Ai _nextRequestID;
	NSMutableDictionary* _requestsByID;
	os_unfair_lock_s _lock;
	unsigned long long _managerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)vcp_reportDownload:(unsigned long long)arg1 ;
+(int)vcp_inMemoryDownload:(id)arg1 toData:(id*)arg2 cancel:(/*^block*/id)arg3 ;
+(id)defaultManager;
+(unsigned long long)_nextManagerID;
-(id)init;
-(int)_nextRequestID;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2 ;
-(int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelDataRequest:(int)arg1 ;
-(int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)infoForRequest:(int)arg1 ;
-(id)consolidateAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)reconnectAssets:(id)arg1 urlResolvingHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_autoResolveReferencedResources:(id)arg1 folderURL:(id)arg2 resourceClient:(id)arg3 ;
@end

