/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCAppServerInterface
@required
-(void)pingWithReply:(/*^block*/id)arg1;
-(void)connectToControllerServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToLightXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToAdaptiveTriggersXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToMotionXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToBatteryXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToSettingsXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;

@end

