/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemPolicy/SystemPolicy-Structs.h>
@class NSUUID, NSString, NSDate, NSURL, NSDictionary, NSData;

@interface PolicyScanTarget : NSObject {

	NSUUID* _volumeUUID;
	NSString* _pathOnVolume;
	unsigned long long _objectID;
	NSString* _fsTypeName;
	NSString* _volumePath;
	NSString* _blockDevice;
	NSDate* _mountTime;
	NSDate* _modTime;
	NSDate* _chgTime;
	char _checkValidity;
	NSURL* _url;
	NSURL* _originalURL;
	NSURL* _mainExecutableURL;
	NSString* _bundleID;
	char _isDirectory;
	char _isAppWrapper;
	CFBundleRef _bundle;
	SecCodeRef _staticCodeRef;
	NSDictionary* _signingInfo;
	NSString* _cdhash;
	NSData* _cdhashData;
	unsigned _cdhashDigestAlgorithm;
	NSString* _teamID;
	NSString* _signingID;
	char _quarantineChecked;
	char _isQuarantinedMount;
	char _isQuarantined;
	char _isUserApproved;
	char _isScript;
	char _isBundled;
	char _triggeredByLibraryLoad;
	int _pid;

}

@property (nonatomic,readonly) NSURL * originalURL;                         //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSUUID * volumeUUID;                         //@synthesize volumeUUID=_volumeUUID - In the implementation block
@property (nonatomic,readonly) NSString * volumePath;                       //@synthesize volumePath=_volumePath - In the implementation block
@property (nonatomic,readonly) NSString * pathOnVolume;                     //@synthesize pathOnVolume=_pathOnVolume - In the implementation block
@property (nonatomic,readonly) NSString * blockDevice;                      //@synthesize blockDevice=_blockDevice - In the implementation block
@property (nonatomic,readonly) NSString * fsTypeName;                       //@synthesize fsTypeName=_fsTypeName - In the implementation block
@property (nonatomic,readonly) unsigned long long objectID;                 //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSDate * modTime;                            //@synthesize modTime=_modTime - In the implementation block
@property (nonatomic,readonly) NSDate * mountTime;                          //@synthesize mountTime=_mountTime - In the implementation block
@property (nonatomic,readonly) NSURL * mainExecutableURL; 
@property (nonatomic,readonly) const SecCodeRef staticCodeRef; 
@property (nonatomic,readonly) NSString * cdhash; 
@property (nonatomic,readonly) NSData * cdhashData; 
@property (nonatomic,readonly) unsigned cdhashDigestAlgorithm; 
@property (nonatomic,readonly) NSString * teamID; 
@property (nonatomic,readonly) NSString * signingID; 
@property (nonatomic,readonly) char isQuarantinedMount;                     //@synthesize isQuarantinedMount=_isQuarantinedMount - In the implementation block
@property (nonatomic,readonly) char isQuarantined; 
@property (nonatomic,readonly) char isUserApproved; 
@property (nonatomic,readonly) char isAppWrapper;                           //@synthesize isAppWrapper=_isAppWrapper - In the implementation block
@property (assign,nonatomic) char checkValidity;                            //@synthesize checkValidity=_checkValidity - In the implementation block
@property (assign,nonatomic) char triggeredByLibraryLoad;                   //@synthesize triggeredByLibraryLoad=_triggeredByLibraryLoad - In the implementation block
@property (assign,nonatomic) char isBundled;                                //@synthesize isBundled=_isBundled - In the implementation block
@property (assign,nonatomic) char isScript;                                 //@synthesize isScript=_isScript - In the implementation block
@property (assign,nonatomic) int pid;                                       //@synthesize pid=_pid - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(id)initWithURL:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)teamID;
-(NSURL *)originalURL;
-(NSURL *)url;
-(int)pid;
-(NSString *)signingID;
-(unsigned long long)objectID;
-(void)setPid:(int)arg1 ;
-(NSUUID *)volumeUUID;
-(char)checkValidity;
-(NSString *)fsTypeName;
-(NSString *)volumePath;
-(char)isQuarantined;
-(NSDate *)modTime;
-(id)signingInfo;
-(NSString *)cdhash;
-(NSData *)cdhashData;
-(unsigned)cdhashDigestAlgorithm;
-(void)setTriggeredByLibraryLoad:(char)arg1 ;
-(void)setIsScript:(char)arg1 ;
-(void)setIsBundled:(char)arg1 ;
-(NSString *)pathOnVolume;
-(char)isAppWrapper;
-(const SecCodeRef)staticCodeRef;
-(char)triggeredByLibraryLoad;
-(char)isBundled;
-(char)isUserApproved;
-(char)isQuarantinedMount;
-(NSDate *)mountTime;
-(char)isScript;
-(NSString *)blockDevice;
-(NSURL *)mainExecutableURL;
-(void)setCheckValidity:(char)arg1 ;
@end

