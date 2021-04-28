/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWFXPCRequestProtocolPrivate <CWFXPCRequestProtocolPrivateReadonly>
@required
-(void)addKnownNetworkProfile:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setThermalIndex:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)beginActivity:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endActivityWithUUID:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endAllActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryActivitiesWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setPower:(char)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setChannel:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performScanWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)associateWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)disassociateWithReason:(long long)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopAWDLPeerAssistedDiscoveryWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setAWDLPeerTrafficRegistration:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setRangeable:(char)arg1 peerList:(id)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 requestParams:(id)arg3 reply:(/*^block*/id)arg4;

@end
