/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, ASBContainerACL, NSURL, NSData, NSDictionary;

@interface ASBContainer : NSObject {

	NSString* _homeDirPath;
	NSString* _personaVolume;
	NSString* _containerPath;
	NSString* _dataPath;
	NSMutableDictionary* _metadata;
	ASBContainerACL* _acl;
	NSString* containerIdentifier;

}

@property (nonatomic,retain) NSString * containerIdentifier; 
@property (setter=setHasLSDataContainerPersonalityInfo:) char hasLSDataContainerPersonalityInfo; 
@property (readonly) NSString * homeDirPath;                                                                  //@synthesize homeDirPath=_homeDirPath - In the implementation block
@property (readonly) NSString * personaVolume;                                                                //@synthesize personaVolume=_personaVolume - In the implementation block
@property (readonly) NSString * containerPath;                                                                //@synthesize containerPath=_containerPath - In the implementation block
@property (readonly) NSString * dataPath;                                                                     //@synthesize dataPath=_dataPath - In the implementation block
@property (readonly) NSURL * baseURL; 
@property (readonly) NSURL * dataURL; 
@property (readonly) NSData * sandboxProfileData; 
@property (readonly) NSDictionary * sandboxProfileDataValidationInfo; 
+(id)currentPersonaVolume;
+(id)currentPersonaOrHomeDirectory;
+(id)containerURLForAppSigningId:(id)arg1 inBaseDirectory:(id)arg2 ;
+(id)containerIdentifierForAppSigningId:(id)arg1 ;
+(id)currentPersonaOrHomeDirectoryOverride:(id)arg1 ;
+(id)containerURLForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerURLForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerURLForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForAppSigningId:(id)arg1 error:(id*)arg2 ;
+(id)containerForAppSigningId:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 error:(id*)arg3 ;
+(id)containerURLForAppSigningId:(id)arg1 ;
-(NSString *)homeDirPath;
-(id)initWithAppSigningId:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithApplicationAtURL:(id)arg1 andHomeDirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithHomeDirectory:(id)arg1 andContainerPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithHomeDirectory:(id)arg1 andContainerURL:(id)arg2 error:(id*)arg3 ;
-(id)sanitizedPath:(id)arg1 ;
-(id)initWithApplicationAtURL:(id)arg1 error:(id*)arg2 ;
-(id)rebasedFileURL:(id)arg1 ;
-(id)requirementACL;
-(NSData *)sandboxProfileData;
-(NSDictionary *)sandboxProfileDataValidationInfo;
-(void)setHasLSDataContainerPersonalityInfo:(char)arg1 ;
-(char)hasLSDataContainerPersonalityInfo;
-(char)setError:(id*)arg1 message:(id)arg2 forPath:(id)arg3 withDomain:(id)arg4 code:(long long)arg5 ;
-(NSString *)personaVolume;
-(void)recordPermissionsError:(id*)arg1 withAuxString:(id)arg2 writePath:(id)arg3 readPath:(id)arg4 ;
-(NSURL *)baseURL;
-(NSURL *)dataURL;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)containerPath;
-(NSString *)dataPath;
@end

