/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRExternalClientConnection.h>

@class NSDictionary;

@interface MRExternalJSONClientConnection : MRExternalClientConnection {

	NSDictionary* _artwork;
	NSDictionary* _deviceInfo;
	NSDictionary* _volume;
	NSDictionary* _playerPath;
	NSDictionary* _playbackQueue;
	NSDictionary* _supportedCommands;

}
-(id)messageQueue:(id)arg1 dataForMessage:(id)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(id)_encodeDeviceInfo:(id)arg1 ;
-(id)_encodeVolumeDidChange:(id)arg1 ;
-(id)_processDeviceInfo:(id)arg1 ;
-(id)_processSetState:(id)arg1 ;
-(id)_createProtocolMessage:(Class)arg1 underlyingCodableMessage:(id)arg2 ;
-(id)_protocolMessageFromData:(id)arg1 ;
@end

