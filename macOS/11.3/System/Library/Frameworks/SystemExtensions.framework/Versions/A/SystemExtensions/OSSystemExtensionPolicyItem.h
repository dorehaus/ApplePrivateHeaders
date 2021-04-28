/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SystemExtensions.framework/Versions/A/SystemExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol OSSystemExtensionPolicyItem
@property (readonly) NSString * identifier; 
@property (readonly) NSString * extensionDisplayName; 
@property (readonly) NSString * applicationName; 
@property (readonly) NSString * developerName; 
@property (readonly) NSString * usageDescription; 
@property (readonly) NSString * teamID; 
@property (readonly) char teamIDPlatformBinary; 
@property (readonly) char teamIDNone; 
@property (readonly) NSString * shortVersionString; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSURL * stagedBundleURL; 
@property (readonly) NSURL * containingAppURL; 
@property (readonly) char rebootRequired; 
@property (assign) char enabled; 
@property (readonly) char modified; 
@required
-(char)enabled;
-(void)setEnabled:(char)arg1;
-(NSString *)identifier;
-(NSString *)shortVersionString;
-(NSString *)teamID;
-(NSString *)bundleVersion;
-(NSString *)applicationName;
-(char)teamIDNone;
-(char)teamIDPlatformBinary;
-(NSURL *)stagedBundleURL;
-(NSURL *)containingAppURL;
-(NSString *)extensionDisplayName;
-(NSString *)developerName;
-(NSString *)usageDescription;
-(char)rebootRequired;
-(char)modified;

@end

