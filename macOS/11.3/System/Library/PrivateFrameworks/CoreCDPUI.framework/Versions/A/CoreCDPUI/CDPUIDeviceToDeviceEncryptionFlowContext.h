/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/Versions/A/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, NSImage, NSString;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject {

	NSWindow* _hostWindow;
	NSImage* _displayImage;
	long long _deviceToDeviceEncryptionUpgradeUIStyle;
	long long _deviceToDeviceEncryptionUpgradeType;
	NSString* _securityUpgradeContext;
	NSString* _featureName;
	NSString* _altDSID;

}

@property (__weak) NSWindow * hostWindow;                                                   //@synthesize hostWindow=_hostWindow - In the implementation block
@property (retain) NSImage * displayImage;                                                  //@synthesize displayImage=_displayImage - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;              //@synthesize deviceToDeviceEncryptionUpgradeUIStyle=_deviceToDeviceEncryptionUpgradeUIStyle - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeType;                 //@synthesize deviceToDeviceEncryptionUpgradeType=_deviceToDeviceEncryptionUpgradeType - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                               //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (nonatomic,copy) NSString * featureName;                                          //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                     //@synthesize altDSID=_altDSID - In the implementation block
-(NSString *)altDSID;
-(void)setDisplayImage:(NSImage *)arg1 ;
-(NSString *)featureName;
-(id)initWithAltDSID:(id)arg1 ;
-(NSImage *)displayImage;
-(void)setHostWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostWindow;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeUIStyle:(long long)arg1 ;
-(void)setDeviceToDeviceEncryptionUpgradeType:(long long)arg1 ;
-(long long)deviceToDeviceEncryptionUpgradeType;
-(long long)deviceToDeviceEncryptionUpgradeUIStyle;
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
@end

