/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <libobjc.A.dylib/DEDDeviceUISupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString, NSSet, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving> {

	NSString* _address;
	NSString* _build;
	NSString* _color;
	NSString* _deviceClass;
	NSString* _enclosureColor;
	NSString* _identifier;
	NSString* _model;
	NSString* _name;
	NSString* _productType;
	NSString* _platform;
	NSSet* _capabilities;
	long long _status;
	long long _transport;
	long long _remoteTransport;
	SFDevice* _sfDevice;
	NSString* __hashingKey;

}

@property (nonatomic,retain) NSString * _hashingKey;                //@synthesize _hashingKey=__hashingKey - In the implementation block
@property (retain) NSSet * capabilities;                            //@synthesize capabilities=_capabilities - In the implementation block
@property (retain) NSString * address;                              //@synthesize address=_address - In the implementation block
@property (retain) NSString * build;                                //@synthesize build=_build - In the implementation block
@property (retain) NSString * color;                                //@synthesize color=_color - In the implementation block
@property (retain) NSString * deviceClass;                          //@synthesize deviceClass=_deviceClass - In the implementation block
@property (retain) NSString * enclosureColor;                       //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (retain) NSString * platform;                             //@synthesize platform=_platform - In the implementation block
@property (assign) long long status;                                //@synthesize status=_status - In the implementation block
@property (assign) long long transport;                             //@synthesize transport=_transport - In the implementation block
@property (assign) long long remoteTransport;                       //@synthesize remoteTransport=_remoteTransport - In the implementation block
@property (retain) SFDevice * sfDevice;                             //@synthesize sfDevice=_sfDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)currentDevice;
+(id)archivedClasses;
+(id)nilSafeDevice;
+(id)deviceWithDictionary:(id)arg1 ;
+(id)_currentDeviceId;
+(id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2 ;
+(id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3 ;
+(id)idsDeviceWithDevice:(id)arg1 address:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)platform;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(id)shortDescription;
-(NSSet *)capabilities;
-(NSString *)model;
-(id)serialize;
-(char)isEqualToDevice:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)build;
-(NSString *)productType;
-(NSString *)deviceClass;
-(void)setStatus:(long long)arg1 ;
-(void)setCapabilities:(NSSet *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(long long)transport;
-(id)publicLogDescription;
-(void)setBuild:(NSString *)arg1 ;
-(id)imageData;
-(void)setTransport:(long long)arg1 ;
-(char)isCurrentDevice;
-(void)setProductType:(NSString *)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(id)hashingKey;
-(long long)remoteTransport;
-(char)hasCapabilities:(id)arg1 ;
-(id)hashingKeyForTempDevice;
-(char)isTemporaryDevice;
-(void)setRemoteTransport:(long long)arg1 ;
-(void)setSfDevice:(SFDevice *)arg1 ;
-(NSString *)_hashingKey;
-(void)set_hashingKey:(NSString *)arg1 ;
-(char)isLikeDevice:(id)arg1 ;
-(char)isMoreCompleteThan:(id)arg1 ;
-(SFDevice *)sfDevice;
-(id)imageURLForScale:(float)arg1 ;
-(id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6 ;
-(void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(/*^block*/id)arg2 ;
@end
