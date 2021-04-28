/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKCompatibilityDelegate;
@class NSString, NSData;

@interface TSKApplicationPropertiesProvider : NSObject {

	id<TSKCompatibilityDelegate> _compatibilityDelegate;

}

@property (nonatomic,readonly) NSString * applicationName; 
@property (nonatomic,readonly) NSString * applicationDisplayName; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) NSString * nativeDocumentType; 
@property (nonatomic,readonly) NSString * nativeDocumentExtension; 
@property (nonatomic,readonly) NSString * documentTypeDisplayName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayNameForSharingInvitation; 
@property (nonatomic,readonly) NSString * templateTypeDisplayName; 
@property (nonatomic,readonly) id<TSKCompatibilityDelegate> compatibilityDelegate;                   //@synthesize compatibilityDelegate=_compatibilityDelegate - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitContainerIdentifier; 
@property (nonatomic,readonly) NSString * cloudKitSyncContainerIdentifier; 
@property (nonatomic,readonly) NSString * bladerunnerContainerIdentifier; 
@property (nonatomic,copy,readonly) id appTextDefaults; 
@property (nonatomic,copy,readonly) NSData * iWorkTextDefaultsPassphraseVerifier; 
@property (nonatomic,readonly) char designModeEnabled; 
@property (nonatomic,readonly) char supportsWebVideos; 
@property (nonatomic,readonly) unsigned long long webVideoRequiredDocumentWriteVersion; 
-(unsigned long long)applicationType;
-(NSString *)applicationName;
-(NSString *)applicationDisplayName;
-(NSString *)cloudKitContainerIdentifier;
-(char)designModeEnabled;
-(NSString *)documentTypeDisplayName;
-(NSString *)templateTypeDisplayName;
-(id<TSKCompatibilityDelegate>)compatibilityDelegate;
-(NSString *)nativeDocumentType;
-(NSString *)nativeDocumentExtension;
-(NSString *)documentTypeDisplayNameForSharingInvitation;
-(NSString *)cloudKitSyncContainerIdentifier;
-(NSString *)bladerunnerContainerIdentifier;
-(unsigned long long)webVideoRequiredDocumentWriteVersion;
-(id)appTextDefaults;
-(NSData *)iWorkTextDefaultsPassphraseVerifier;
-(void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2 ;
-(char)supportsWebVideos;
-(id)initWithCompatibilityDelegate:(id)arg1 ;
@end

