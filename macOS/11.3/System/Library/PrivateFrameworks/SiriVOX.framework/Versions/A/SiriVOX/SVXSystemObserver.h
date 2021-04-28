/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXModuleInstance.h>
#import <libobjc.A.dylib/SVXSessionActivityListening.h>
#import <libobjc.A.dylib/SVXSystemVolumeDataSource.h>

@class SVXModule, SVXSystemVolumeAnnouncer, NSMutableDictionary, NSString;

@interface SVXSystemObserver : NSObject <SVXModuleInstance, SVXSessionActivityListening, SVXSystemVolumeDataSource> {

	SVXModule* _module;
	SVXSystemVolumeAnnouncer* _volumeAnnouncer;
	NSMutableDictionary* _volumesByCategory;

}

@property (nonatomic,readonly) id<SVXSystemVolumeDataSource> volumeDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2 ;
-(void)stopWithModuleInstanceProvider:(id)arg1 ;
-(void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)sessionWillStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStartSoundWithID:(long long)arg1 ;
-(void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg1 ;
-(void)audioSessionWillBecomeActive:(char)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)audioSessionDidBecomeActive:(char)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(id<SVXSystemVolumeDataSource>)volumeDataSource;
-(void)addVolumeListener:(id)arg1 ;
-(void)removeVolumeListener:(id)arg1 ;
-(void)_startObservingInfo;
-(void)_startObservingMediaServerConnection;
-(void)_startObservingSystemVolume;
-(void)_fetchSystemVolumes;
-(void)_stopObservingMediaServerConnection;
-(void)_stopObservingSystemVolume;
-(void)_stopObservingInfo;
-(void)_logSnapshot;
-(void)_handleMediaServerConnectionDied;
-(void)_handleSystemVolumeChangeForCategory:(id)arg1 volume:(float)arg2 reason:(id)arg3 ;
-(void)getVolumeForAudioCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)systemVolumeChanged:(id)arg1 ;
@end

