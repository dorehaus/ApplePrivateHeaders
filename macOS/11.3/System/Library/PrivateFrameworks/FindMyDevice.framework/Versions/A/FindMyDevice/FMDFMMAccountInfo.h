/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface FMDFMMAccountInfo : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _username;
	NSString* _fmmAuthToken;
	NSDictionary* _additionalInfo;
	NSString* _fmdServerHost;
	NSString* _fmdServerProtocolScheme;
	NSString* _fmdAPSEnvironment;
	NSString* _fmdIDSIdentifier;
	NSString* _rootVolumeUUID;
	unsigned _uid;
	NSString* _userGUID;

}

@property (nonatomic,retain) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * fmmAuthToken;                         //@synthesize fmmAuthToken=_fmmAuthToken - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,retain) NSString * fmdServerHost;                        //@synthesize fmdServerHost=_fmdServerHost - In the implementation block
@property (nonatomic,retain) NSString * fmdServerProtocolScheme;              //@synthesize fmdServerProtocolScheme=_fmdServerProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * fmdAPSEnvironment;                    //@synthesize fmdAPSEnvironment=_fmdAPSEnvironment - In the implementation block
@property (nonatomic,retain) NSString * fmdIDSIdentifier;                     //@synthesize fmdIDSIdentifier=_fmdIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSString * rootVolumeUUID;                       //@synthesize rootVolumeUUID=_rootVolumeUUID - In the implementation block
@property (nonatomic,retain) NSString * userGUID;                             //@synthesize userGUID=_userGUID - In the implementation block
@property (assign,nonatomic) unsigned uid;                                    //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) char hasMandatoryInfo; 
+(char)supportsSecureCoding;
-(char)hasMandatoryInfo;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(void)setFmmAuthToken:(NSString *)arg1 ;
-(void)setFmdServerHost:(NSString *)arg1 ;
-(void)setFmdAPSEnvironment:(NSString *)arg1 ;
-(void)setFmdServerProtocolScheme:(NSString *)arg1 ;
-(NSString *)userGUID;
-(void)setUserGUID:(NSString *)arg1 ;
-(NSString *)rootVolumeUUID;
-(NSString *)fmmAuthToken;
-(NSString *)fmdServerHost;
-(NSString *)fmdServerProtocolScheme;
-(NSString *)fmdAPSEnvironment;
-(NSString *)fmdIDSIdentifier;
-(void)setRootVolumeUUID:(NSString *)arg1 ;
-(void)setFmdIDSIdentifier:(NSString *)arg1 ;
@end

