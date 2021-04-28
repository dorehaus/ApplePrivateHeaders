/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, NSUUID;

@interface EOSDiagnosticSummary : NSObject {

	char _userAuth;
	char _preflighted;
	char _restoreAfterBootFailure;
	char _submittedFailureLogsToCrashReporter;
	NSString* _fromBuild;
	NSString* _productionMode;
	NSString* _clientName;
	NSString* _toBuild;
	NSString* _toVariant;
	NSString* _installType;
	unsigned long long _retries;
	NSError* _error;
	long long _failingPhase;
	NSUUID* _uuid;

}

@property (retain) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) char submittedFailureLogsToCrashReporter;              //@synthesize submittedFailureLogsToCrashReporter=_submittedFailureLogsToCrashReporter - In the implementation block
@property (retain) NSString * fromBuild;                                  //@synthesize fromBuild=_fromBuild - In the implementation block
@property (retain) NSString * productionMode;                             //@synthesize productionMode=_productionMode - In the implementation block
@property (retain) NSString * clientName;                                 //@synthesize clientName=_clientName - In the implementation block
@property (retain) NSString * toBuild;                                    //@synthesize toBuild=_toBuild - In the implementation block
@property (retain) NSString * toVariant;                                  //@synthesize toVariant=_toVariant - In the implementation block
@property (assign) char userAuth;                                         //@synthesize userAuth=_userAuth - In the implementation block
@property (assign) char preflighted;                                      //@synthesize preflighted=_preflighted - In the implementation block
@property (retain) NSString * installType;                                //@synthesize installType=_installType - In the implementation block
@property (assign) unsigned long long retries;                            //@synthesize retries=_retries - In the implementation block
@property (assign) char restoreAfterBootFailure;                          //@synthesize restoreAfterBootFailure=_restoreAfterBootFailure - In the implementation block
@property (retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign) long long failingPhase;                                //@synthesize failingPhase=_failingPhase - In the implementation block
-(id)init;
-(NSUUID *)uuid;
-(NSError *)error;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)retries;
-(void)setRetries:(unsigned long long)arg1 ;
-(NSString *)installType;
-(void)setError:(NSError *)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)productionMode;
-(void)setInstallType:(NSString *)arg1 ;
-(char)restoreAfterBootFailure;
-(void)setRestoreAfterBootFailure:(char)arg1 ;
-(void)setFailingPhase:(long long)arg1 ;
-(void)submitDiagnostics;
-(void)setPreflighted:(char)arg1 ;
-(void)setToBuild:(NSString *)arg1 ;
-(void)setToVariant:(NSString *)arg1 ;
-(void)setUserAuth:(char)arg1 ;
-(void)_populateInformationFromCurrentDevice;
-(id)_summaryForLogging;
-(void)_submitToInstallerDiagnostics;
-(char)_submitFailureLogsToCrashReporter;
-(void)setSubmittedFailureLogsToCrashReporter:(char)arg1 ;
-(void)_addRestoreUUIDToNVRAM;
-(void)setFromBuild:(NSString *)arg1 ;
-(void)setProductionMode:(NSString *)arg1 ;
-(NSString *)fromBuild;
-(NSString *)toBuild;
-(NSString *)toVariant;
-(char)preflighted;
-(char)userAuth;
-(long long)failingPhase;
-(char)submittedFailureLogsToCrashReporter;
@end
