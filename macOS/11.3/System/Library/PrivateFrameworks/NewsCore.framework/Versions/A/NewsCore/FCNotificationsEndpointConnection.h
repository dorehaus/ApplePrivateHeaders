/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager, FCBundleSubscriptionManagerType;
@class FCEndpointConnection, FCAsyncSerialQueue, NSString, FCFileCoordinatedNotificationDropbox, NSURL;

@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving> {

	FCEndpointConnection* _endpointConnection;
	id<FCCoreConfigurationManager> _configurationManager;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCAsyncSerialQueue* _serialQueue;
	NSString* _deviceType;
	NSString* _deviceOSVersion;
	FCFileCoordinatedNotificationDropbox* _fileCoordinatedNotificationDropbox;
	NSURL* _baseURL;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;                                              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;                                    //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                          //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                                                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * deviceOSVersion;                                                               //@synthesize deviceOSVersion=_deviceOSVersion - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedNotificationDropbox * fileCoordinatedNotificationDropbox;              //@synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                                        //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)baseURL;
-(FCAsyncSerialQueue *)serialQueue;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(FCEndpointConnection *)endpointConnection;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(void)setBundleSubscriptionManager:(id<FCBundleSubscriptionManagerType>)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 bundleSubscriptionManager:(id)arg3 ;
-(void)updateBaseURL:(id)arg1 ;
-(id)_notificationDataInDropbox;
-(id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 ;
-(id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 ;
-(id)_deviceInfoWithDeviceToken:(id)arg1 ;
-(id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(char)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4 ;
-(NSString *)deviceOSVersion;
-(id)_notificationEntitiyWithChannelIDs:(id)arg1 isPaid:(char)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4 ;
-(int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1 ;
-(FCFileCoordinatedNotificationDropbox *)fileCoordinatedNotificationDropbox;
-(id)initWithBaseURLString:(id)arg1 ;
-(void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDeviceOSVersion:(NSString *)arg1 ;
-(void)setFileCoordinatedNotificationDropbox:(FCFileCoordinatedNotificationDropbox *)arg1 ;
@end

