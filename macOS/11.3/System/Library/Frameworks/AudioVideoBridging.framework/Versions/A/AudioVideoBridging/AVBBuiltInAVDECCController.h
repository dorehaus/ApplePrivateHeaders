/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVBAVDECCController.h>
#import <libobjc.A.dylib/AVB17221EntityDiscoveryDelegate.h>
#import <libobjc.A.dylib/AVB17221AECPClient.h>
#import <libobjc.A.dylib/TSgPTPNetworkPortClient.h>

@class NSMutableArray, NSArray, NSString;

@interface AVBBuiltInAVDECCController : AVBAVDECCController <AVB17221EntityDiscoveryDelegate, AVB17221AECPClient, TSgPTPNetworkPortClient> {

	NSMutableArray* _availableEntities;

}

@property (readonly) NSArray * availableEntities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(Class)entityClass;
-(void)didChangeASCapable:(char)arg1 forPort:(id)arg2 ;
-(void)removedEntity:(id)arg1 onInterface:(id)arg2 ;
-(id)_entityForEntityID:(unsigned long long)arg1 ;
-(void)updatedEntity:(id)arg1 onInterface:(id)arg2 ;
-(void)addedEntity:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)controllerRequestToChangeEntity:(id)arg1 toConfiguration:(unsigned short)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)didChangeEntity:(id)arg1 toConfiguration:(unsigned short)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)controllerRequestToChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 toStreamFormat:(id)arg4 forTargetEntityID:(unsigned long long)arg5 ;
-(void)didChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 toStreamFormat:(id)arg4 forTargetEntityID:(unsigned long long)arg5 ;
-(void)controllerRequestToChangeEntity:(id)arg1 setVideoClusterWithIndex:(unsigned short)arg2 toFormatSpecific:(id)arg3 aspectRatio:(id)arg4 colorSpace:(unsigned short)arg5 andFrameSize:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)didChangeEntity:(id)arg1 setVideoClusterWithIndex:(unsigned short)arg2 toFormatSpecific:(id)arg3 aspectRatio:(id)arg4 colorSpace:(unsigned short)arg5 andFrameSize:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)controllerRequestToChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 configurationIndex:(unsigned short)arg4 nameIndex:(unsigned short)arg5 toName:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)didChangeEntity:(id)arg1 descriptorOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 configurationIndex:(unsigned short)arg4 nameIndex:(unsigned short)arg5 toName:(id)arg6 forTargetEntityID:(unsigned long long)arg7 ;
-(void)controllerRequestToChangeEntity:(id)arg1 toAssociationID:(unsigned long long)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)didChangeEntity:(id)arg1 toAssociationID:(unsigned long long)arg2 forTargetEntityID:(unsigned long long)arg3 ;
-(void)controllerRequestToChangeEntity:(id)arg1 audioUnitWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 videoClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 sensorClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 audioUnitWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 videoClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 sensorClusterWithIndex:(unsigned short)arg2 toSamplingRate:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 clockDomainWithIndex:(unsigned short)arg2 toClockSourceWithIndex:(unsigned short)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 clockDomainWithIndex:(unsigned short)arg2 toClockSourceWithIndex:(unsigned short)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)controllerRequestToChangeEntity:(id)arg1 controlWithIndex:(unsigned short)arg2 toValue:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didChangeEntity:(id)arg1 controlWithIndex:(unsigned short)arg2 toValue:(id)arg3 forTargetEntityID:(unsigned long long)arg4 ;
-(void)didRemoveLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didRediscoverLocalEntity:(id)arg1 on17221EntityDiscovery:(id)arg2 ;
-(void)didUpdateLocalEntity:(id)arg1 changedProperties:(unsigned long long)arg2 on17221EntityDiscovery:(id)arg3 ;
-(void)didAddLinkLayerPort:(id)arg1 onInterface:(id)arg2 ;
-(void)didRemoveLinkLayerPort:(id)arg1 onInterface:(id)arg2 ;
-(char)respectGeneralControllerIgnoreForEntity:(id)arg1 ;
-(void)overridesForEntity:(id)arg1 ;
-(char)entityIsSupported:(id)arg1 ;
-(void)addAvailableEntity:(id)arg1 ;
-(void)removeAvailableEntity:(id)arg1 ;
-(char)entityShouldBeIgnored:(id)arg1 ;
-(char)timeSyncRequired;
-(void)addedEntityToDomain:(id)arg1 ;
-(void)removedEntityFromDomain:(id)arg1 ;
-(id)bestAudioMatchForStreamFormat:(id)arg1 inStreamFormats:(id)arg2 withSamplingRate:(id)arg3 ;
-(NSArray *)availableEntities;
-(char)connectEntityWithEntityID:(unsigned long long)arg1 ;
-(char)disconnectEntityWithEntityID:(unsigned long long)arg1 ;
@end

