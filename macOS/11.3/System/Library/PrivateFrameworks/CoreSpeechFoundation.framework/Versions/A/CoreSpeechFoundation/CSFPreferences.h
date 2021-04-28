/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/Versions/A/CoreSpeechFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeechFoundation/CoreSpeechFoundation-Structs.h>
@interface CSFPreferences : NSObject
+(id)sharedPreferences;
-(id)myriadHashDirectory;
-(char)enableAudioInjection:(char)arg1 withKey:(CFStringRef)arg2 ;
-(char)audioInjectionEnabledWithKey:(CFStringRef)arg1 ;
-(char)smartSiriVolumeContextAwareEnabled;
-(id)ssvLogDirectory;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg1 ;
-(id)getCatAdBlockerAssetUpdateDirectory;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(char)startOfSpeechAudioLoggingEnabled;
-(char)forceVoiceTriggerAOPMode;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(char)smartSiriVolumeContextAwareLoggingEnabled;
-(char)isMultiChannelAudioLoggingEnabled;
-(char)isStaggeredCATDownloadEnabled;
-(char)voiceTriggerEnabled;
-(id)assistantAudioFileLogDirectory;
-(char)fileLoggingIsEnabled;
-(char)isAdBlockerAudioLoggingEnabled;
-(id)voiceTriggerAudioLogDirectory;
-(unsigned long long)maxNumGradingFiles;
-(unsigned long long)maxNumLoggingFiles;
-(char)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(char)phraseSpotterEnabled;
-(char)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(char)opportuneSpeakListenerBypassEnabled;
-(char)jarvisAudioLoggingEnabled;
-(id)myriadHashFilePath;
-(char)programmableAudioInjectionEnabled;
-(char)twoShotNotificationEnabled;
-(double)audioSessionActivationDelay;
-(char)isMultiPhraseVTEnabled;
-(id)baseDir;
-(void)setFileLoggingIsEnabled:(char)arg1 ;
-(char)isPHSSupported;
-(char)isAttentiveSiriEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(char)enableAudioInjection:(char)arg1 ;
-(char)useSiriActivationSPIForHomePod;
-(id)trialBaseAssetDirectory;
-(char)isSelfTriggerFileLoggingEnabled;
-(char)forceVoiceTriggerAPMode;
-(char)myriadFileLoggingEnabled;
-(char)companionSyncVoiceTriggerUtterancesEnabled;
-(char)smartSiriVolumeSoftVolumeEnabled;
-(char)bypassPersonalizedHeySiri;
-(char)secondPassAudioLoggingEnabled;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(char)audioInjectionEnabled;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(char)enableProgrammableAudioInjection:(char)arg1 ;
-(id)audioInjectionFilePath;
-(char)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(char)useSiriActivationSPIForwatchOS;
-(char)speakerRecognitionAudioLoggingEnabled;
-(unsigned long long)speakerIdScoreReportingType;
-(char)isSpeakerRecognitionAvailable;
-(char)_isRemoteVoiceTriggerAvailable;
-(char)_isDirectory:(id)arg1 ;
@end
