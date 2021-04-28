/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSObject, NSArray, NSURL, NSString, NSSet, SMConfMigratorPlugin;

@interface SMConfMigratorRule : NSObject <NSSecureCoding> {

	char _overwriteExistingPath;
	char _disableMigratedVersion;
	char _skipIfDestinationExists;
	char _skipIfLegacyServer;
	char _deferredCopy;
	char _allowSIP;
	char _runsAfterRestart;
	char _defaultedCopyRule;
	char _attemptedPluginLoad;
	NSObject* _identifier;
	NSArray* _children;
	unsigned long long _actionType;
	unsigned long long _context;
	NSURL* _path;
	NSString* _maximumSourceVersion;
	NSString* _minimumSourceVersion;
	NSSet* _disallowedSourceVersions;
	NSURL* _alternateDestination;
	NSSet* _skipChecksums;
	NSString* _skipIfOlderThan;
	NSArray* _toolArguments;
	NSURL* _toolPath;
	SMConfMigratorPlugin* _plugin;

}

@property (retain) SMConfMigratorPlugin * plugin;                                    //@synthesize plugin=_plugin - In the implementation block
@property (assign) char attemptedPluginLoad;                                         //@synthesize attemptedPluginLoad=_attemptedPluginLoad - In the implementation block
@property (retain) NSObject * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSArray * children;                                               //@synthesize children=_children - In the implementation block
@property (assign) unsigned long long actionType;                                    //@synthesize actionType=_actionType - In the implementation block
@property (assign) unsigned long long context;                                       //@synthesize context=_context - In the implementation block
@property (retain) NSURL * path;                                                     //@synthesize path=_path - In the implementation block
@property (retain) NSString * maximumSourceVersion;                                  //@synthesize maximumSourceVersion=_maximumSourceVersion - In the implementation block
@property (retain) NSString * minimumSourceVersion;                                  //@synthesize minimumSourceVersion=_minimumSourceVersion - In the implementation block
@property (retain) NSSet * disallowedSourceVersions;                                 //@synthesize disallowedSourceVersions=_disallowedSourceVersions - In the implementation block
@property (retain) NSURL * alternateDestination;                                     //@synthesize alternateDestination=_alternateDestination - In the implementation block
@property (retain) NSSet * skipChecksums;                                            //@synthesize skipChecksums=_skipChecksums - In the implementation block
@property (assign) char overwriteExistingPath;                                       //@synthesize overwriteExistingPath=_overwriteExistingPath - In the implementation block
@property (assign) char disableMigratedVersion;                                      //@synthesize disableMigratedVersion=_disableMigratedVersion - In the implementation block
@property (assign) char skipIfDestinationExists;                                     //@synthesize skipIfDestinationExists=_skipIfDestinationExists - In the implementation block
@property (assign) char skipIfLegacyServer;                                          //@synthesize skipIfLegacyServer=_skipIfLegacyServer - In the implementation block
@property (assign) char deferredCopy;                                                //@synthesize deferredCopy=_deferredCopy - In the implementation block
@property (retain) NSString * skipIfOlderThan;                                       //@synthesize skipIfOlderThan=_skipIfOlderThan - In the implementation block
@property (retain) NSArray * toolArguments;                                          //@synthesize toolArguments=_toolArguments - In the implementation block
@property (retain) NSURL * toolPath;                                                 //@synthesize toolPath=_toolPath - In the implementation block
@property (assign) char allowSIP;                                                    //@synthesize allowSIP=_allowSIP - In the implementation block
@property (assign) char runsAfterRestart;                                            //@synthesize runsAfterRestart=_runsAfterRestart - In the implementation block
@property (getter=isDefaultedCopyRule,readonly) char defaultedCopyRule;              //@synthesize defaultedCopyRule=_defaultedCopyRule - In the implementation block
+(char)supportsSecureCoding;
+(id)loadPlugin:(id)arg1 forRequest:(id)arg2 ;
+(void)executeSpecificPlugin:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject *)identifier;
-(NSURL *)path;
-(void)setPath:(NSURL *)arg1 ;
-(void)setIdentifier:(NSObject *)arg1 ;
-(unsigned long long)context;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(SMConfMigratorPlugin *)plugin;
-(void)setPlugin:(SMConfMigratorPlugin *)arg1 ;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(NSURL *)toolPath;
-(double)estimateTime;
-(void)setSkipIfLegacyServer:(char)arg1 ;
-(void)setSkipIfDestinationExists:(char)arg1 ;
-(void)setDisableMigratedVersion:(char)arg1 ;
-(void)setOverwriteExistingPath:(char)arg1 ;
-(void)setDeferredCopy:(char)arg1 ;
-(void)setRunsAfterRestart:(char)arg1 ;
-(void)setAlternateDestination:(NSURL *)arg1 ;
-(void)setSkipIfOlderThan:(NSString *)arg1 ;
-(void)setSkipChecksums:(NSSet *)arg1 ;
-(void)setToolPath:(NSURL *)arg1 ;
-(void)setToolArguments:(NSArray *)arg1 ;
-(void)setMinimumSourceVersion:(NSString *)arg1 ;
-(void)setMaximumSourceVersion:(NSString *)arg1 ;
-(void)setDisallowedSourceVersions:(NSSet *)arg1 ;
-(NSSet *)skipChecksums;
-(NSArray *)toolArguments;
-(char)overwriteExistingPath;
-(char)disableMigratedVersion;
-(char)skipIfDestinationExists;
-(char)skipIfLegacyServer;
-(char)deferredCopy;
-(char)runsAfterRestart;
-(char)allowSIP;
-(NSString *)skipIfOlderThan;
-(NSURL *)alternateDestination;
-(NSString *)maximumSourceVersion;
-(NSString *)minimumSourceVersion;
-(NSSet *)disallowedSourceVersions;
-(void)setAllowSIP:(char)arg1 ;
-(char)attemptedPluginLoad;
-(void)setAttemptedPluginLoad:(char)arg1 ;
-(id)initWithConfDict:(id)arg1 ;
-(char)supportedFromSystem:(id)arg1 toSystem:(id)arg2 ofType:(unsigned long long)arg3 ;
-(char)defaultedCopyRule;
-(void)executePlugin;
-(char)isDefaultedCopyRule;
@end
