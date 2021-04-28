/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, RemoteConfigurationsControllerDelegate;
@class NSObject, NSURLSessionDataTask, NSURL, NSString;

@interface RemoteConfigurationsController : NSObject {

	NSObject*<OS_dispatch_source> _downloadRemoteConfigurationTimer;
	NSURLSessionDataTask* _downloadRemoteConfigurationTask;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	id<RemoteConfigurationsControllerDelegate> _delegate;
	NSURL* _remoteConfigurationURL;
	NSURL* _localConfigurationFileURL;
	double _updateTimeInterval;
	NSString* _lastDownloadedTimePreferenceKey;

}

@property (assign,nonatomic,__weak) id<RemoteConfigurationsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * remoteConfigurationURL;                                        //@synthesize remoteConfigurationURL=_remoteConfigurationURL - In the implementation block
@property (nonatomic,readonly) NSURL * localConfigurationFileURL;                                     //@synthesize localConfigurationFileURL=_localConfigurationFileURL - In the implementation block
@property (nonatomic,readonly) double updateTimeInterval;                                             //@synthesize updateTimeInterval=_updateTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastDownloadedTimePreferenceKey;                       //@synthesize lastDownloadedTimePreferenceKey=_lastDownloadedTimePreferenceKey - In the implementation block
+(void)removeDefaultsAndSignedRemoteConfigurationPlist;
-(id)init;
-(id<RemoteConfigurationsControllerDelegate>)delegate;
-(void)setDelegate:(id<RemoteConfigurationsControllerDelegate>)arg1 ;
-(id)initWithRemoteConfigurationURL:(id)arg1 localConfigurationFileURL:(id)arg2 updateTimeInterval:(double)arg3 lastDownloadedTimePreferenceKey:(id)arg4 ;
-(void)scheduleInitialDownload;
-(void)loadRemoteConfigurationFromLocalFileWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopDownloadingRemoteConfiguration;
-(void)_scheduleNextDownloadAfterLastDownloadTime:(id)arg1 ;
-(void)_downloadRemoteConfiguration;
-(char)_didRemoteConfigurationRequestSucceed:(id)arg1 ;
-(NSURL *)remoteConfigurationURL;
-(NSURL *)localConfigurationFileURL;
-(double)updateTimeInterval;
-(NSString *)lastDownloadedTimePreferenceKey;
@end

