/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVBAudioConfigurationClient.h>

@class AVBVirtualAudioConfiguration;

@interface AVBVirtualAudioConfigurationXPCDelegate : NSObject <AVBAudioConfigurationClient> {

	AVBVirtualAudioConfiguration* _configuration;

}

@property (assign,nonatomic) AVBVirtualAudioConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(AVBVirtualAudioConfiguration *)configuration;
-(void)setConfiguration:(AVBVirtualAudioConfiguration *)arg1 ;
-(void)addedBuiltinVirtualEntity:(id)arg1 ;
-(void)removedBuiltinVirtualEntity:(id)arg1 ;
-(void)addedCustomVirtualEntityWithUID:(id)arg1 ;
-(void)removedCustomVirtualEntityWithUID:(id)arg1 ;
@end
