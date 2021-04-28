/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemiCloudDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowCloudBackup;
	NSNumber* _payloadAllowCloudDocumentSync;
	NSNumber* _payloadAllowFindMyFriendsModification;
	NSNumber* _payloadAllowPhotoStream;
	NSNumber* _payloadAllowSharedStream;
	NSNumber* _payloadAllowCloudPhotoLibrary;
	NSNumber* _payloadAllowCloudBookmarks;
	NSNumber* _payloadAllowCloudMail;
	NSNumber* _payloadAllowCloudCalendar;
	NSNumber* _payloadAllowCloudReminders;
	NSNumber* _payloadAllowCloudAddressBook;
	NSNumber* _payloadAllowCloudNotes;
	NSNumber* _payloadAllowCloudDesktopAndDocuments;
	NSNumber* _payloadAllowCloudKeychainSync;

}

@property (nonatomic,copy) NSNumber * payloadAllowCloudBackup;                            //@synthesize payloadAllowCloudBackup=_payloadAllowCloudBackup - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudDocumentSync;                      //@synthesize payloadAllowCloudDocumentSync=_payloadAllowCloudDocumentSync - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowFindMyFriendsModification;              //@synthesize payloadAllowFindMyFriendsModification=_payloadAllowFindMyFriendsModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPhotoStream;                            //@synthesize payloadAllowPhotoStream=_payloadAllowPhotoStream - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSharedStream;                           //@synthesize payloadAllowSharedStream=_payloadAllowSharedStream - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudPhotoLibrary;                      //@synthesize payloadAllowCloudPhotoLibrary=_payloadAllowCloudPhotoLibrary - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudBookmarks;                         //@synthesize payloadAllowCloudBookmarks=_payloadAllowCloudBookmarks - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudMail;                              //@synthesize payloadAllowCloudMail=_payloadAllowCloudMail - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudCalendar;                          //@synthesize payloadAllowCloudCalendar=_payloadAllowCloudCalendar - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudReminders;                         //@synthesize payloadAllowCloudReminders=_payloadAllowCloudReminders - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudAddressBook;                       //@synthesize payloadAllowCloudAddressBook=_payloadAllowCloudAddressBook - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudNotes;                             //@synthesize payloadAllowCloudNotes=_payloadAllowCloudNotes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudDesktopAndDocuments;               //@synthesize payloadAllowCloudDesktopAndDocuments=_payloadAllowCloudDesktopAndDocuments - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCloudKeychainSync;                      //@synthesize payloadAllowCloudKeychainSync=_payloadAllowCloudKeychainSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowCloudBackup:(id)arg2 withAllowCloudDocumentSync:(id)arg3 withAllowFindMyFriendsModification:(id)arg4 withAllowPhotoStream:(id)arg5 withAllowSharedStream:(id)arg6 withAllowCloudPhotoLibrary:(id)arg7 withAllowCloudBookmarks:(id)arg8 withAllowCloudMail:(id)arg9 withAllowCloudCalendar:(id)arg10 withAllowCloudReminders:(id)arg11 withAllowCloudAddressBook:(id)arg12 withAllowCloudNotes:(id)arg13 withAllowCloudDesktopAndDocuments:(id)arg14 withAllowCloudKeychainSync:(id)arg15 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowCloudBackup:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudDocumentSync:(NSNumber *)arg1 ;
-(void)setPayloadAllowFindMyFriendsModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowPhotoStream:(NSNumber *)arg1 ;
-(void)setPayloadAllowSharedStream:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudPhotoLibrary:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudBookmarks:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudMail:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudCalendar:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudReminders:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudAddressBook:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudNotes:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudDesktopAndDocuments:(NSNumber *)arg1 ;
-(void)setPayloadAllowCloudKeychainSync:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowCloudBackup;
-(NSNumber *)payloadAllowCloudDocumentSync;
-(NSNumber *)payloadAllowFindMyFriendsModification;
-(NSNumber *)payloadAllowPhotoStream;
-(NSNumber *)payloadAllowSharedStream;
-(NSNumber *)payloadAllowCloudPhotoLibrary;
-(NSNumber *)payloadAllowCloudBookmarks;
-(NSNumber *)payloadAllowCloudMail;
-(NSNumber *)payloadAllowCloudCalendar;
-(NSNumber *)payloadAllowCloudReminders;
-(NSNumber *)payloadAllowCloudAddressBook;
-(NSNumber *)payloadAllowCloudNotes;
-(NSNumber *)payloadAllowCloudDesktopAndDocuments;
-(NSNumber *)payloadAllowCloudKeychainSync;
@end

