/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUMacControllerEventReporter : NSObject
+(void)reportOTAAvailableEventWithClientRequest:(id)arg1 updateUUID:(id)arg2 descriptor:(id)arg3 error:(id)arg4 success:(char)arg5 ;
+(id)newEvent:(id)arg1 clientRequest:(id)arg2 updateUUID:(id)arg3 descriptor:(id)arg4 error:(id)arg5 success:(char)arg6 ;
+(void)sendEventWithAttributes:(id)arg1 ;
+(id)newBaseEventAttributesForClientRequest:(id)arg1 descriptor:(id)arg2 ;
+(void)reportOTADownloadedEventWithClientRequest:(id)arg1 updateUUID:(id)arg2 descriptor:(id)arg3 error:(id)arg4 success:(char)arg5 ;
+(void)reportOTAReadyEventWithClientRequest:(id)arg1 updateUUID:(id)arg2 descriptor:(id)arg3 error:(id)arg4 success:(char)arg5 ;
+(void)reportOTAInstallingEventWithClientRequest:(id)arg1 updateUUID:(id)arg2 descriptor:(id)arg3 error:(id)arg4 success:(char)arg5 ;
+(void)reportOTAAbandonedEventWithClientRequest:(id)arg1 updateUUID:(id)arg2 descriptor:(id)arg3 error:(id)arg4 success:(char)arg5 ;
+(void)flushEvents;
@end
