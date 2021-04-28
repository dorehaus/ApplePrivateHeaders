/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBBundleProperties.h>

@class NSString, NSURL, NSDictionary, NSCache;

@interface RBXPCBundleProperties : NSObject <RBBundleProperties> {

	int _pid;
	NSCache* _plistValues;
	char _canFetchBundle;
	char _backgroundRefreshEnabled;
	char _hasPreferredJetsamBand;
	char _supportsBackgroundContentFetching;
	char _supportsBackgroundNetworkAuthentication;
	char _supportsBackgroundAudio;
	char _supportsUnboundedTaskCompletion;
	char _usesSocketMonitoring;
	char _isExtension;
	int _preferredJetsamBand;
	int _platform;
	NSString* _identifier;
	NSString* _path;
	NSString* _executablePath;
	NSString* _extensionPointIdentifier;
	NSURL* _dataContainerURL;
	NSDictionary* _environmentVariables;

}

@property (getter=isBackgroundRefreshEnabled,nonatomic,readonly) char backgroundRefreshEnabled;              //@synthesize backgroundRefreshEnabled=_backgroundRefreshEnabled - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                                     //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * environmentVariables;                                          //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier;                                     //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,readonly) char supportsBackgroundContentFetching;                                       //@synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching - In the implementation block
@property (nonatomic,readonly) char supportsBackgroundNetworkAuthentication;                                 //@synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication - In the implementation block
@property (nonatomic,readonly) char supportsBackgroundAudio;                                                 //@synthesize supportsBackgroundAudio=_supportsBackgroundAudio - In the implementation block
@property (nonatomic,readonly) char supportsUnboundedTaskCompletion;                                         //@synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion - In the implementation block
@property (nonatomic,readonly) char usesSocketMonitoring;                                                    //@synthesize usesSocketMonitoring=_usesSocketMonitoring - In the implementation block
@property (nonatomic,readonly) int preferredJetsamBand;                                                      //@synthesize preferredJetsamBand=_preferredJetsamBand - In the implementation block
@property (nonatomic,readonly) char hasPreferredJetsamBand;                                                  //@synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand - In the implementation block
@property (nonatomic,readonly) char isExtension;                                                             //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) int platform;                                                                 //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)usesSocketMonitoring;
-(char)supportsBackgroundContentFetching;
-(char)supportsBackgroundNetworkAuthentication;
-(char)supportsUnboundedTaskCompletion;
-(char)isBackgroundRefreshEnabled;
-(int)preferredJetsamBand;
-(char)hasPreferredJetsamBand;
-(NSString *)bundleIdentifier;
-(NSURL *)dataContainerURL;
-(int)platform;
-(NSDictionary *)environmentVariables;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(NSString *)extensionPointIdentifier;
-(id)initWithPID:(int)arg1 ;
-(char)isExtension;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(char)supportsBackgroundAudio;
@end

