/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;
	NSArray* _clusterComposition;

}
+(char)supportsSecureCoding;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
-(id)uid;
-(id)descriptor;
-(unsigned)deviceType;
-(id)groupID;
-(id)firmwareVersion;
-(id)initWithDescriptor:(id)arg1 ;
-(unsigned)clusterType;
-(id)sourceInfo;
-(unsigned long long)configuredClusterSize;
-(id)modelID;
-(float)batteryLevel;
-(char)requiresAuthorization;
-(char)canAccessRemoteAssets;
-(char)canAccessAppleMusic;
-(char)canAccessiCloudMusicLibrary;
-(char)supportsBufferedAirPlay;
-(char)isGroupLeader;
-(char)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(char)canRelayCommunicationChannel;
-(char)canPlayEncryptedProgressiveDownloadAssets;
-(char)canFetchMediaDataFromSender;
-(char)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)MACAddress;
-(char)hasBatteryLevel;
-(unsigned)deviceSubtype;
-(id)clusterComposition;
-(char)isRemoteControllable;
-(id)primaryID;
-(char)isProxyGroupPlayer;
-(char)isAirPlayReceiverSessionActive;
-(id)parentGroupIdentifier;
-(char)isVolumeControlAvailable;
-(unsigned)volumeCapabilities;
-(char)parentGroupContainsDiscoverableLeader;
-(char)isGroupable;
-(char)isDeviceGroupable;
-(char)isLocalDevice;
-(char)supportsExternalScreen;
-(char)isAddedToHomeKit;
-(id)bluetoothID;
-(char)supportsHAP;
-(id)initWithSkeleton:(id)arg1 ;
-(id)modelSpecificInfo;
-(char)isUsingJSONProtocol;
@end
