/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Bootability.framework/Versions/A/Bootability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BYAuthenticationContext, NSDictionary, LPAPFSVolume;

@interface BYRequest : NSObject {

	char _usePersonalizedManifest;
	char _shouldSetBoot;
	char _shouldSetBootOnce;
	char _needsLocalPolicy;
	char _needsPersonalization;
	char _needsInstall;
	char _startedUpdateLocalPolicyNonce;
	unsigned _previousSecurityMode;
	unsigned _securityMode;
	NSString* _targetVolumeMountpoint;
	BYAuthenticationContext* _authenticationContext;
	NSDictionary* _options;
	LPAPFSVolume* _targetVolume;
	LPAPFSVolume* _sourcePrebootVolume;
	LPAPFSVolume* _targetPrebootVolume;
	LPAPFSVolume* _iscPrebootVolume;
	LPAPFSVolume* _targetRecoveryVolume;
	LPAPFSVolume* _externalRecoveryVolume;

}

@property (retain) NSString * targetVolumeMountpoint;                            //@synthesize targetVolumeMountpoint=_targetVolumeMountpoint - In the implementation block
@property (retain) BYAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) NSDictionary * options;                                       //@synthesize options=_options - In the implementation block
@property (retain) LPAPFSVolume * targetVolume;                                  //@synthesize targetVolume=_targetVolume - In the implementation block
@property (retain) LPAPFSVolume * sourcePrebootVolume;                           //@synthesize sourcePrebootVolume=_sourcePrebootVolume - In the implementation block
@property (retain) LPAPFSVolume * targetPrebootVolume;                           //@synthesize targetPrebootVolume=_targetPrebootVolume - In the implementation block
@property (retain) LPAPFSVolume * iscPrebootVolume;                              //@synthesize iscPrebootVolume=_iscPrebootVolume - In the implementation block
@property (retain) LPAPFSVolume * targetRecoveryVolume;                          //@synthesize targetRecoveryVolume=_targetRecoveryVolume - In the implementation block
@property (retain) LPAPFSVolume * externalRecoveryVolume;                        //@synthesize externalRecoveryVolume=_externalRecoveryVolume - In the implementation block
@property (readonly) NSString * osManifestPath; 
@property (readonly) NSString * osPersonalizedManifestPath; 
@property (readonly) NSString * osGlobalManifestPath; 
@property (readonly) NSString * osStagedGlobalManifestPath; 
@property (readonly) NSString * sfrManifestPath; 
@property (readonly) NSString * restoreBundlePath; 
@property (readonly) NSString * stagedRestoreBundlePath; 
@property (assign) unsigned previousSecurityMode;                                //@synthesize previousSecurityMode=_previousSecurityMode - In the implementation block
@property (assign) unsigned securityMode;                                        //@synthesize securityMode=_securityMode - In the implementation block
@property (assign) char usePersonalizedManifest;                                 //@synthesize usePersonalizedManifest=_usePersonalizedManifest - In the implementation block
@property (assign) char shouldSetBoot;                                           //@synthesize shouldSetBoot=_shouldSetBoot - In the implementation block
@property (assign) char shouldSetBootOnce;                                       //@synthesize shouldSetBootOnce=_shouldSetBootOnce - In the implementation block
@property (assign) char needsLocalPolicy;                                        //@synthesize needsLocalPolicy=_needsLocalPolicy - In the implementation block
@property (assign) char needsPersonalization;                                    //@synthesize needsPersonalization=_needsPersonalization - In the implementation block
@property (assign) char needsInstall;                                            //@synthesize needsInstall=_needsInstall - In the implementation block
@property (assign) char startedUpdateLocalPolicyNonce;                           //@synthesize startedUpdateLocalPolicyNonce=_startedUpdateLocalPolicyNonce - In the implementation block
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(unsigned)securityMode;
-(BYAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(BYAuthenticationContext *)arg1 ;
-(char)needsPersonalization;
-(void)setSecurityMode:(unsigned)arg1 ;
-(LPAPFSVolume *)targetVolume;
-(void)setTargetVolume:(LPAPFSVolume *)arg1 ;
-(char)needsInstall;
-(LPAPFSVolume *)iscPrebootVolume;
-(LPAPFSVolume *)targetPrebootVolume;
-(LPAPFSVolume *)targetRecoveryVolume;
-(void)setPreviousSecurityMode:(unsigned)arg1 ;
-(unsigned)previousSecurityMode;
-(char)getBooleanOption:(id)arg1 exists:(char*)arg2 ;
-(void)setShouldSetBootOnce:(char)arg1 ;
-(char)shouldSetBootOnce;
-(void)setShouldSetBoot:(char)arg1 ;
-(char)needsLocalPolicy;
-(void)setNeedsLocalPolicy:(char)arg1 ;
-(void)setNeedsInstall:(char)arg1 ;
-(void)setUsePersonalizedManifest:(char)arg1 ;
-(NSString *)osGlobalManifestPath;
-(char)usePersonalizedManifest;
-(void)setNeedsPersonalization:(char)arg1 ;
-(NSString *)restoreBundlePath;
-(NSString *)targetVolumeMountpoint;
-(void)setSourcePrebootVolume:(LPAPFSVolume *)arg1 ;
-(LPAPFSVolume *)sourcePrebootVolume;
-(void)setTargetPrebootVolume:(LPAPFSVolume *)arg1 ;
-(void)setIscPrebootVolume:(LPAPFSVolume *)arg1 ;
-(void)setTargetRecoveryVolume:(LPAPFSVolume *)arg1 ;
-(void)setExternalRecoveryVolume:(LPAPFSVolume *)arg1 ;
-(LPAPFSVolume *)externalRecoveryVolume;
-(NSString *)osPersonalizedManifestPath;
-(id)_osManifestPathInRestoreBundle:(id)arg1 global:(char)arg2 ;
-(NSString *)stagedRestoreBundlePath;
-(id)initWithVolumeMountpoint:(id)arg1 authenticationContext:(id)arg2 options:(id)arg3 ;
-(NSString *)osManifestPath;
-(NSString *)osStagedGlobalManifestPath;
-(NSString *)sfrManifestPath;
-(void)setTargetVolumeMountpoint:(NSString *)arg1 ;
-(char)shouldSetBoot;
-(char)startedUpdateLocalPolicyNonce;
-(void)setStartedUpdateLocalPolicyNonce:(char)arg1 ;
@end

