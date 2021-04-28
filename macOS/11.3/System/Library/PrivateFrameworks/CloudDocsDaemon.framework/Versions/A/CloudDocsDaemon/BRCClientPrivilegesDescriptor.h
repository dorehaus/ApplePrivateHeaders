/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class NSString, NSSet;

@interface BRCClientPrivilegesDescriptor : NSObject {

	NSString* _debugIdentifier;
	char _cloudEnabledStatusWithoutLogOutStatus;
	char _canGetApplicationInfo;
	char _isNonAppSandboxed;
	char _isAllowedToAccessAnyCloudService;
	char _isProxyEntitled;
	char _isSharingProxyEntitled;
	char _isFolderSharingProxyEntitled;
	char _isSharingPrivateInterfaceEntitled;
	char _isAutomationEntitled;
	char _hasAuditToken;
	NSString* _applicationIdentifier;
	NSSet* _appLibraryIDs;
	NSString* _defaultAppLibraryID;
	SCD_Struct_BR22 _auditToken;

}

@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) char isNonAppSandboxed;                              //@synthesize isNonAppSandboxed=_isNonAppSandboxed - In the implementation block
@property (nonatomic,readonly) char isAllowedToAccessAnyCloudService;               //@synthesize isAllowedToAccessAnyCloudService=_isAllowedToAccessAnyCloudService - In the implementation block
@property (nonatomic,readonly) char isProxyEntitled;                                //@synthesize isProxyEntitled=_isProxyEntitled - In the implementation block
@property (nonatomic,readonly) char isSharingProxyEntitled;                         //@synthesize isSharingProxyEntitled=_isSharingProxyEntitled - In the implementation block
@property (nonatomic,readonly) char isFolderSharingProxyEntitled;                   //@synthesize isFolderSharingProxyEntitled=_isFolderSharingProxyEntitled - In the implementation block
@property (nonatomic,readonly) char isSharingPrivateInterfaceEntitled;              //@synthesize isSharingPrivateInterfaceEntitled=_isSharingPrivateInterfaceEntitled - In the implementation block
@property (nonatomic,readonly) char isAutomationEntitled;                           //@synthesize isAutomationEntitled=_isAutomationEntitled - In the implementation block
@property (nonatomic,readonly) char canFetchUserQuota; 
@property (nonatomic,readonly) NSSet * appLibraryIDs;                               //@synthesize appLibraryIDs=_appLibraryIDs - In the implementation block
@property (nonatomic,readonly) NSString * defaultAppLibraryID;                      //@synthesize defaultAppLibraryID=_defaultAppLibraryID - In the implementation block
@property (nonatomic,readonly) char hasAuditToken;                                  //@synthesize hasAuditToken=_hasAuditToken - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR22 auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
+(char)_isNonSandboxedForAuditToken:(SCD_Struct_BR22)arg1 ;
-(id)description;
-(SCD_Struct_BR22)auditToken;
-(NSString *)applicationIdentifier;
-(int)pid;
-(id)initWithAuditToken:(SCD_Struct_BR22)arg1 ;
-(char)hasAuditToken;
-(char)isNonAppSandboxed;
-(char)hasPid;
-(NSSet *)appLibraryIDs;
-(char)cloudEnabledStatusForSession:(id)arg1 ;
-(NSString *)defaultAppLibraryID;
-(char)isProxyEntitled;
-(char)isAutomationEntitled;
-(char)isSharingPrivateInterfaceEntitled;
-(id)initWithNonSandboxedAppWithAppLibraryIDs:(id)arg1 bundleID:(id)arg2 auditToken:(SCD_Struct_BR22)arg3 ;
-(char)isSharingProxyEntitled;
-(char)canFetchUserQuota;
-(char)isFolderSharingProxyEntitled;
-(void)updateCloudEnabledStatus;
-(void)_finishSetupWithClientContainerIDs:(id)arg1 ;
-(char)_computeCloudEnabledStatusWithoutLogOutStatus;
-(char)isAllowedToAccessAnyCloudService;
@end

