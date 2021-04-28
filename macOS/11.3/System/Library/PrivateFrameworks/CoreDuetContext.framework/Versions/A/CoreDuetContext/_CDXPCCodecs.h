/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/Versions/A/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDXPCCodecs : NSObject
+(char)addKeyPaths:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)keyPathsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(void)addError:(id)arg1 toReply:(id)arg2 ;
+(char)addRegistration:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(char)addDeviceIDs:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)commonContextValueNotificationsEventWithType:(const char*)arg1 registration:(id)arg2 deviceIDs:(id)arg3 error:(id*)arg4 ;
+(id)registrationFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)deviceIDsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)errorFromReply:(id)arg1 ;
+(long long)eventTypeWithEvent:(id)arg1 ;
+(id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg1 error:(id*)arg2 ;
+(id)keyPathsFromFetchPropertiesEvent:(id)arg1 error:(id*)arg2 ;
+(id)fetchPropertiesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(char)parseSubscribeToContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(char)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)keepAliveEventWithKeepAlive:(char)arg1 error:(id*)arg2 ;
+(char)keepAliveFromKeepAliveEvent:(id)arg1 error:(id*)arg2 ;
+(id)keepAliveReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)notificationEventWithRegistrationIdentifier:(id)arg1 info:(id)arg2 error:(id*)arg3 ;
+(char)parseNotificationEvent:(id)arg1 registrationIdentifier:(id*)arg2 info:(id*)arg3 error:(id*)arg4 ;
+(id)fetchProxySourceDeviceUUIDEvent;
+(id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg1 sourceDeviceUUID:(id)arg2 error:(id)arg3 ;
+(id)parseProxySourceDeviceUUIDEvent:(id)arg1 error:(id*)arg2 ;
+(id)requestActivateDevicesEvent;
+(id)requestActivateDevicesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)messageTypeFromEvent:(id)arg1 ;
@end

