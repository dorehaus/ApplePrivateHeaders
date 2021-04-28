/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSString, NSHashTable, NSMutableDictionary;

@interface IDSCellularLinkMonitor : NSObject {

	char _dataUsable;
	NSString* _dataIndicator;
	NSString* _cellularDataInterfaceName;
	unsigned _radioAccessTechnology;
	unsigned _cellularMTU;
	NSHashTable* _cellularLinkDelegates;
	NSMutableDictionary* _notificationRegInfo;
	unsigned _dataSoMaskBits;
	unsigned _remoteDeviceVersion;

}

@property (readonly) char dataUsable;                                   //@synthesize dataUsable=_dataUsable - In the implementation block
@property (readonly) NSString * cellularDataInterfaceName;              //@synthesize cellularDataInterfaceName=_cellularDataInterfaceName - In the implementation block
@property (readonly) unsigned radioAccessTechnology;                    //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (readonly) unsigned cellularMTU;                              //@synthesize cellularMTU=_cellularMTU - In the implementation block
@property (readonly) unsigned dataSoMaskBits;                           //@synthesize dataSoMaskBits=_dataSoMaskBits - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)reset;
-(unsigned)radioAccessTechnology;
-(void)setRemoteDeviceVersion:(unsigned)arg1 ;
-(char)dataUsable;
-(void)removePacketNotificationFilter;
-(unsigned)dataSoMaskBits;
-(unsigned)cellularMTU;
-(char)setPacketNotificationFilter:(const sockaddr*)arg1 remote:(const sockaddr*)arg2 uniqueTag:(unsigned)arg3 callType:(unsigned char)arg4 ;
-(char)dropIPPackets:(id)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 isRelay:(char)arg4 channelNumberMSB:(unsigned char)arg5 ;
-(void)updateProtocolQualityOfService:(char)arg1 localAddress:(sockaddr*)arg2 ;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(NSString *)cellularDataInterfaceName;
-(void)_setupCTServerConnection;
-(char)_updateCellularDataInterface:(char)arg1 ;
-(char)_updateRadioAccessTechnology;
-(char)_updateCellularMTU;
-(void)_updateDataStatus;
-(char)_updateDataBearerSoMask;
-(void)_updateClientDataBearerSoMask;
-(void)addCellularLinkDelegate:(id)arg1 ;
-(void)removeCellularLinkDelegate:(id)arg1 ;
-(void)_notifyClientDataBearerSoMask;
-(void)registerCellularDataStatusNotification:(char)arg1 ;
@end

