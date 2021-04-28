/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/Versions/A/AssetCacheServicesExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetCacheServicesExtensions/AssetCacheServicesTetheratorErrorProtocol.h>

@protocol AssetCacheServicesTetheratorProtocol, AssetCacheServicesTetheratorEventsProtocol, OS_dispatch_queue, OS_os_log;
@class NSObject, NSString;

@interface AssetCacheServicesTetherator : NSObject <AssetCacheServicesTetheratorErrorProtocol> {

	id<AssetCacheServicesTetheratorProtocol> _proxy;
	id<AssetCacheServicesTetheratorEventsProtocol> _weakDelegate;
	NSObject*<OS_dispatch_queue> _weakDelegateQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_os_log> _logHandle;

}

@property (retain) id<AssetCacheServicesTetheratorProtocol> proxy;                           //@synthesize proxy=_proxy - In the implementation block
@property (__weak) id<AssetCacheServicesTetheratorEventsProtocol> weakDelegate;              //@synthesize weakDelegate=_weakDelegate - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> weakDelegateQueue;                           //@synthesize weakDelegateQueue=_weakDelegateQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                                           //@synthesize logHandle=_logHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_connectToTetheratorServiceWithCallback:(/*^block*/id)arg1 ;
-(void)enableWithStartAddress:(id)arg1 endAddress:(id)arg2 cachingServerInfo:(id)arg3 ;
-(void)isEnabled;
-(void)status;
-(void)disable;
-(void)enable;
-(id<AssetCacheServicesTetheratorProtocol>)proxy;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)reportError:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setProxy:(id<AssetCacheServicesTetheratorProtocol>)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(id<AssetCacheServicesTetheratorEventsProtocol>)weakDelegate;
-(void)setWeakDelegate:(id<AssetCacheServicesTetheratorEventsProtocol>)arg1 ;
-(void)setWeakDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)weakDelegateQueue;
@end

