/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFPeerDevice : NSObject <NSSecureCoding> {

	char _defaultPairedDevice;
	char _validKey;
	NSString* _uniqueID;
	NSString* _modelIdentifier;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _name;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	long long _keyCounter;

}

@property (copy) NSString * uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (copy) NSString * modelIdentifier;                                    //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (copy) NSString * productName;                                        //@synthesize productName=_productName - In the implementation block
@property (copy) NSString * productVersion;                                     //@synthesize productVersion=_productVersion - In the implementation block
@property (copy) NSString * productBuildVersion;                                //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (copy) NSString * deviceColor;                                        //@synthesize deviceColor=_deviceColor - In the implementation block
@property (copy) NSString * enclosureColor;                                     //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (getter=isDefaultPairedDevice) char defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign) char validKey;                                               //@synthesize validKey=_validKey - In the implementation block
@property (assign) long long keyCounter;                                        //@synthesize keyCounter=_keyCounter - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)productName;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)modelIdentifier;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(void)setProductName:(NSString *)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(char)isDefaultPairedDevice;
-(NSString *)deviceColor;
-(NSString *)enclosureColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(char)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setValidKey:(char)arg1 ;
-(void)setKeyCounter:(long long)arg1 ;
-(char)validKey;
-(long long)keyCounter;
@end

