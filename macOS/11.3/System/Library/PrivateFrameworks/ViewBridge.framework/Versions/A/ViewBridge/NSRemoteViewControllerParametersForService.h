/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSSecureCoding;
@class NSString, NSUUID, NSObject;

@interface NSRemoteViewControllerParametersForService : NSObject <NSSecureCoding, NSCopying> {

	NSString* _serviceViewControllerClassName;
	NSUUID* _extensionIdentifier;
	NSObject*<NSSecureCoding> _hostAppClientParameters;
	NSString* _serviceViewControllerInstanceIdentifier;

}

@property (copy) NSString * serviceViewControllerClassName;                       //@synthesize serviceViewControllerClassName=_serviceViewControllerClassName - In the implementation block
@property (retain) NSUUID * extensionIdentifier;                                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (copy) NSObject*<NSSecureCoding> hostAppClientParameters;               //@synthesize hostAppClientParameters=_hostAppClientParameters - In the implementation block
@property (copy) NSString * serviceViewControllerInstanceIdentifier;              //@synthesize serviceViewControllerInstanceIdentifier=_serviceViewControllerInstanceIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)serviceViewControllerInstanceIdentifier;
-(void)setServiceViewControllerInstanceIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSUUID *)arg1 ;
-(void)setServiceViewControllerClassName:(NSString *)arg1 ;
-(NSObject*<NSSecureCoding>)hostAppClientParameters;
-(NSString *)serviceViewControllerClassName;
-(void)setHostAppClientParameters:(NSObject*<NSSecureCoding>)arg1 ;
@end

