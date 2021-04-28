/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {

	NSObject*<OS_dispatch_queue> _connectionIncomingQueue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionSendIsolation;
	int _diskCacheDeletedExternalDataNotifyToken;

}
-(void)dealloc;
-(void)open;
-(void)close;
-(void)_handleEvent:(id)arg1 ;
-(void)_sendMessage:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5 ;
-(void)cancel:(const GEOTileKey*)arg1 batchID:(int)arg2 ;
-(void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const GEOTileKey*)arg2 options:(unsigned long long)arg3 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 batchID:(int)arg3 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1 ;
-(void)calculateFreeableSize;
-(unsigned long long)calculateFreeableSizeSync;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned*)arg3 hasAdditionalInfos:(const BOOL*)arg4 additionalInfos:(const GEOTileLoaderAdditionalInfo*)arg5 signpostIDs:(const unsigned long long*)arg6 createTimes:(const double*)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10 ;
-(void)flushPendingWrites;
-(void)_handleTile:(id)arg1 ;
-(void)_handleNetworkBegan:(id)arg1 ;
-(void)_handleEditionUpgrade:(id)arg1 ;
-(char)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)_sendMessageWithReplySync:(id)arg1 ;
@end

