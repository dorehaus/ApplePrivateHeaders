/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/Versions/A/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtteranceMetadataManager : NSObject
+(char)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)_saveMetaVersionFileAtPath:(id)arg1 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg1 ;
+(char)_audioDirectoryNeedsUpgrade:(id)arg1 ;
+(void)_upgradeUtteranceMeta:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(char)arg2 isHandheldEnrollment:(char)arg3 withBiometricResult:(unsigned long long)arg4 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1 ;
@end

